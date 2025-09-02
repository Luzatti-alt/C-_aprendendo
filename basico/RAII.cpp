#include <iostream>
#include <memory>
//RAII = Resource Acquisition Is Initialization (“Aquisição de recursos e inicialização”).
//Um std::unique_ptr gerencia automaticamente a memória de um objeto, 
//deletando-o quando o unique_ptr sai de escopo, e permite a transferência exclusiva de propriedade usando std::move(), impedindo cópias
void RAII(){
    std::unique_ptr<int> ptr = std::make_unique<int>(10);
    std::cout << *ptr <<std::endl;
    //gerencia a memoria automaticamente
}
int main(){
    RAII();
    return 0;
}