#include <iostream>

int main() {
    int tamanho = 5;
    int* buffer = new int[tamanho]; // alocação dinâmica (heap)

    for (int i = 0; i < tamanho; i++) {
        buffer[i] = i + 10;
    }

    std::cout << "Buffer dinamico: ";
    for (int i = 0; i < tamanho; i++) {
        std::cout << buffer[i] << " ";
    }
    std::cout << std::endl;

    delete[] buffer; // liberar a memória (sem RAII precisa lembrar!)
    return 0;
}
