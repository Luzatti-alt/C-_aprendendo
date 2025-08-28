#include <iostream>
int main(){
    //std::string comidas[5] = {"pizza","pizza","pizza","pizza","pizza"};
    std::string comidas[500];
    fill(comidas,comidas+500,"pizza");//o array + qmt a cor e o que colocar
    for(std::string comida :comidas){
        std::cout<<comida<<'\n';
    }
    return 0;

}