#include <iostream>
int main(){
    int a;
    std::cout<<"digite sua idade"<<std::endl;
    std::cin>>a;
    if(a>20){
        std::cout<<"maior que 20"<<std::endl;
    }else if(a==20){
        std::cout<<"exatos 20"<<std::endl;
    }else{
        std::cout<<"menor de 20"<<std::endl;
    }
    return 0;
}