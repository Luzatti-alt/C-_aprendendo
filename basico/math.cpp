#include<iostream>
#include <cmath>
int main(){
    int x,y;
    std::cout<<"digite um número"<<std::endl;
    std::cin>>x;
    std::cout<<"digite outro número"<<std::endl;
    std::cin>>y;
    //operacoes mat sem ser +-*/
    int r_um = std::max(x,y);//maior valor
    int r_dois = std::min(x,y);//menor valor
    //aprtir daqui precica de <cmath>
    int r_tres = pow(x,y);//potencia valor
    int r_quatro = sqrt(x);//maior valor
    int r_cinco = abs(x);//absoluto(o mais perto de 0) resultado é positivo
    int r_seis = round(x);//aredondar p/mais perto
    int r_sete = ceil(x);//aredonda p/cima
    int r_oito = floor(x);//aredonda p/baixo
    //existem outros (esses são os mais comuns) os outros pesquise e add aqui se dor necessario
    std::cout<<"maior valor: "<<r_um<<std::endl;
    std::cout<<"maior valor: "<<r_dois<<std::endl;
    std::cout<<"potencia: "<<r_tres<<std::endl;
    std::cout<<"raiz: "<<r_quatro<<std::endl;
    std::cout<<"absoluto: "<<r_cinco<<std::endl;
    std::cout<<"arredondar(perto): "<<r_seis<<std::endl;
    std::cout<<"arredondar(cima): "<<r_sete<<std::endl;
    std::cout<<"arredondar(baixo): "<<r_oito<<std::endl;
    return 0;
}