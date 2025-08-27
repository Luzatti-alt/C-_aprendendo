#include <iostream>
//mesma logica py so que em vez de def é void
//construir antes do main garante que é possivel de chama-la
//ou void funcao(); e dps definirmos a função
void funcao(std::string nome_func){
    //defini parametro
    //parametro algo que a função vai usar que surge fora dela
    std::cout<<"chamando função: "<<nome_func<<'\n';
    std::cout<<"chamou função";
}
int main(){
    std::string nome_func = "um nome ai";
    funcao(nome_func);
    return 0;
}