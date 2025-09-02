#include <iostream>
void apresentarinformacao(const std::string &nome,const int &idade);
//para ter variaveis que so podem ser lidas e para ser algo mais seguro
int main(){
    std::string nome = "Lucas";
    int idade = 17;
    apresentarinformacao(nome,idade);
    return 0;
}
void apresentarinformacao(const std::string &nome,const int &idade){
    //u uso de const é para que nn mude o valor que nem está aqui 
    //nn havera mudança
    //comentei pois com o const isso dara erro pois nn deixa eu fazer isso localmente por ser const
    //idade = 0;
    //nome = " "; 
    std::cout<<nome<<'\n';
    std::cout<<idade<<'\n';

}