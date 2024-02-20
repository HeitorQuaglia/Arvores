#include "No.h"

No::No(int valor) {
    conteudo = valor;
    esquerdo = nullptr;
    direito = nullptr;
}

No::~No() {
}

std::string No::imprimir() {
    std::string valores = std::to_string(this->conteudo);

    if (this->esquerdo != nullptr) {
        valores += " E (" + this->esquerdo->imprimir() + ")";
    }

    if (this->direito != nullptr) {
        valores += " D (" + this->direito->imprimir() + ")";
    }

    return valores;
}

void No::inserir(int valor) {
    if (this->conteudo > valor) {
        this->inserir_esquerda(valor);
    }
    else {
        this->inserir_direita(valor);
    }
}

void No::inserir_esquerda(int valor) {
    if (this->esquerdo == nullptr) {
        this->esquerdo = new No(valor);
    }
    else {
        this->esquerdo->inserir(valor);
    }
}

void No::inserir_direita(int valor) {
    if (this->direito == nullptr) {
        this->direito = new No(valor);
    }
    else {
        this->direito->inserir(valor);
    }
}