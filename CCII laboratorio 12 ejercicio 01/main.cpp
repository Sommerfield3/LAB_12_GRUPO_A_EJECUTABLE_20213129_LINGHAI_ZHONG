/*1. Defina una Cola que permita insertar elementos utilizando clases.*/
/*Apellidos y Nombres: Zhong Callasi, Linghai Joaquin*/
#include<iostream>
#include "Cola.h"
using namespace std;

int main (int argc, char *argv[]) {
	Cola  cola1;
	cola1.imprimirCola();
	cola1.insertarEnCola(23);
	cola1.imprimirCola();
	cola1.insertarEnCola(541);
	cola1.imprimirCola();
	cola1.insertarEnCola(90);
	cola1.imprimirCola();
	return 0;
}

