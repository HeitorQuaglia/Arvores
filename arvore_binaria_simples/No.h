#ifndef NO_H
#define NO_H
#endif

#include <string>

class No {
private:
	int conteudo;
	No* esquerdo;
	No* direito;
	void inserir_esquerda(int valor);
	void inserir_direita(int valor);

public:
	No(int valor);
	~No();

	int tamanho();
	void inserir(int valor);
	std::string imprimir();
};