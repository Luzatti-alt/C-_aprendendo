#include <iostream>
//é uma memoria alocada apos o programa estar complilado e rodando
//use new para isso
//fia na parte heap da memoria
//(partes da memoria heap(onde fica a parte de alucar memoria),golbal/static(dados), stack(var locais e chamar funçoes) e text(codigo) )
int main(){
    int *pNum = NULL;
    pNum = new int;//apontando onde sera alocado o int
    *pNum = 21;
    std::cout<<"endereço: "<<pNum<<"\n";
    std::cout<<"valor: "<<*pNum<<"\n";
    //usar delete qnd paramos de usar esse valor para salvar espaço na memoria
    delete pNum;//impdeir memory leak(melhora performance)

    return 0;
}