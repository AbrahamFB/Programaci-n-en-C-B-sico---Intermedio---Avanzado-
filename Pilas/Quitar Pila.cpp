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
	int dato, num;
	
	cout << "Ingresa el numero de elementos a agragar a la pila:" << endl;
	cin >> num;
	
	for(int i = 0; i < num; i++){
		cout << "Ingresa un numero: ";
		cin >> dato;
		agregarPila(pila,dato);
		cout<<"\tElemento "<< dato <<" ha sido agregado a PILA correctamente" << endl;
	}
	
	
	cout << "Quitando elementos de la Pila" << endl;
	while(pila != NULL){
		sacarPila(pila, dato);
		if(pila != NULL){
			cout << "\tElemento "<< dato <<" ha sido elimitado de la PILA correctamente" << endl;
		}
		else{
			cout << "\tElemento "<< dato <<" ha sido elimitado de la PILA correctamente" << endl;
			cout << "Elemento FINAL" << endl;
		}
	}
	
	getch();
	return 0;
}
