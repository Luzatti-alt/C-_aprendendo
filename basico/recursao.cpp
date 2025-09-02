#include <iostream>
//função se chama
//isso pode facilitar um processo mais dificel em troca de performace e memoria
//temos 2 meios de se fazer uma função
//recursivamente x interative
void andar(int passos);
int main(){
    andar(50);//5 passos
    return 0;
}
void andar(int passos){
    //forma incursiva
    //for(int i=0;i<passos;i++){
        //std::cout<<"deu um passo \n";
    //}
    //forma recursiva
    if(passos>0){
        std::cout<<"deu um passo \n";
        andar(passos-1);
        //se nn tiver o -1 cria um stack overflow
        //(wikipedia: When a program attempts to use more space than is available on the call stack (that is, when it attempts to access memory beyond the call stack's bounds, which is essentially a buffer overflow), the stack is said to overflow, typically resulting in a program crash.)
    }
    //o uso de recursion e interactive é varia com o problema
    //certos problemas a recurion é melhor que a interativa
}