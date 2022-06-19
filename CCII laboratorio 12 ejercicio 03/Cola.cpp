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
int Cola::longitud(){
	Nodo* aux=inicioCola;
	int tam=0;
	if (inicioCola==NULL){
		return 0;
	}
	while (aux!=NULL){
		tam++;
		aux=aux->siguienteNodo;
	}
	return tam;
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
void Cola::buscar(int buscado){
	Nodo *aux1=inicioCola;
	int tam=this->longitud();
	int *posiciones=new int[tam];
	int posActual=0;
	int conteo=0;
	if (inicioCola==NULL){
		cout<<endl<<"La pila está vacía."<<endl;
	}
	else if (inicioCola->siguienteNodo==NULL){
		if (aux1->datos==buscado){
			cout<<endl<<"El número "<<buscado<<" se encuentra en la cola. "<<endl;
			return;
		}
		cout<<endl<<"El número "<<buscado<<" no se encuentra en la cola. "<<endl;
		return;
	}
	if (aux1->datos==buscado){
		conteo++;
		posiciones[posActual]=1;
	}
	posActual++;
	while (true){
		aux1=aux1->siguienteNodo;
		if(aux1->datos==buscado){
			conteo++;
			posiciones[posActual]=1;
		}
		if (aux1->siguienteNodo==NULL){
			break;
		}
		posActual++;
	}
	aux1=inicioCola;
	if (conteo==1){
		cout<<endl<<"El número "<<buscado<<" se encuentra en la cola, en la posición (contando desde 0) ";
		int contAux=0;
		while (true){
			if (posiciones[contAux]==1){
				cout<<contAux<<" de la cola."<<endl;
				break;
			}
			contAux++;
		}
	}
	else if (conteo>1){
		cout<<endl<<"Se encontró el número "<<buscado<<" en la cola un total de "<<conteo<<" veces."<<endl;
		cout<<endl<<"Las posiciones (contando desde 0) en las cuales se encontró el número "<<buscado<<" son: ";
		int contAux=0;
		int cantidad=0;
		while (true){
			if (posiciones[contAux]==1){
				if (cantidad==(conteo-1)){
					cout<<contAux;
				}
				else{
					cout<<contAux<<", ";
				}
				cantidad++;
			}
			if (cantidad==conteo){
				break;
			}
			contAux++;
		}
		cout<<endl;
	}
	else{
		cout<<endl<<"El número "<<buscado<<" no se encuentra en la cola."<<endl;
	}
	delete [] posiciones;
}
