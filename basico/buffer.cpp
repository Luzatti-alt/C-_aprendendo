#include <iostream>
//espaço na memoria usada para armazenar dados
//nn precisa do RAII mas é melhor com
#include <cstring> // para memcpy

int main() {
    const char* mensagem = "Ola, mundo!";
    size_t tamanho = std::strlen(mensagem);

    // Criamos um buffer (array) para guardar temporariamente os dados
    char buffer[50]; 

    // Copiamos a mensagem para o buffer
    std::memcpy(buffer, mensagem, tamanho + 1); 

    std::cout << "Buffer contem: " << buffer << std::endl;

    return 0;
}