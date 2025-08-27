#include <iostream>
namespace X_um{
    int x = 1;
}
namespace X_dois{
    int x = 2;
}
int main(){
    //namespace é tipo var global, sempre prioriza a local mas é acessivel
    //(a namespace::variavel)
    //se for using namespace ____ ja pegaria o x de la (se nn tivesse 1 namespace)
    //neste caso se precisar do outro ainda tem que chamar o namespace
    //using std::cout/string so precisaria usar o cout/string
    int x = 0;
    std::cout<<x<<std::endl;
    std::cout<<X_um::x<<std::endl;
    std::cout<<X_dois::x<<std::endl;
    return 0;
}