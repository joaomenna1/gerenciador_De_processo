/*
 * Processo.cpp
 *
 *   Created on: nov 21, 2020
 *      Author: joao nogueira
 */

#include "include/Processo.h"

Processo::~Processo() {
}

Processo::Processo(DadosDeEstado de, DadosDeIdentificacao di,
		DadosDeControle dc) {
	id = di;
	control = dc;
	estado = de;
}

Processo::Processo() {
}


