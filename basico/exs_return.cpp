#include<iostream>
double calc(double largura);
int main(){
    double largura = 6.0;
    double area_show = calc(largura);
    std::cout<<"área de "<<area_show<<"cm^2";
    return 0;
}
double calc(double largura){
    //troque o void pelo tipo de dado retornado tanta criando como atualizando a funcao
    double area = largura*largura;
    return area; //o returno pode ser so o calculo ou qq outra coisa como uma string ou etc

}