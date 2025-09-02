#include <iostream>
//parecido com struct so que com metodos
class Humano{
    public:
    //obj
    //acess modifier
    std::string nome;
    std::string trabalho;
    int idade;
    //metodos
    void comer(){
        std::cout<<"esta pessoa esta comendo"<<"\n";
    }
    void beber(){
        std::cout<<"esta pessoa esta bebendo"<<"\n";
    }
    void dormir(){
        std::cout<<"esta pessoa esta dormindo"<<"\n";
    }
};
int main(){
    Humano humano1;//objeto
    humano1.nome = "Fulano";
    humano1.trabalho = "Programador";
    humano1.idade = 35;
    std::cout<<humano1.nome<<"\n";
    std::cout<<humano1.trabalho<<"\n";
    std::cout<<humano1.idade<<"\n";
    humano1.comer();
    humano1.beber();
    humano1.dormir();
}