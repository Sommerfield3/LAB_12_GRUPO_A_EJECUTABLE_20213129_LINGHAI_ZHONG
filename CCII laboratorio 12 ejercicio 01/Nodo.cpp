#include "Nodo.h"

Nodo::Nodo(){
	datos=0;
	siguienteNodo=NULL;
}

Nodo::~Nodo(){
	
}

Nodo::Nodo(int datoIngresado){
	this->datos=datoIngresado;
	this->siguienteNodo=NULL;
}

