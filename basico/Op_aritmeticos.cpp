#include <iostream>
//+-*/
int main(){
    // %2 divide por 2 e pega o resto(se for igualmente dara 0,ser nn for ele mostra o resto)
    // a regra ()<* e /, +e - nesta ordem de operação
    int a = 10;
    std::cout<<a<<std::endl;
    a++;
    std::cout<<a<<std::endl;
    a+=1;
    std::cout<<a<<std::endl;
    a--;
    std::cout<<a<<std::endl;
    a-=1;
    std::cout<<a<<std::endl;
    a *= 2;
    std::cout<<a<<std::endl;
    a /= 4;
    //tudo decimal se a var for int sera perdida ex se fosse 2.5 daria 2 por ser int
    std::cout<<a<<std::endl;
    return 0;
}