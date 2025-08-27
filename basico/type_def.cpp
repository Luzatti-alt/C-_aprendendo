#include <iostream>
#include<vector>
//typedef std::vector<stf::pair<std::string,int>> parear_t//_t para lembrar que é um tipo
typedef std::string texto_t;
//uma substituição é com using o_tipo de data = o_tipo de dado
//ex using texto_t = std::string;
int main(){
    texto_t nome = "Lucas";//isso ao invez de std::string
    std::cout<<nome<<std::endl;
    return 0;
}