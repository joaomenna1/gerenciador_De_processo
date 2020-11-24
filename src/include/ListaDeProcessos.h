/*
 * 
 *
 *  Created on: 20/11/2020
 *      Author: joao nogueira
 */

#ifndef LISTADEPROCESSOS_H_
#define LISTADEPROCESSOS_H_

#include <list>
#include "Processo.h"

class ListaDeProcessos {

	list<Processo> lista;

public:
	ListaDeProcessos();
	virtual ~ListaDeProcessos();
};

#endif /* LISTADEPROCESSOS_H_ */
