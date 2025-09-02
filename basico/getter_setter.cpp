#include <iostream>
#include <string>
//abstracao esconder dados desnecessarios fora da classe
//getter funcao atributo privado readlable
//setter funcao atributo privado writable
class fugao{
    private:
    int temp = 0;
    public:
    //getter
    int getTemp(){
        return temp;//somente leitura
    }
    //setter
    void setTemp(int temp){
        if(temp < 0){
            this->temp = 0;
        }else if(temp >= 100){
            this->temp=100;

        }else{
            this->temp = temp;
        }
        this-> temp = temp;//escrita
    }
};
int main(){
    fugao fogao;
    //getter
    std::cout<<"Temperatura atual: "<<fogao.getTemp()<<std::endl;
    //setter
    fogao.setTemp(50);
    std::cout<<"Temperatura atual:"<<fogao.getTemp()<<std::endl;
    return 0;
}