#include "main.h"

int main()
{

	ArvB* arvore = new ArvB();

	arvore->inserir(10);
	arvore->inserir(50);
	arvore->inserir(100);
	arvore->inserir(75);
	arvore->inserir(35);

	arvore->imprimir_arvore();

	std::cout << arvore->tamanho() << std::endl;

	std::cout << arvore->busca(75) << std::endl;

	std::cout << arvore->busca(105) << std::endl;

	return 0;
}
