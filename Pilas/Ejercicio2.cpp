#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;	
};

void agregarPila(Nodo *&pila, char n){//Tipo Nodo, paso por referencia "Porque irá variando la pila conforme avance el cpp
	Nodo *nuevoNodo = new Nodo(); //1. Crear el espacio en memoria para almacenar un nodo.
	nuevoNodo->dato = n; //2. Cargar el valor dentro del nodo(dato).
	nuevoNodo->siguiente = pila; //3. Cargar el puntero pila dentro del nodo(*siguiente).
	pila = nuevoNodo; //4. Asignar el nuevo nodo a pila.
}

void sacarPila(Nodo *&pila, char &n){//Tipo Nodo, paso por referencia "Porque irá variando la pila conforme avance el cpp
	Nodo *aux = pila;
	n = aux->dato;
	pila = aux->siguiente;
	delete aux;
}

int main(){
	Nodo *pila = NULL;
	int opcion;
	char dato;
	
	do{
		cout << "\t.:::::Bienvenido a una Pila Basica:::::." << endl;
		cout << "1. Insertar un caracter a la pila" << endl;
		cout << "2. Mostrar todos los elementos de la pila" << endl;
		cout << "3. Salir" << endl;
		cout << "Ingresa la opcion deseada:" << endl;
		cin >> opcion;
	
		switch(opcion){
			case 1: cout << "Insertar un caracter a la pila" << endl;
			char resp;
					do{
						cout << "Ingresa un caracter: ";
						cin >> dato;
						agregarPila(pila, dato);
						cout<<"\tElemento "<< dato <<" ha sido agregado a PILA correctamente" << endl;
						cout << "Desea agregar otro elemento a Pila (s/n)" << endl;
						cin >> resp;
					}while(resp == 'S' || resp == 's');
				break;
			case 2: cout << "Mostrar todos los elementos de la pila" << endl;
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
				system("pause");
				break;
			case 3: cout << "Salir" << endl;
				break;
			default: cout << "Ingrese la opcion correcta" << endl;
		}
		system("cls"); //Limpiar pantalla
	}while(opcion != 3);

	
	
	getch();
	return 0;
}
