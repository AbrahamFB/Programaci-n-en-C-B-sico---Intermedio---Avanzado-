#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int **punteroMatriz, nFilas, nColumnas;

void pedirDatos(){
	cout << "Ingresa el numero de Filas:" << endl;
	cin >>nFilas;
	cout << "Ingresa el numero de Columnas" << endl;
	cin >> nColumnas;
	
	//	Matriz
	punteroMatriz = new int*[nFilas];	//Reservando memoria Filas
	for(int i = 0; i < nFilas; i++){
		punteroMatriz[i] = new int[nColumnas];	//Reservando memoria Columnas
	}
	
	cout << "Ingresa los elementos de la Matriz 1" << endl;
	for(int i = 0; i < nFilas; i++){
		for(int j = 0; j < nColumnas; j++){
			cout << "Ingresa un valor [" << i << "][" <<  j << "]" << endl;
			cin >> *(*(punteroMatriz + i) + j);
		}
	}
}

void mostrarMatrices(int **punteroMatriz, int nFilas, int nColumnas){
	cout << "\tMatriz Originial: " << endl;
	for(int i = 0; i < nFilas; i++){
		for(int j = 0; j < nColumnas; j++){
			cout << *(*(punteroMatriz + i) + j) << "\t";
		}
		cout << endl;
	}	

	cout << "\tMatriz Transpuesta: " << endl;
	for(int i = 0; i < nFilas; i++){
		for(int j = 0; j < nColumnas; j++){
			cout << *(*(punteroMatriz + j) + i) << "\t";
		}
		cout << endl;
	}
}

int main(){
	pedirDatos();
	mostrarMatrices(punteroMatriz, nFilas, nColumnas);
	
	//Liberando Memoria 
	for(int i = 0; i < nFilas; i++){
		delete [] punteroMatriz[i];
	}
	delete [] punteroMatriz;
		
	getch();
	return 0;
}
