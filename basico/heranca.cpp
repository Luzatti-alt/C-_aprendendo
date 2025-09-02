#include <iostream>
class Animal{
    public:
    bool vivo = true;
    void comer(){
      std::cout<<"este animal está comendo"<<std::endl;  
    }
};
class Cachorro : public Animal{
    //cachorro esta herdando do amimal
    //vai ter todos os metodos e atributos de animais 
    public:
    void latir(){
        std::cout<<"au au"<<std::endl;
    }
};
class gamba : public Animal{
    //gamba esta herdando do amimal
    //vai ter todos os metodos e atributos de animais 
    public:
    void aaaaaaaaaaa(){
        std::cout<<"aaaaaaaaa"<<std::endl;
    }
};
int main(){
    Cachorro doug;
    gamba aaaaaahhhh;
    std::cout<<doug.vivo<<std::endl;
    doug.latir();
    doug.comer();
    std::cout<<aaaaaahhhh.vivo<<std::endl;
    aaaaaahhhh.aaaaaaaaaaa();
    aaaaaahhhh.comer();
    return 0;
}