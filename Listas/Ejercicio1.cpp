#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

Nodo *lista = NULL;
void insertarLista(Nodo *&lista, int n){
	Nodo *nuevoNodo = new Nodo();
	Nodo *aux;	
	
	nuevoNodo->dato = n;
	nuevoNodo->siguiente = NULL; 
	
	if(lista == NULL){//Si la lista esta vacia
		lista = nuevoNodo;//agregamos el primer nodo
	}
	else{
		aux = lista;
		while(aux->siguiente != NULL){//recorremos la lista hasta llegar al final
			aux = aux->siguiente;
		}
		aux->siguiente = nuevoNodo;//agregamos el nuevo nodo al final de la lista
	}
	
	cout<<"\tElemento "<< n <<" insertado a LISTA correctamente\n";
}

void mostrarLista(Nodo *lista){
	while(lista != NULL){
		cout << lista->dato << " -> ";
		lista = lista->siguiente; //Avanzamos una posición en la lista
	}
}

void calcularMayorMenor(Nodo *lista){
	int mayor = 0, menor = 9999999;
	
	while(lista != NULL){//mientras no sea el final de la lista
		if((lista->dato) > mayor){//Comprobamos el numero mayor
			mayor = lista->dato;
		}
		if((lista->dato) < menor){//Comprobamos el numero menor
			menor = lista->dato;
		}
		lista = lista->siguiente; //Avanzamos una posición en la lista
	}
	
	cout << "\n\nEl mayor numero es: " << mayor << endl;
	cout << "El menor numero es: " << menor << endl;	
}

int main(){
	Nodo *lista = NULL;
	int dato;
	char resp;
	
	do{
		cout << "Ingresa un numero" << endl;
		cin >> dato;
		insertarLista(lista, dato);
		cout << "Desea agregar otro elemento a la lista (s/n)" << endl;
		cin >> resp;
	}while(resp == 's' || resp == 'S');
	
	cout << "\nLos elementos son:" << endl;
	mostrarLista(lista);
	calcularMayorMenor(lista);	

	getch();
	return 0;
}
