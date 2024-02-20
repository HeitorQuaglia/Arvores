#include "No.h"
#ifndef ARVB_H
#define ARVB_H
#endif

#include "iostream"

class ArvB {

private:
	No* raiz;

public:
	void inserir(int valor);
	void imprimir_arvore();
};