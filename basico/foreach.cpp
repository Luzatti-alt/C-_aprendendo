#include <iostream>
int main(){
    //exemplo de foreach
    //loop que acessa um dado iterable
    std::string arrays[] = {"batata","tomate","suco"};
    for(std::string array : arrays){
        std::cout<<array<<std::endl;
    }
    return 0;
}
