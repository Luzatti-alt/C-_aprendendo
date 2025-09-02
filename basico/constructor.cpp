#include <iostream>
#include <string> // Added this line

//metodo especial que é chamado automaticamente quando um objeto é criado
class estudante{
    public:
    std::string nome;
    int idade;
    double media;
    estudante(std::string nome, int idade, double media){
        //ou substituir por uma variavel dierente e nn usar this var = nv_var;
        this->nome = nome;
        this->idade = idade;
        this->media = media;
    }//constructor
};
int main(){
    estudante estudante1("beltrano", 99, 8.8);
    // You must access the members to print them
    std::cout << "Nome: " << estudante1.nome << "\n";
    std::cout << "Idade: " << estudante1.idade << "\n";
    std::cout << "Media: " << estudante1.media << "\n";
    return 0;
}