#include<iostream>
int main(){
    for(int i =1;i<=20;i++){
        if(i==13){
            continue;
            //se fosse um break ele pararia em 12
        }
        std::cout<<i<<'\n';
    }
    return 0;
}