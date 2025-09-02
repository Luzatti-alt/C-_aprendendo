#include <iostream>
//é usado para criar funçoes oerloaded que contenham diferentes tipos de dados
//declarar T
template <typename T,typename U>//sem isso o codigo nn sabe o que é T da para adiconar mais de 1
//se usarmos auto o compiler decide o tipo final conforme resultado
//ex int com double deste jeito so resultara no tipo do maior se tivermos o outo senao ele aparecera como int ao invez de double
auto max(T x, U y){
    return (x>y) ? x : y;//ternary
}//deste jeito nn é compativel com doubles
//tecnicamente se copiarmos e trocarmos o int por double funcionaria
//jeito template(criar uma funçaõ que aceito varios tipos de dados)
//trocar o tipo por T
//ainda sim os dados tem que ser do mesmo tipo
int main(){
    std::cout<<max(2.5,3)<<"\n";
    return 0;
}