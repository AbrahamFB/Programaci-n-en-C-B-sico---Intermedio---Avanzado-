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

void insertarCola(Nodo *&inicio, Nodo *&fin, char n){
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
}
void quitarCola(Nodo *&inicio, Nodo *&fin, char &n){
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
	int opcion;
	char dato;
	
	do{
		cout << "\t.:::::Bienvenido a una Cola Basica:::::." << endl;
		cout << "1. Insertar un caracter a la Cola" << endl;
		cout << "2. Mostrar todos los elementos de la Cola" << endl;
		cout << "3. Salir" << endl;
		cout << "Ingresa la opcion deseada:" << endl;
		cin >> opcion;
	
		switch(opcion){
			case 1: cout << "Insertar un caracter a la cola" << endl;
			char resp;
					do{
						cout << "Ingresa un caracter: ";
						cin >> dato;
						insertarCola(inicio, fin, dato);
						cout<<"\tElemento "<< dato <<" ha sido agregado a COLA correctamente" << endl;
						cout << "Desea agregar otro elemento a COLA (s/n)" << endl;
						cin >> resp;
					}while(resp == 'S' || resp == 's');
				break;
			case 2: cout << "Mostrar todos los elementos de la Cola" << endl;
				cout << "Mostrando elementos de la COLA" << endl;
				while(inicio != NULL){	//Mientras no se el final de la pila
					quitarCola(inicio, fin, dato);
					if(inicio != NULL){
						cout << "\tElemento "<< dato  << endl;
					}
					else{
						cout << "\tElemento "<< dato  << endl;
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
