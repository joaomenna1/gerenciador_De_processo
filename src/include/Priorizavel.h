/*
 * 
 *
 *  Created on: 20/11/2020
 *      Author: joao nogueira
 */

#ifndef PRIORIZAVEL_H_
#define PRIORIZAVEL_H_

template<typename T>
class Priorizavel{

	int prioridade;

public:
	int compareTo(T p);

	int getPrioridade(){
		return prioridade;
	}
};

#endif /* PRIORIZAVEL_H_ */
