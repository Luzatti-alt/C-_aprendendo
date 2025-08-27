#include <iostream>
int main(){
    double x  = (int) 3.14;//a conversão é o entre ()
    //char ____ = num ou (char)num sera convertido do ascii
    //um uso é se dividirmos int e double o valor sera diferente por isso devemos fazer a conversão
    std::cout<<x<<std::endl;//3 pq ignora o decimal ja que é int
    return 0;
}