#include <iostream>
int main(){
    std::string txt;
    std::cout<<"Digite uma palavra ai:"<<std::endl;
    std::getline(std::cin, txt);
    //.lenght .empty .clear .append .at(int)[pega a letra da pos x(0-n)] 
    //.insert(pos,[o que sera inserido]) .find() .erase() etc esses são os mais importante
    txt.append("@gmail.com.br");
    std::cout<<txt<<std::endl;
    return 0;
}