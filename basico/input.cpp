#include<iostream>
int main(){
    //>> e << são diferente
    //>> entrada de dados
    //<< saida de dados
    std::string a;
    std::cout<<"digite seu nome:"<<std::endl;
    std::cin>>a;//sting sem espaços
    //std::getline(std::cin >> std::ws, a); //string com espaços >> std::ws é usado
    //para nn ignorar espaços brancos qnd chamar getline
    //sem ele o código pode ser comportar de forma estranha
    //ambas tem o mesmo uso porem uma para de ler qnd é usado algum espaço
    std::cout<<a<<" foi digitado"<<std::endl;
    //se for no vscode tem que configurar para o input funcionar
    //code runner run in terminal
    return 0;
}