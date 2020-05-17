#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;	
};
bool colaVacia(Nodo *inicio){
	return (inicio == NULL)? true : false;
/*	if(inicio == NULL){
		return true;
	}
	else{
		return false;
	}*/
}

void insertarCola(Nodo *&inicio, Nodo *&fin, int n){
	Nodo *nuevoNodo = new Nodo();
	nuevoNodo -> dato = n;
	nuevoNodo -> siguiente = NULL;
	
	if(colaVacia(inicio)){
		inicio = nuevoNodo;
	}
	else{
		fin->siguiente = nuevoNodo;	
	}	
	
	fin = nuevoNodo;
		cout<<"\tElemento "<< n <<" ha sido agregado a la COLA correctamente" << endl;
}
//Función para determinar si la cola esta vacia


int main(){
	Nodo *inicio = NULL;
	Nodo *fin = NULL;
	int dato;
	
	cout << "Ingresa un numero:" << endl;
	cin >> dato;
	insertarCola(inicio, fin, dato);
	
	getch();
	return 0;
}
