#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;	
};

void agregarPila(Nodo *&pila,int n){//Tipo Nodo, paso por referencia "Porque irá variando la pila conforme avance el cpp
	Nodo *nuevoNodo = new Nodo(); //1. Crear el espacio en memoria para almacenar un nodo.
	nuevoNodo->dato = n; //2. Cargar el valor dentro del nodo(dato).
	nuevoNodo->siguiente = pila; //3. Cargar el puntero pila dentro del nodo(*siguiente).
	pila = nuevoNodo; //4. Asignar el nuevo nodo a pila.
	
	cout<<"\tElemento "<< n <<" ha sido agregado a PILA correctamente" << endl;
}

int main(){
	Nodo *pila = NULL;
	int n1, n2;
	
	cout << "Ingresa un numero: ";
	cin >> n1;
	agregarPila(pila,n1);
	
	cout << "Ingresa otro numero: ";
	cin >> n2;
	agregarPila(pila, n2);
	
	getch();
	return 0;
}
