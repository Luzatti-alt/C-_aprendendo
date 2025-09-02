#include <iostream>
//multiplos constructores com mesmo nome mas parametros diferentes
class pizza{
    public:
    std::string sabor1;
    std::string sabor2;
    //se p argumento for vazio
    pizza(){

    }
    pizza(std::string sabor1){
        this->sabor1 = sabor1;
    }
    pizza(std::string sabor1,std::string sabor2){
        this->sabor1 = sabor1;
        this->sabor2 = sabor2;
    }
};
int main(){
    pizza pizza1("milho e bacon");
    pizza pizza2("strogonoff","4 queijos");
    std::cout<<"sabor: "<<pizza1.sabor1<<"\n";
    return 0;
}