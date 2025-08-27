#include <iostream>
//funcoes podem ter o mesmo nome porem devem ter parametros diferentes
void bolo();
void bolo(std::string sabor1);
void bolo(std::string sabor1,std::string sabor2);
int main(){
    bolo("morango","baunilia");//se esta vazio chama a funçao 1
    //se tem algo chama a funcao 2, se tem mais de uma chama a 3
    return 0;
}
void bolo(){
    std::cout << "aqui esta seu bolo";
}
void bolo(std::string sabor1){
    //esse parametro é chamado a assinatura da função
    std::cout << "aqui esta seu bolo de "<<sabor1;
}
void bolo(std::string sabor1,std::string sabor2){
    //esse parametro é chamado a assinatura da função
    std::cout << "aqui esta seu bolo de "<<sabor1<<" e "<<sabor2;
}