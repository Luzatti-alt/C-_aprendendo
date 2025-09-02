#include <iostream>
int main(){
    //tipo um pointer que aponta para nada nullptr
    //uso para determinar se conseguimos alocar na memoria
    int *pointer = nullptr;//ou qnd nn vamos definir o pointer no inicio
    //se,pre criei um pointer ou apontando para algo ou para nada
    //bom para conseguir trackear o pointer
    if(pointer ==nullptr){
        std::cout<<"pointer nulo";
    }
    return 0;
}