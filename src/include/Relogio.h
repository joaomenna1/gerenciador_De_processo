/*
 * AnalisadorDeComando.h
 *
 *  Created on: 20/11/2020
 *      Author: joao nogueira
 */

#ifndef RELOGIO_H_
#define RELOGIO_H_

class Relogio {

	long tempoAtual;

public:
	Relogio();
	void iniciar();
	long getTempoAtual();
	void tictac();
	void percorrerTempoEm(long tempo);
};

#endif /* RELOGIO_H_ */
