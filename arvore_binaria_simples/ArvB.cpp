#include "ArvB.h"

void ArvB::inserir(int valor) {
    if (!raiz) {
        raiz = std::make_unique<No>(valor);
    }
    else {
        raiz->inserir(valor);
    }
}

void ArvB::imprimir_arvore() const {
    if (raiz) {
        std::cout << raiz->imprimir() << std::endl;
    }
}

int ArvB::tamanho() const {
    return raiz ? raiz->tamanho() : 0;
}

bool ArvB::busca(int valor) const {
    return raiz ? raiz->busca(valor) : false;
}