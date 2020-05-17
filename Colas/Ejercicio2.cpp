#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

struct Cliente{
	char nombre[30];
	char id[10];
	int edad;	
};

struct Nodo{
	Cliente c;
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

void insertarCola(Nodo *&inicio, Nodo *&fin, Cliente &c){
	Nodo *nuevoNodo = new Nodo();
	nuevoNodo->c = c;
	nuevoNodo->siguiente = NULL;
	
	if(colaVacia(inicio)){
		inicio = nuevoNodo;
	}
	else{
		fin->siguiente = nuevoNodo;
	}
	fin = nuevoNodo;
}
void quitarCola(Nodo *&inicio, Nodo *&fin,  Cliente &c){
	c = inicio->c;
	
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

void subirCliente(Cliente &c){
	fflush(stdin);
	cout << "Agregar Nuevo Cliente" << endl;
	cout << "Nombre:" << endl;
	cin.getline((c.nombre), 30, '\n');
	cout << "ID:" << endl;
	cin.getline(c.id, 10, '\n');
	cout << "Edad:" << endl;
	cin >> c.edad;
	cout << endl;
}

int main(){
	Nodo *inicio = NULL;
	Nodo *fin = NULL;
	Cliente c;
	char resp;
	
	do{
		subirCliente(c);	//Cargar los datos del cliente
		insertarCola(inicio, fin, c);	//Agregar un nuevo cliente a la cola
		cout << "Desea agregar otro elemento a COLA (s/n)" << endl;
		cin >> resp;
	}while(resp == 'S' || resp == 's');
	cout << "Los clientes se cargaron exitosamente" << endl;
	
	cout << "\t Clientes agragados recientemente" << endl;
	while(inicio != NULL){
		quitarCola(inicio, fin, c);
		cout << "Nombre: " << c.nombre << endl;
		cout << "ID: " << c.id << endl;
		cout << "Edad: " << c.edad << endl;
		cout << endl;
	}
	
	getch();
	return 0;
}
