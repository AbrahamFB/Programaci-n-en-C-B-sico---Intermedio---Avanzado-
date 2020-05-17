#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int nFilas = 3, nColumnas = 3;
	int matrix1[nFilas][nColumnas];
	int matrix2[nFilas][nColumnas];
	int matrixProducto[nFilas][nColumnas];
	char band = 'F';
	
	
	
	for(int i = 0; i < nFilas; i++){
		for(int j = 0; j < nColumnas; j++){
			cout << "Ingresa [" << i << "][" << j << "]" << endl;
			cin >> matrix1[i][j];
		}
	}
	
	for(int i = 0; i < nFilas; i++){
		for(int j = 0; j < nColumnas; j++){
			cout << "Ingresa [" << i << "][" << j << "]" << endl;
			cin >> matrix2[i][j];
		}
	}

	
	for(int i = 0; i < nFilas; i++){
		for(int j = 0; j < nColumnas; j++){
			matrixProducto[i][j] = 0;
			for(int h = 0; h < nFilas && nColumnas; h++){
				matrixProducto[i][j] += matrix1[i][h] * matrix2[h][j];
			}
		}
	}

	
	cout << "Matriz 1" << endl;
	for(int i = 0; i < nFilas; i++){
		for(int j = 0; j < nColumnas; j++){
			cout << matrix1[i][j] << " ";
		}
		cout << endl;
	}
	cout << "Matriz 2" << endl;
	for(int i = 0; i < nFilas; i++){
		for(int j = 0; j < nColumnas; j++){
			cout << matrix2[i][j] << " ";
		}
		cout << endl;
	}		


	cout << "El producto de las matrices es: " << endl;
	
	for(int i = 0; i < nFilas; i++){
		for(int j = 0; j < nColumnas; j++){
			cout << matrixProducto[i][j] << " ";
		}
		cout << endl;
	}
	
	getch();
	return 0;
}
