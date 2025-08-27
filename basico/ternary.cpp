#include <iostream>
int main(){
    //substituir if else
    //condição ? expressao 1 : expressao 2;
    bool passou = true;
    int nota;
    std::cout<<"digite sua nota"<<std::endl;
    std::cin>>nota;
    nota >= 70 ? std::cout<<"passou"<<std::endl : std::cout<<"reprovou"<<std::endl;
    //ou
    //se for bool fica var ? (vdd): (false); neste caso pergunta se é true
    std::cout<<(passou ? "passou de ano": "não passou de ano");
    return 0;
}