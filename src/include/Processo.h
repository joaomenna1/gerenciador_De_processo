/*
 * 
 *
 *  Created on: 20/11/2020
 *      Author: joao nogueira
 */
#ifndef PROCESSO_H_
#define PROCESSO_H_

#include "DadosDeEstado.h"
#include "DadosDeIdentificacao.h"
#include "DadosDeControle.h"

#include "Priorizavel.h"

#include "Relogio.h"

class Processo: public Priorizavel<Processo> {

public:

	DadosDeEstado estado;
	DadosDeIdentificacao id;
	DadosDeControle control;

	Processo(DadosDeEstado de, DadosDeIdentificacao di, DadosDeControle dc);
	Processo();
	virtual ~Processo();

	bool operator<(Processo & p) {
		return compareTo(p);
	}

	bool operator==(Processo & p) {
		return id.id == p.id.id;
	}

};

#endif /* PROCESSO_H_ */
