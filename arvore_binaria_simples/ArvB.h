#include "No.h"
#ifndef ARVB_H
#define ARVB_H
#endif

#include "iostream"

class ArvB {

private:
	No* raiz;

public:
	int tamanho();
	bool busca(int valor);

	void inserir(int valor);
	void imprimir_arvore();
};