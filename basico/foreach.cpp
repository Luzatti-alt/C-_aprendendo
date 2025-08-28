<<<<<<< HEAD
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
=======
#include <iostream>
int main(){
    //exemplo de foreach
    std::string array[] = {"batata","tomate","suco"};
    for(std::string arrays : array){
        std::cout<<array[i]<<std::endl;
    }
    return 0;
}
>>>>>>> 5201fd7e25c433b0877e5b25821e14ab0f22454f
