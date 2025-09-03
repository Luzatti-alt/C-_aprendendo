#include <iostream>
#define GLFW_INCLUDE_NONE
#include <cmath> //garantir que a raiz funcione
//glfw gera a janela
//glad carrega certos aspectos opengl como por exemplo cores
#include <glad/glad.h>
#include <GLFW/glfw3.h>

//o opengl nn disponibiliza com defaults para o vetex no fragments shader temos que escrever ele
//um exemplo de vertex shader e fragment shader
//por enquanto trabalharemos em 2 dimensoes 
//a origem esta mo meio da janela(o resto é a mesma logica de um plano cartesiano)
const char *vertexShaderSource = "#version 330 core\n"
"layout (location = 0) in vec3 aPos;\n"
"void main()\n"
"{\n"
" gl_Position = vec4(aPos.x, aPos.y,aPos.z, 1.0);\n"
"}\0";
const char *fragmentShaderSource = "#version 330 cor\n"
"out vec4 FragColor;\n"
"void main()\n"
"{\n"
" FragColor = vec4(0.8f, 0.3f, 0.02f, 1.0f);\n"
"}\0";

int main() {
    glfwInit();
    //iniciar glfw
    glfwInit();
    //definir versão opengl
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR,3);//opengl 3 para cima
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR,3);//minimo opengl 3
    glfwWindowHint(GLFW_OPENGL_PROFILE,GLFW_OPENGL_CORE_PROFILE);
    //tipo um pacote(core(somente o necessario/atualizado(ser for descontinuada vai ao outro perfil)) e compatibilidade(todas as funções até mesmo as descontinuadas))
    //floats normais tbm funcionam mas o do opengl funciona melhor com aplicações opengl
    GLfloat vertices[]=
    {
        -0.5f, -0.5f * float(sqrt(3))/ 3, 0.3f,
        0.5f, -0.5f * float(sqrt(3))/ 3, 0.0f,
        0.0f, 0.5f * float(sqrt(3))/ 2, 0.0f
    };
    //elementos opengl são acessados via referencias
    //criar elemento janela
    GLFWwindow *janela = glfwCreateWindow(800,800,"App",NULL,NULL);//x,y,nome,optional monitor(fullscreen), compartilhar contexto(multiplas janelas)
    if(janela == NULL){
        std::cout<<"algum problema ao criar a janela"<<std::endl;
        glfwTerminate();
        return -1;
    };//criar janela
    glfwMakeContextCurrent(janela);//definir contexto atual(conceito opengl)

    gladLoadGL();//carrega as funções opengl
    glViewport(0,0,800,800);//area de renderização(A(x,y),B(x,y))
    //criando uma referencia para o vertice
    GLuint vertexShader = glCreateShader(GL_VERTEX_SHADER); //opengl int = criar shader(tipagem do shader)
    glShaderSource(vertexShader, 1, &vertexShaderSource, NULL);//aponta para o local alocado na memoria
    //compilar para codigo de maquina
    glCompileShader(vertexShader);//vertex shader foi criado
    GLuint fragmentShader = glCreateShader(GL_FRAGMENT_SHADER);
    glShaderSource(fragmentShader, 1, &fragmentShaderSource, NULL);// mesma coisa so que sendo o shader de fragmento
    //compilar para codigo de maquina
    glCompileShader(fragmentShader);//vertex shader foi criado
    //juntar os dois shaders e assim criar o programa de shader
    GLuint shaderProgram = glCreateProgram();
    glAttachShader(shaderProgram,vertexShader);
    glAttachShader(shaderProgram,fragmentShader);
    //juntando
    glLinkProgram(shaderProgram);
    //como ja estão no programa agnt pode deletar
    glDeleteShader(vertexShader);
    glDeleteShader(fragmentShader);
    //shader pronto mas ainda temos que manipular os vertex
    //vertex buffers entre gpu e cpu é uma boa quantidade de dados de uma vez(nn vale a pena mandar de pouco em pouco) VBO é um array de referencias
    //vertex array (aponta aos VAO) tem que ser VAO dps VBO sempre
    GLuint VAO,VBO;
    //criar obj de buffer
    glGenVertexArrays(1,&VAO);
    glBindVertexArray(VAO);
    glGenBuffers(1,&VBO);//1 por so termos 1 no momento e estamos bindando(um certo obj é o atual e numa função que modifica este tipo de obj ele modifica o obj atual/obj bindado)
    glBindBuffer(GL_ARRAY_BUFFER, VBO);//tipo de gl buffer
    glBufferData(GL_ARRAY_BUFFER,sizeof(vertices),vertices,GL_STATIC_DRAW);//tipo de buffer,tamanho do dado em bytes(por isso usamos o sizeof) e a data em si e seu uso
    //stream/static/dynamic + _ + Draw/read/copy
    //possibilitar a leitura do vbo
    glVertexAttribPointer(0,3,GL_FLOAT,GL_FALSE,3*sizeof(float),(void*)0);//index do atribudo de index(comm com vertex shader) sendo pos, valores por vertex, tipos de valores, 
    //(so se for com int),tanto de dados entre vertices, offset(pointer onde os vertices) começam no array
    //como esse exemplo esta no inicio do array fica esse pointer com void, atributo do vertice configurado
    //habilitar o atributo de vertice
    glEnableVertexAttribArray(0);//por conta do nosso atributo de vertex
    //extra bindar vbo e voa para garantir
    glBindBuffer(GL_ARRAY_BUFFER,0);
    glBindBuffer(GL_ARRAY_BUFFER,0);

    //criando uma cor
    glClearColor(0.18f,0.70f, 0.97f, 1.0f);//definir cor (rgba)
    glClear(GL_COLOR_BUFFER_BIT);//limpar buffer
    glfwSwapBuffers(janela);//troca de buffers
    //manter a janela aberta
    while(!glfwWindowShouldClose(janela)){
        //processar tudo
        glClearColor(0.18f,0.70f, 0.97f, 1.0f);//definir cor (rgba)
        glClear(GL_COLOR_BUFFER_BIT);//limpar buffer
        glUseProgram(shaderProgram);
        glBindVertexArray(VAO);//so para garantir
        glDrawArrays(GL_TRIANGLES,0,3);//forma/primitivo , index dos primitivos, qnt de vertices
        glfwSwapBuffers(janela);//troca de buffers para garantir que rode
        glfwPollEvents();//sem isso a janela nn respondera
    }
    glDeleteVertexArrays(1,&VAO);
    glDeleteBuffers(1,&VBO);
    glDeleteProgram(shaderProgram);
    glfwDestroyWindow(janela);//destoi janela
    // 5. Encerrar GLFW
    glfwTerminate();
    return 0;
}