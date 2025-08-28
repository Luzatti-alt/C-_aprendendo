#include <iostream>
int procurar(int array[], int tamanho_array, int elemento);

int main(){
    int nums[]={1,2,3,4,5,6,7,8,9,10};
    int tamanho_array = sizeof(nums)/sizeof(nums[0]);
    int index;
    int meu_num;
    std::cout<<"Digite o número a ser encontrado: ";
    std::cin>>meu_num;

    index = procurar(nums,tamanho_array,meu_num);
    if(index != -1){
        std::cout<< meu_num <<" está em: "<< index << std::endl;
    }else{
        std::cout<< meu_num <<" não foi encontrado ou está no array" << std::endl;
    }
    return 0;
}

int procurar(int nums[], int tamanho_array, int elemento){
    for(int i = 0; i < tamanho_array; i++){
        if(nums[i] == elemento){
            return i;
        }
    }
    return -1; // só retorna -1 depois de percorrer todo o array
}
