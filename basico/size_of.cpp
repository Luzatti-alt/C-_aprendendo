#include <iostream>
int main(){
    //sizeof define o tamanho de BYTES de variaveis,tipos de dados, classes,objs etc
    double nota = 2.5;
    std::cout<<sizeof(nota)<<" Bytes \n";//tamanho maximo alocado na variavel
    //comeco de manipulação de memoria apartir daqui
    //o valor varia conforme dados e tipo usado
    //outro exemplo usando os bytes do array e d std::string podemos achar a qnt de elementos
    std::string alunos[]={"fulano","sigma","beta","gamma"};
    std::cout<<sizeof(alunos)/sizeof(std::string)<<" elementos no array";
    return 0;
}