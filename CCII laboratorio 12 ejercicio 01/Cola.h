#ifndef COLA_H
#define COLA_H
#include "Nodo.h"
class Cola {
	Nodo* inicioCola;
	Nodo* finalCola;
public:
	Cola();
	~Cola();
	void insertarEnCola(int dato);
	void imprimirCola();
};

#endif

