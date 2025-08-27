#include <iostream>
int main(){
    //valor imutavel pi(so ira mudar se eu mudar ele nesta linha)
    //em outras linhas ele nn ira mudar 
    const double pi = 3.1415;
    double r = 3.5;
    double calc_circunferencia = 2 *pi *r;
    std::cout<<"valor da cincunferencia mutavel:"<<std::endl<<calc_circunferencia<<std::endl;
    return 0;
}