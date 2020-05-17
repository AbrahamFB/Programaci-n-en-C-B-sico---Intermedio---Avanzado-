#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int nFilas = 3, nColumnas = 3;
	int matrix1[nFilas][nColumnas];
	int matrix2[nFilas][nColumnas];
	int matrixSuma[nFilas][nColumnas];
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout << "Ingresa [" << i << "][" << j << "]" << endl;
			cin >> matrix1[i][j];
		}
	}
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout << "Ingresa [" << i << "][" << j << "]" << endl;
			cin >> matrix2[i][j];
		}
	}	
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
		matrixSuma[i][j] = matrix1[i][j] + matrix2[i][j]; 
		}
	}	

	cout << "_______________________________" << endl << endl;

	cout << "Matriz 1" << endl;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout << matrix1[i][j] << " ";
		}
		cout << endl;
	}
	cout << "Matriz 2" << endl;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout << matrix2[i][j] << " ";
		}
		cout << endl;
	}	


	cout << "La suma de las matrices es: " << endl;
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout << matrixSuma[i][j] << " ";
		}
		cout << endl;
	}
	
	getch();
	return 0;
}
