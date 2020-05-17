/*Matrices Dinámicas

Ejem:
	Rellenar una matriz de NxM y mostrar su contenido
		
**punteroMatriz ->  *punteroFila -> [int][int]
					*punteroFila -> [int][int]
					*punteroFila -> [int][int]
1	2	3		1	-> 2	3
4	5	6		4	-> 5	6
7	8	9		7	-> 8	9


*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int **punteroMatriz, nFilas, nColumnas;	//Señarla una matriz
void pedirDatos(){
	cout << "Ingresa el numero de Filas" << endl;
	cin >> nFilas;
	cout << "Ingresa el numero de Columnas" << endl;
	cin >> nColumnas;
	
	punteroMatriz = new int*[nFilas];	//Reservando memoria Filas
	for(int i = 0; i < nFilas;i++){
		punteroMatriz[i] = new int[nColumnas];	//Reservando memoria Columnas
	}
	
	cout << "Ingresa valores de la matriz" << endl;
	for(int i = 0; i < nFilas; i++){
		for(int j = 0; j < nColumnas; j++){
			cout << "Ingresa el valor [" << i << "]["<< j << "]" << endl;
			cin >> *(*(punteroMatriz + i) + j);	//punteroMatriz[i][j]
		}
	}
}
void mostrarMatriz(int **punteroMatriz, int nFilas, int nColumnas){//Le pasamos
	cout << "Mostrando matriz" << endl;
	for(int i = 0; i < nFilas; i++){
		for(int j = 0; j < nColumnas; j++){
			cout << *(*(punteroMatriz + i) + j) << "\t";	//punteroMatriz[i][j]
		}
		cout << endl;
	}
}

int main(){
	
	pedirDatos();
	mostrarMatriz(punteroMatriz, nFilas, nColumnas);
	
	//Liberando Memoria 
	for(int i = 0; i < nFilas; i++){
		delete [] punteroMatriz[i];
	}
	delete [] punteroMatriz;
	
	
	getch();
	return 0;
}
