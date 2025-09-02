#include <iostream>
// um tipo de dado que cria um conjunto fixo de constantes nomeadas, facilitando o uso de valores pré-definidos e limitados dentro de um contexto específico
//definido pelo usuario
enum dia {segunda = 0, terça = 1, quarte = 2, quinta = 3, sexta = 4, sabado = 5, domingo = 6};
//se eu so colocar um nome ele ja atribui um valor de 0,1,2 etc
int main(){
    dia hoje = terça;
    //se eu por um vslor que nn esta no enum vai dar erro
    //ou invez do num podia ter colocado terca que tbm funcionaria
    switch (hoje)
    {
    case 0:
        std::cout<<"hoje é segunda \n";
        break;
    case 1:
        std::cout<<"hoje é terça \n";
        break;
    case 2:
        std::cout<<"hoje é quarta \n";
        break;
    case 3:
        std::cout<<"hoje é quinta \n";
        break;
    case 4:
        std::cout<<"hoje é sexta \n";
        break;
    case 5:
        std::cout<<"hoje é sabado \n";
        break;
    case 6:
        std::cout<<"hoje é domingo \n";
        break;
    default:
    std::cout<<"esse dia da semanha não existe\n";
        break;
    }

    return 0;
}