#include <iostream>
int main(){
    //multi dimensional array são arrays de arrays ex com carros marcas x modelos
    std::string multi_array[3][3]={{"gol redondo","fusca","gol quadrado"},{"ARGO","MOBI","UNO"},{"challanger","durango","ram 1500"}};//lihas por colunas
    std::cout<<multi_array[0][0]<<std::endl;
    std::cout<<multi_array[0][1]<<std::endl;
    std::cout<<multi_array[0][2]<<std::endl;
    std::cout<<multi_array[1][2]<<std::endl;
    return 0;
}