#include<iostream>
int num = 3;//escopo global
//prioridade de escopo é local e dps global (se vier uma local antes de chamar)
int main(){
    std::cout<<"mesmo sem :: chama global por nn ter a local antes: "<<num<<std::endl;
    int num = 1;//escopo local(em todas as funções)
    std::cout<<"local: "<<num<<std::endl;
    std::cout<<"global: "<<::num<<std::endl;
    return 0;
}