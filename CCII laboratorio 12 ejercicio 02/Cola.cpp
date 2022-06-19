#include "Cola.h"

Cola::Cola() {
	inicioCola=NULL;
	finalCola=inicioCola;
}

Cola::~Cola() {
	
}
void Cola::insertarEnCola(int dato){
	Nodo* nuevoNodo=new Nodo(dato);
	if (inicioCola==NULL){
		inicioCola=nuevoNodo;
		finalCola=inicioCola;
		return;
	}
	Nodo* aux=inicioCola;
	while (aux->siguienteNodo!=NULL){
		aux=aux->siguienteNodo;
	}
	aux->siguienteNodo=nuevoNodo;
	finalCola=nuevoNodo;
}
void Cola::eliminarNodoEnCola(){
	Nodo *aux=inicioCola;
	if (inicioCola==NULL){
		cout<<"Nada que eliminar, la lista está vacía"<<endl;
		return;
	}
	else if (inicioCola->siguienteNodo==NULL){
		inicioCola=NULL;
		finalCola=inicioCola;
		delete inicioCola;
		delete finalCola;
		return;
	}
	inicioCola=inicioCola->siguienteNodo;/*Hacemos que el nuevo inicio sea el nodo contiguo al anterior primero.*/
	delete aux;
}
void Cola::imprimirCola(){
	Nodo* aux=inicioCola;
	if (inicioCola==NULL){
		cout<<endl<<"Cola vacía."<<endl;
		return;
	}
	else if (inicioCola->siguienteNodo==NULL){
		cout<<"El primer y último nodo (al mismo tiempo) contiene el valor: "<<finalCola->datos<<endl;
		return;
	}
	cout<<endl<<"Primer nodo de la cola: "<<inicioCola->datos<<endl;
	cout<<"Último nodo de la cola: "<<finalCola->datos<<endl;
	cout<<"Nodos (desde el primero al último) en la cola: ";
	while (aux!=NULL){
		if ((aux->siguienteNodo)!=NULL){
			cout<<aux->datos<<", ";
		}
		else{
			cout<<aux->datos;
		}
		aux=aux->siguienteNodo;
	}
	cout<<endl;
}
