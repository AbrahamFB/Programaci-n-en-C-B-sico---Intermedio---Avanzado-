#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int **punteroMatriz1, **punteroMatriz2, nFilas, nColumnas;

void pedirDatos(){
	cout << "Ingresa el numero de Filas:" << endl;
	cin >>nFilas;
	cout << "Ingresa el numero de Columnas" << endl;
	cin >> nColumnas;
	
	//Primera Matriz
	punteroMatriz1 = new int*[nFilas];	//Reservando memoria Filas
	for(int i = 0; i < nFilas; i++){
		punteroMatriz1[i] = new int[nColumnas];	//Reservando memoria Columnas
	}
	
	cout << "Ingresa los elementos de la Matriz 1" << endl;
	for(int i = 0; i < nFilas; i++){
		for(int j = 0; j < nColumnas; j++){
			cout << "Ingresa un valor [" << i << "][" <<  j << "]" << endl;
			cin >> *(*(punteroMatriz1 + i) + j);
		}
	}
	
	
	//Segunda Matriz
	punteroMatriz2 = new int*[nFilas];	//Reservando memoria Filas
	for(int i = 0; i < nFilas; i++){
		punteroMatriz2[i] = new int[nColumnas];	//Reservando memoria Columnas
	}
	
	cout << "Ingresa los elementos de la Matriz 2" << endl;
	for(int i = 0; i < nFilas; i++){
		for(int j = 0; j < nColumnas; j++){
			cout << "Ingresa un valor [" << i << "][" << j << "]:" << endl;
			cin >> *(*(punteroMatriz2 + i) + j);
		}
	}
}
void sumaMatrices(int **punteroMatriz1, int **punteroMatriz2, int nFilas, int nColumnas){
	for(int i = 0; i < nFilas; i ++){
		for(int j = 0; j < nColumnas; j++){
			*(*(punteroMatriz1 + i) + j) += *(*(punteroMatriz2 + i) + j);
		}
	}
}
void mostrarSuma(int **punteroMatriz, int nFilas, int nColumnas){
	cout << "La suma de las matrices es: " << endl;
	for(int i = 0; i < nFilas; i++){
		for(int j = 0; j < nColumnas; j++){
			cout << *(*(punteroMatriz1 + i) + j) << "\t";
		}
		cout << endl;
	}
}

int main(){
	pedirDatos();
	sumaMatrices(punteroMatriz1, punteroMatriz2, nFilas, nColumnas);
	mostrarSuma(punteroMatriz1, nFilas, nColumnas);
	
	//Liberando Memoria 
	for(int i = 0; i < nFilas; i++){
		delete [] punteroMatriz1[i];
		delete [] punteroMatriz2[i];
	}
	delete [] punteroMatriz1;
	delete [] punteroMatriz2;

		
	getch();
	return 0;
}
