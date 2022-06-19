#ifndef NODO_H
#define NODO_H
#include <iostream>
using namespace std;
class Nodo{
public:
	int datos;
	Nodo* siguienteNodo;
	Nodo();
	~Nodo();
	Nodo(int datoIngresado);
};
#endif
