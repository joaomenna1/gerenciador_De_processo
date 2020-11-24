/*
 * AnalisadorDeComando.h
 *
 *  Created on: 20/11/2020
 *      Author: joao nogueira
 */

#ifndef LISTADEPROCESSOS_H_
#define LISTADEPROCESSOS_H_

#define maxPriority 0
#define minPriority 10

#include <vector>
#include "Processo.h"
#include "FilaDeProcessos.h"

class ListaDeProcessos {
public:
	//opção de implementação. Como há exatamente 10 filas,
	//é mais simples implementar com um vetor de filas
	vector<FilaDeProcessos> lista;


	ListaDeProcessos();
	virtual ~ListaDeProcessos();

	void adicionar(Processo p);
	Processo removerMaisPrioritario();
	size_t maiorPrioridade();
	void reduzirPrioridade(Processo p, int pAtual);
	int tamanho();

	void printar(); //para debugar
};

#endif /* LISTADEPROCESSOS_H_ */
