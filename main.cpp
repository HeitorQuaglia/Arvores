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

	return 0;
}
