#include <iostream>
int main(){
    //exemplo de foreach
    std::string array[] = {"batata","tomate","suco"};
    for(int i = 0; i < sizeof(array)/sizeof(array[0]);i++){
        std::cout<<array[i]<<std::endl;
    }
    return 0;
}
