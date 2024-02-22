#include "No.h"

No::No(int valor) : conteudo(valor), esquerdo(nullptr), direito(nullptr) {}

std::string No::imprimir() const {
    std::string valores = std::to_string(conteudo);

    if (esquerdo) {
        valores += " E (" + esquerdo->imprimir() + ")";
    }

    if (direito) {
        valores += " D (" + direito->imprimir() + ")";
    }

    return valores;
}

void No::inserir(int valor) {
    if (conteudo > valor) {
        if (!esquerdo) {
            esquerdo = std::make_unique<No>(valor);
        }
        else {
            esquerdo->inserir(valor);
        }
    }
    else {
        if (!direito) {
            direito = std::make_unique<No>(valor);
        }
        else {
            direito->inserir(valor);
        }
    }
}

int No::tamanho() const {
    return 1 + (direito ? direito->tamanho() : 0) + (esquerdo ? esquerdo->tamanho() : 0);
}

bool No::busca(int valor) const {
    if (conteudo == valor) {
        return true;
    }
    else if (valor < conteudo && esquerdo) {
        return esquerdo->busca(valor);
    }
    else if (direito) {
        return direito->busca(valor);
    }

    return false;
}
