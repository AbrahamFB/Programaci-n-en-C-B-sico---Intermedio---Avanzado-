#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct Nodo{
	float dato;
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

void calcularSumaPromedio(Nodo *lista){
	float suma = 0, promedio = 0;
	int contador = 0;
	
	while(lista != NULL){//Mientras no sea el final de la lista
		suma += lista->dato; //suma iterativa
		contador++; //aumentamos el contador de elementos de la lista
		lista = lista->siguiente; //Avanzamos en la lista
	}
	
	promedio = suma / contador;
	
	cout << "\n\nLa suma es: " << suma << endl;
	cout << "El promedio es: " << promedio << endl;
}


int main(){
	Nodo *lista = NULL;
	float dato;
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
	calcularSumaPromedio(lista);	

	getch();
	return 0;
}
