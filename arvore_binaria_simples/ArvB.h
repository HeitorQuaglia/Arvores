#ifndef ARVB_H
#define ARVB_H

#include "No.h"
#include <memory> // Para std::unique_ptr
#include <iostream>

class ArvB {
private:
    std::unique_ptr<No> raiz; // Usando smart pointer para gerenciar a mem�ria

public:
    int tamanho() const; // Fun��o const para indicar que n�o altera membros da classe
    bool busca(int valor) const;

    void inserir(int valor);
    void imprimir_arvore() const;
};

#endif
