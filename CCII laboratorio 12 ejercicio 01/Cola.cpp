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
void Cola::imprimirCola(){
	Nodo* aux=inicioCola;
	if (inicioCola==NULL){
		cout<<endl<<"Cola vac�a."<<endl;
		return;
	}
	else if (inicioCola->siguienteNodo==NULL){
		cout<<"El primer y �ltimo nodo (al mismo tiempo) contiene el valor: "<<finalCola->datos<<endl;
		return;
	}
	cout<<endl<<"Primer nodo de la cola: "<<inicioCola->datos<<endl;
	cout<<"�ltimo nodo de la cola: "<<finalCola->datos<<endl;
	cout<<"Nodos (desde el primero al �ltimo) en la cola: ";
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
