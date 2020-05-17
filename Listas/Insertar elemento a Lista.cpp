#include <iostream>
#include <conio.h>

using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

void insertarLista(Nodo *&lista, int n){
	Nodo *nuevoNodo = new Nodo();
	
	nuevoNodo->dato = n;
	Nodo *aux1 = lista;
	Nodo *aux2;
	
	while((aux1 != NULL) && (aux1->dato < n)){
		aux2 = aux1;
		aux1 = aux1->siguiente;
	}
	
	if(lista == aux1){
		lista = nuevoNodo;
	}
	else{
		aux2->siguiente = nuevoNodo;
	}
	
	nuevoNodo->siguiente = aux1;
	
	cout<<"\tElemento "<< n <<" insertado a LISTA correctamente\n";
}

int main(){
	Nodo *lista = NULL;
	
	int dato;
	
	cout << "Ingresa un numero:" << endl;
	cin >> dato;
	insertarLista(lista, dato);
	
	getch();
	return 0;
}
