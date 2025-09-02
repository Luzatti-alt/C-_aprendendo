#include<iostream>
//pointer é uma variavel que guarda o endereço de memoria de outra variavel
//algumas vezes usar pointer são mais faceis do que usar uma variavel
int main(){
    //& endereço de ____
    //* referencia de ____
    std::string nome ="Lucas";
    //pointer devem ter o mesmo tipo da variavel apontada
    std::string *pnome = &nome;
    std::cout<<pnome<<" endereço de nome"<<"\n";
    std::cout<<*pnome<<" acessando o endereço de nome"<<"\n";

    return 0;
}