/*	Paso de parametros  TIPO MATRIZ
	
Elevar una matriz al cuadrado
*/

#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

void mostrarMatOr(int matrix[][3], int nFilas, int nColumnas){//En el numero de columnas es obligatorio poner el numero
	cout << ".::Matriz Original::." << endl;
	for(int i = 0; i < nFilas; i++){
		for(int j = 0; j < nColumnas; j++){
			cout << "\t" << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

void cuadardo(int matrix[][3], int nFilas, int nColumnas){//En el numero de columnas es obligatorio poner el numero	
	for(int i = 0; i < nFilas; i++){
		for(int j = 0; j < nColumnas; j++){
			matrix[i][j] = pow(matrix[i][j], 2);
		}
	}
}

void matrCuadrado(int matrix[][3], int nFilas, int nColumnas){//En el numero de columnas es obligatorio poner el numero
	cout << ".::Matriz elevada::." << endl;
	for(int i = 0; i < nFilas; i++){
		for(int j = 0; j < nColumnas; j++){
			cout << "\t" << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

int main(){
	const int nFilas = 3;
	const int nColumnas = 3;
	int matrix[nFilas][nColumnas] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
	
	mostrarMatOr(matrix, nFilas, nColumnas);
	cuadardo(matrix, nFilas, nColumnas);
	matrCuadrado(matrix, nFilas, nColumnas);
	
	getch();
	return 0;
}
