#include <iostream>
#define GLFW_INCLUDE_NONE
//glfw gera a janela
//glad carrega certos aspectos opengl como por exemplo cores
#include <glad/glad.h>
#include <GLFW/glfw3.h>

int main() {
    glfwInit();
    //iniciar glfw
    glfwInit();
    //definir versão opengl
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR,3);//opengl 3 para cima
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR,3);//minimo opengl 3
    glfwWindowHint(GLFW_OPENGL_PROFILE,GLFW_OPENGL_CORE_PROFILE);
    //tipo um pacote(core(somente o necessario/atualizado(ser for descontinuada vai ao outro perfil)) e compatibilidade(todas as funções até mesmo as descontinuadas))
    //criar elemento janela
    GLFWwindow *janela = glfwCreateWindow(800,800,"App",NULL,NULL);//x,y,nome,optional monitor(fullscreen), compartilhar contexto(multiplas janelas)
    if(janela == NULL){
        std::cout<<"algum problema ao criar a janela"<<std::endl;
        glfwTerminate();
        return -1;
    }//criar janela
    glfwMakeContextCurrent(janela);//definir contexto atual(conceito opengl)

    gladLoadGL();//carrega as funções opengl
    //criando uma cor
    glClearColor(0.18f,0.70f, 0.97f, 1.0f);//definir cor (rgba)
    glClear(GL_COLOR_BUFFER_BIT);//limpar buffer
    glfwSwapBuffers(janela);//troca de buffers
    glViewport(0,0,800,800);//area de renderização(A(x,y),B(x,y))
    //manter a janela aberta
    while(!glfwWindowShouldClose(janela)){
        //processar tudo
        glfwPollEvents();//sem isso a janela nn respondera
    }
    glfwDestroyWindow(janela);//destoi janela
    // 5. Encerrar GLFW
    glfwTerminate();
    return 0;
}