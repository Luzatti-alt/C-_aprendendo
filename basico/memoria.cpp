#include<iostream>
int main(){
    //endereços de memoria podemos acessar com &
    //se convertemos para decimal(por padrão é hex decimal) podemos achar o endereço
    //algumas coisas oucupam mais espaço/ endereço na memoria
    std::string nome = "Lucas";
    int idade = 17;
    bool estudante = true;
    std::cout << &nome <<" aqui é o endereço do nome na memoria"<<"\n";
    std::cout << &idade <<" aqui é o endereço da idade na memoria"<<"\n";
    std::cout << &estudante <<" aqui é o endereço do estudante na memoria"<<"\n";
    return 0;
}