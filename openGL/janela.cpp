#include <iostream>
#define GLFW_INCLUDE_NONE
#include <glad/glad.h>
#include <GLFW/glfw3.h>

int main() {
    //iniciar glfw
    if (!glfwInit()) {
        // Initialization failed
        std::cerr << "Falha ao inicializar a GLFW" << std::endl;
        return -1;

    }
    //criar janela
    GLFWwindow* window = glfwCreateWindow(800, 600, "Minha Janela OpenGL", NULL, NULL);
    if (window == NULL) {
        std::cerr << "Falha ao criar a janela GLFW" << std::endl;
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);
    // 3. Iniciar GLAD
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
        std::cerr << "Falha ao inicializar o GLAD" << std::endl;
        return -1;
    }
    // 4. Loop de renderização 
    while (!glfwWindowShouldClose(window)) {
        // Renderize aqui
        glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        // Troca os buffers e lida com eventos
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    // 5. Encerrar GLFW
    glfwTerminate();
    return 0;
}