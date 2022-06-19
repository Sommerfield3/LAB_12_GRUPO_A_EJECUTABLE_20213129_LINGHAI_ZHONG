/*2. Sobre el ejercicio anterior, adecue el programa para eliminar elementos de una
Cola.*/
/*Apellidos y Nombres: Zhong Callasi, Linghai Joaquin*/
#include<iostream>
using namespace std;
#include "Cola.h"
int main (int argc, char *argv[]) {
	Cola  cola1;
	cout<<"Cola sin elementos: "<<endl;
	cola1.imprimirCola();
	cout<<"Agregamos un elemento a la cola: "<<endl;
	cola1.insertarEnCola(1);
	cola1.imprimirCola();
	cola1.eliminarNodoEnCola();
	cout<<endl<<"Eliminamos un elemento de la cola: "<<endl;
	cola1.imprimirCola();
	cout<<endl<<"Agregamos un nuevo elemento a la cola: "<<endl;
	cola1.insertarEnCola(4321);
	cola1.imprimirCola();
	cout<<endl<<"Agregamos otro nuevo elemento a la cola: "<<endl;
	cola1.insertarEnCola(750);
	cola1.imprimirCola();
	cout<<endl<<"Agregamos un nuevo elemento y eliminamos el primero de la cola: "<<endl;
	cola1.insertarEnCola(236);
	cola1.eliminarNodoEnCola();
	cola1.imprimirCola();
	return 0;
}

