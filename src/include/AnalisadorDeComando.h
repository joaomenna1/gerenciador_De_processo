/*
 * 
 *
 *  Created on: 20/11/2020
 *      Author: joao nogueira
 */

#ifndef ANALISADORDECOMANDO_H_
#define ANALISADORDECOMANDO_H_


#include <iostream>
#include <vector>

using namespace std;

class AnalisadorDeComando {

private:
	vector<string> comandosDisponiveis = { "start", "help", "add", "reset", "exit"};

	bool isNumero(const std::string& s);

public:
	const double PRIORIDADE_MAXIMA = 10;
	const double PRIORIDADE_MINIMA = 1;

	AnalisadorDeComando();
	vector<string> getComandosDisponiveis();
	bool validarComando(string comando);
	vector<string> separarParametros(string);


};

#endif /* ANALISADORDECOMANDO_H_ */
