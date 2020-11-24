/*
 * 
 *
 *  Created on: 20/11/2020
 *      Author: joao nogueira
 */

#ifndef DADOSDEESTADO_H_
#define DADOSDEESTADO_H_

class DadosDeEstado {


public:

	enum Estado{
		Criado, Pronto, Executando, Bloqueado, Terminado
	};

	DadosDeEstado();
	virtual ~DadosDeEstado();
	Estado estadoAtual;
	int programCounter;
};

#endif /* DADOSDEESTADO_H_ */
