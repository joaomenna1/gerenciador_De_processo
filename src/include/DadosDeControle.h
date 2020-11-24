/*
 * 
 *
 *  Created on: 20/11/2020
 *      Author: joao nogueira
 */

#ifndef DADOSDECONTROLE_H_
#define DADOSDECONTROLE_H_

class DadosDeControle {

public:

	long tempoNecessarioParaFinalizarExecucao;
	long tempoNecessarioDeCPU;
	long tempoAcumuladoUsoDeCPU;
	long entradaNoSistema;
	// quantas vezes deteve o controle da cpu;
	int numeroDeVezesNaCPU;

	long turnaround;
	long tempoDeResposta;
	double fracaoDeTempo;

	DadosDeControle(long tempoNecessarioDeCPU, long entradaNoSistema);
	DadosDeControle();
	void adicionarTempoAcumuladoDeCPU(long tempo);
	bool isProcessoFinalizado();
private:
	void incrementarNumeroDeVezesNaCPU();
	void atualizarTempoNecessarioParaFinalizarExecucao();
};

#endif /* DADOSDECONTROLE_H_ */
