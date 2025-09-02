#include <iostream>

void swap(std::string &x, std::string &y);

int main()
{
	std::string x = "suco";
	std::string y = "agua";

	swap(x, y);

	std::cout << "X: " << x << '\n';
	std::cout << "Y: " << y << '\n';

    return 0;
}
//sem o & ele nn fara a troca pois esse jeito ele cria uma copia das variaveis e usara as copias
//as copias ficam em endereços diferentes na memoria
//o nome disso é passar por referencia(geralmente devemos usar esse)
//so usaremos o outro se realmente precisarmos
//por isso temos o & para podermos alterar certos aspectos citando o local na memoria
void swap(std::string &x, std::string &y){
	std::string temp;
	temp = x;
	x = y;
	y = temp;
}

