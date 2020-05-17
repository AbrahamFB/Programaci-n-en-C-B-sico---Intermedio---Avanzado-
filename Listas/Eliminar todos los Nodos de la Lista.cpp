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

void eliminarNodo(Nodo *&lista, int n){
	if(lista != NULL){
		Nodo *auxBorrar;
		Nodo *anterior = NULL;
		auxBorrar = lista;
		
		//Recorrer la lista
		while((auxBorrar != NULL) && (auxBorrar->dato != n)){
			anterior = auxBorrar;
			auxBorrar = auxBorrar->siguiente;
		}
		
		//El elemento no ha sido encontrado
		if(auxBorrar == NULL){
			cout << "El elemento que deseas eliminar no existe en la LISTA" << endl;
		}
		
		//El primer elemento es el que se elimina
		else if(anterior == NULL){
			lista = lista->siguiente;
			delete auxBorrar;
		}
		
		// El elemento esta en la lista pero no es el primer nodo
		else{
			anterior->siguiente = auxBorrar->siguiente;
			delete auxBorrar;
		}
	}
}

void eliminarLista(Nodo *&lista, int &n){
	Nodo *aux = lista;
	n = aux->dato;
	lista = aux->siguiente;
	delete aux;
	 
}

void menu(){
	int opcion, dato;
	
	do{
		cout << "\t .:::MENU DE LISTA:::.\n\n";
		cout << "1. Insertar elementos a la LISTA" << endl;
		cout << "2. Mostrar los elementos de la LISTA" << endl;
		cout << "3. Buscar elemento en la LISTA" << endl;
		cout << "4. Eliminar un elemento de la LISTA" << endl;
		cout << "5. Vaciar LISTA" << endl;
		cout << "6. Salir" << endl;
		
		cout << "Ingresa la opcion deseada: " << endl;
		cin >> opcion;
		switch(opcion){
			case 1:	
				cout << "Ingresa un numero:" << endl;
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
			case 4:
				cout << "Ingresa el elemento a eliminar:" << endl;
				cin >> dato;
				eliminarNodo(lista, dato);
				system("pause");
				break;
			case 5:
				cout << "Eliminando Lista:" << endl;
				while(lista != NULL){//Mientras no sea el final de la lista
					eliminarLista(lista, dato);
					cout << dato << " -> "<< endl;
				}
				system("pause");
				break;
		}
		system("cls");
	}while(opcion != 6);
	
}

int main(){
	menu();

	getch();
	return 0;
}
