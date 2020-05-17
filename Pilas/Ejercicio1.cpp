#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;	
};

void agregarPila(Nodo *&pila, int n){//Tipo Nodo, paso por referencia "Porque irá variando la pila conforme avance el cpp
	Nodo *nuevoNodo = new Nodo(); //1. Crear el espacio en memoria para almacenar un nodo.
	nuevoNodo->dato = n; //2. Cargar el valor dentro del nodo(dato).
	nuevoNodo->siguiente = pila; //3. Cargar el puntero pila dentro del nodo(*siguiente).
	pila = nuevoNodo; //4. Asignar el nuevo nodo a pila.
}
void sacarPila(Nodo *&pila, int &n){//Tipo Nodo, paso por referencia "Porque irá variando la pila conforme avance el cpp
	Nodo *aux = pila;
	n = aux->dato;
	pila = aux->siguiente;
	delete aux;
}

int main(){
	Nodo *pila = NULL;
	int dato;
	char resp;
	
	do{
		cout << "Ingresa un numero: ";
		cin >> dato;
		agregarPila(pila,dato);
		cout<<"\tElemento "<< dato <<" ha sido agregado a PILA correctamente" << endl;
		cout << "Desea agregar otro elemento a Pila (s/n)" << endl;
		cin >> resp;
	}while(resp == 'S' || resp == 's');
	
	cout << "Sacando elementos de la Pila" << endl;
	while(pila != NULL){	//Mientras no se el final de la pila
		sacarPila(pila, dato);
		if(pila != NULL){
			cout << "\tElemento "<< dato <<" ha sido eliminado de la PILA correctamente" << endl;
		}
		else{
			cout << "\tElemento "<< dato <<" ha sido eliminado de la PILA correctamente" << endl;
			cout << "Elemento FINAL" << endl;
		}
	}
	
	getch();
	return 0;
}
