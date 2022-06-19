/*3. Implemente un algoritmo para buscar elementos de la Cola.*/
/*Apellidos y Nombres: Zhong Callasi, Linghai Joaquin*/
#include<iostream>
#include "Cola.h"
using namespace std;
int main (int argc, char *argv[]) {
	Cola cola1;
	cola1.insertarEnCola(13);
	cola1.insertarEnCola(25);
	cola1.insertarEnCola(17);
	cola1.insertarEnCola(32);
	cola1.insertarEnCola(74);
	cola1.insertarEnCola(80);
	cola1.insertarEnCola(74);
	cola1.insertarEnCola(7332);
	cola1.insertarEnCola(853);
	cola1.insertarEnCola(74);
	cola1.imprimirCola();
	cout<<endl<<"Buscamos el número 74: "<<endl;
	cola1.buscar(74);
	cout<<endl<<"Eliminamos un elemento. "<<endl;
	cola1.eliminarNodoEnCola();
	cola1.imprimirCola();
	cout<<endl<<"Buscamos el número 50: "<<endl;
	cola1.buscar(50);
	
	return 0;
}

