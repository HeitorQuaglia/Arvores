#include "ArvB.h"


void ArvB::inserir(int valor) {
	if (this->raiz == nullptr) {
		this->raiz = new No(valor);
	} else {
		this->raiz->inserir(valor);
	}
}

void ArvB::imprimir_arvore() {
	if (this->raiz == nullptr) {
		return;
	}

	std::string resultado = this->raiz->imprimir();
	std::cout << resultado;
}