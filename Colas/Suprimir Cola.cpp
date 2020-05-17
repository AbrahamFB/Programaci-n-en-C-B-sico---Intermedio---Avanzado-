#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;	
};
//Función para determinar si la cola esta vacia
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
void quitarCola(Nodo *&inicio, Nodo *&fin, int &n){
	n = inicio->dato;
	
	Nodo *aux = inicio;
	
	if(inicio == fin){
		inicio = NULL;
		fin = NULL;
	}
	else{
		inicio = inicio->siguiente;
	}
	
	delete aux;
}


int main(){
	Nodo *inicio = NULL;
	Nodo *fin = NULL;
	int dato;
	
	cout << "Ingresa un numero:" << endl;
	cin >> dato;
	insertarCola(inicio, fin, dato);
	
	while(inicio != NULL){
		quitarCola(inicio, fin, dato);
		
		if(inicio != NULL){
			cout << dato << " , ";
		}
		else{
			cout << "Elemento FINAL" << endl;
		}
	}
	
	getch();
	return 0;
}
