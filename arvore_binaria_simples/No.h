#ifndef NO_H
#define NO_H

#include <memory> // Para std::unique_ptr
#include <string>

class No {
private:
    int conteudo;
    std::unique_ptr<No> esquerdo;
    std::unique_ptr<No> direito;

public:
    No(int valor);
    ~No() = default; // O destrutor padrão é suficiente

    bool busca(int valor) const;
    int tamanho() const;
    void inserir(int valor);
    std::string imprimir() const;
};

#endif
