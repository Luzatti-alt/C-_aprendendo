#include <iostream>
using namespace std;
int main(){
    string carros[] = {"Kwid","gol quadrado","fiat uno com escada"};
    //tudo tem que ser do mesmo tipo no array
    //é possivel definir o valor dos itens do array dps
    //porem tem que definir o tamanho do array ex std::string array[5]; (tamanho 6(0-5))
    //string carros[] = {"fusca","gol quadrado","fiat uno com escada"};
    //cout<<carros;
    //deu 0x5ffdf0 que é o endereço de memoria do array se for do jeito acima
    cout<<carros[0]<<endl;
    carros[0] = "fusca";//alterar um valor do array
    cout<<carros[0]<<endl;
    cout<<carros[2]<<endl;
    return 0;
}