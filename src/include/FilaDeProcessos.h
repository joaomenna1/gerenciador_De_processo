/*
 *
 *
 *  Created on: 20/11/2020
 *      Author: joao nogueira
 */

#ifndef FILADEPROCESSOS_H_
#define FILADEPROCESSOS_H_

#include <queue>
#include "Processo.h"
#include "Priorizavel.h"

using namespace std;

class FilaDeProcessos {

	int prioridade;

public:
	FilaDeProcessos(int p);
	FilaDeProcessos();
	virtual ~FilaDeProcessos();

	queue<Processo> fila;

	int getPrioridade();
};

#endif /* FILADEPROCESSOS_H_ */
