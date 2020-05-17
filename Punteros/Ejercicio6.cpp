#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int numElementos, *elemento;
void pedirDatos(){
	cout << "Ingresa el numero de elementos del arreglo:" << endl;
	cin >> numElementos;
	
	elemento = new int [numElementos];
	
	for(int i = 0; i < numElementos; i++){
		cout << "Ingresa un numero:" << endl;
		cin >> *(elemento + i);
	}
}

void buscarElemento(int *elemento, int numElementos){
	int dato, i = 0;
	bool band = false;
	
	cout << "Ingresa el numero a buscar:" << endl;
	cin >> dato;
	
	//Busqueda secuencial
	while((i < numElementos) && (band == false)){
		if(*(elemento + i) == dato){
			band = true;
		}
		i++;
	}
	
	if(band == false){
		cout << "::No se encontro el dato a buscar::" << endl;
	}
	else{
		cout << "Se encontro el dato a buscar:: En la posicion: " << i - 1 << endl;
	}
}


int main(){
	
	pedirDatos();
	buscarElemento(elemento, numElementos);
	delete[] elemento;
	
	getch();
	return 0;
}
