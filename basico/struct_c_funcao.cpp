#include <iostream>
//priorize o struct e dps função
struct carros{
    std::string modelo;
    int ano;
    std::string cor;
};
void printCarro(carros carro);
void trocar_cor(carros &car, std::string nv_cor);
int main(){
    carros carro1;
    carros carro2;
    carro1.modelo="Fusca";
    carro1.ano=1969;
    carro1.cor="Azul";

    carro2.modelo="Uno";
    carro2.ano=2008;
    carro2.cor="Vermelho";
    printCarro(carro1);
    trocar_cor(carro1,"cinza");
    printCarro(carro1);
    return 0;
}
//lembrando ele criar uma copia e ela estara num endereço diferenta se nn tiver o & 
void printCarro(carros carro){
    std::cout<<carro.modelo<<"\n";
    std::cout<<carro.ano<<"\n";
    std::cout<<carro.cor<<"\n";
}
void trocar_cor(carros &car, std::string nv_cor){
    car.cor = nv_cor;
}