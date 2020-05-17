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

void mostrarLista(Nodo *lista){
	Nodo *actual = new Nodo();
	
	actual = lista;
	while(actual != NULL){
		cout << actual->dato << " -> ";
		actual = actual->siguiente;
	}
}

void buscarLista(Nodo *lista, int n){
	bool band = false;
	
	Nodo *actual = new Nodo();
	actual = lista;
	
	while((actual != NULL) && (actual->dato <= n)){
		if(actual->dato == n){
			band = true;
		}
		actual = actual->siguiente;
	}
	if(band == true){
		cout << "Elemento " << n << " se encontro en la lista" << endl;
	}
	else{
		cout << "Elemento " << n << " NO se encontro en la lista" << endl;
	}
}

void menu(){
	int opcion, dato;
	
	do{
		cout << "\t .:::MENU DE LISTA:::.\n\n";
		cout << "1. Insertar elementos a la LISTA" << endl;
		cout << "2. Mostrar los elementos de la LISTA" << endl;
		cout << "3. Buscar elemento en la LISTA" << endl;
		cout << "4. Salir" << endl;
		
		cout << "Ingresa la opcion deseada: " << endl;
		cin >> opcion;
		switch(opcion){
			case 1:		cout << "Ingresa un numero:" << endl;
						cin >> dato;
						insertarLista(lista, dato);
						system("pause");
				break;
			case 2:	mostrarLista(lista);
				system("pause");
				break;
			case 3: 
				cout << "Ingresa el elemento a buscar:" << endl;
				cin >> dato;
				buscarLista(lista, dato);
				system("pause");
				break;
		}
		system("cls");
	}while(opcion != 4);
	
}

int main(){
	menu();

	getch();
	return 0;
}
