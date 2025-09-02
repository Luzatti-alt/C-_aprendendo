#include <iostream>
// uma estrutura que agrupa variaveis que podem ter varias variaveis de tipos diferentes
//tipo um array mas que nn precisa que tudo seja do mesmo tipo
//tipo um novo tipo de dado
//variaveis do struct = membros
struct alunos{
    std::string nome;
    double media;
    bool matriculado;//se eu colocar um valor aqui nn preciso adicionar dps no main
};
int main(){
    alunos fulano;
    fulano.nome="Fulano da silva";//acesssar o membro nome
    fulano.media=8.9;
    fulano.matriculado=true;
    alunos Beltrano;
    Beltrano.nome="Beltrano carvalho";//acesssar o membro nome
    Beltrano.media=6.9;
    Beltrano.matriculado=false;
    std::cout<<fulano.nome<<"\n";
    std::cout<<fulano.media<<"\n";
    std::cout<<fulano.matriculado<<"\n";// 1 e 0 como resposta 
    std::cout<<Beltrano.nome<<"\n";
    std::cout<<Beltrano.media<<"\n";
    std::cout<<Beltrano.matriculado<<"\n";// 1 e 0 como resposta 
    return 0;
}