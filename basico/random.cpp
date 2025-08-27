#include <iostream>
int main(){
    srand(time(NULL));//"semi-aleatoria" usando o tempo como seed
    int n = (rand() % 6);//entre 0 - 32 767 se vazia e sem % n) +1
    std::cout<<n<<'\n';
    return 0;
}