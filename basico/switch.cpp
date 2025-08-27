#include<iostream>
int main(){
    //match case
    int mes;
    std::cout<<"digite o número do mês"<<std::endl;
    std::cin>>mes;
    switch(mes){
        case 1:
        std::cout<<"Janeiro"<<std::endl;
        break;
        case 2:
        std::cout<<"Fevereiro"<<std::endl;
        break;
        case 3:
        std::cout<<"Março"<<std::endl;
        break;
        case 4:
        std::cout<<"Abril"<<std::endl;
        break;
        case 5:
        std::cout<<"Maio"<<std::endl;
        break;
        case 6:
        std::cout<<"Junho"<<std::endl;
        break;
        case 7:
        std::cout<<"Julho"<<std::endl;
        break;
        case 8:
        std::cout<<"Agosto"<<std::endl;
        break;
        case 9:
        std::cout<<"Setembro"<<std::endl;
        break;
        case 10:
        std::cout<<"Outubro"<<std::endl;
        break;
        case 11:
        std::cout<<"Novembro"<<std::endl;
        break;
        case 12:
        std::cout<<"Dezembro"<<std::endl;
        break;
        default:
        std::cout<<"mes desconhecido"<<std::endl;
        break;
    }
}