/*
 * DadosDeControle.cpp
 *
 *  Created on: nov 21, 2020
 *      Author: joao nogueira
 */

#include "include/DadosDeControle.h"

DadosDeControle::DadosDeControle(long tempoNecessarioDeExeucao, long entrada) {
	tempoNecessarioDeCPU = tempoNecessarioDeExeucao;
	tempoNecessarioParaFinalizarExecucao = tempoNecessarioDeExeucao;
	entradaNoSistema = entrada;
	numeroDeVezesNaCPU = 0;
	tempoAcumuladoUsoDeCPU = 0;
}

DadosDeControle::DadosDeControle() {
	tempoAcumuladoUsoDeCPU = 0;
}

bool DadosDeControle::isProcessoFinalizado() {
	if (tempoNecessarioDeCPU <= tempoAcumuladoUsoDeCPU)
		return true;
	return false;
}

void DadosDeControle::adicionarTempoAcumuladoDeCPU(long tempo) {
	tempoAcumuladoUsoDeCPU += tempo;
	incrementarNumeroDeVezesNaCPU();
	atualizarTempoNecessarioParaFinalizarExecucao();
}

void DadosDeControle::incrementarNumeroDeVezesNaCPU() {
	numeroDeVezesNaCPU += 1;
}

void DadosDeControle::atualizarTempoNecessarioParaFinalizarExecucao() {
	tempoNecessarioParaFinalizarExecucao = tempoNecessarioDeCPU - tempoAcumuladoUsoDeCPU;
	if (tempoNecessarioParaFinalizarExecucao <= 0) {
		tempoNecessarioParaFinalizarExecucao = 0;
	}
}

