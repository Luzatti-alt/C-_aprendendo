#include <iostream>
int main(){
    //segundo o google
    //Array iteration refers to the process of accessing or processing each element within an array, one by one.
    std::string array[]={"batata","tomate","cebola","alho","milho"};
    for(int i=0;i<sizeof(array)/sizeof(std::string);i++){
        std::cout<<array[i]<<"\n";
    }
    return 0;
}