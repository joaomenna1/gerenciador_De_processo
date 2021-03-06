/*
 * 
 *
 *  Created on: 20/11/2020
 *      Author: joao nogueira
 */

#ifndef GERENCIADORDEPROCESSOS_H_
#define GERENCIADORDEPROCESSOS_H_

#include "Relogio.h"
#include "ListaOrdenadaDeProcessos.h"
#include "Lista.h"
#include "Terminal.h"

using namespace std;

#define NumeroMaximoDeProcessosNaMemoria 50

class GerenciadorDeProcessos {

	Relogio relogio;
	Terminal terminal;

	Lista<Processo> criados;
	ListaDeProcessos prontos;

	Lista<Processo> executando;
	Lista<Processo> bloqueados;
	Lista<Processo> terminados;

	size_t numeroDeCores;
	size_t totalProcessos;

	size_t quantum;

public:
	GerenciadorDeProcessos();
	GerenciadorDeProcessos(size_t cores);
	virtual ~GerenciadorDeProcessos();

	void criar(Processo p);
	bool carregarEmMemoria();
	Processo escalonarProximo();
	void preemptar(Processo p);
	void atualizarQuantum();
	bool simularBloqueio(Processo p);
	void simularDesbloqueio();
	void terminar(Processo p);

	void printarProntos(); //debugar

	void exibirEstatisticas();

	size_t getTotalProcessos(){
		return totalProcessos;
	}

	void simular();
};

#endif /* GERENCIADORDEPROCESSOS_H_ */
