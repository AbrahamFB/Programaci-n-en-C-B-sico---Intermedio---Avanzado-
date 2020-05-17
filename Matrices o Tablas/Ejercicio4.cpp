#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
	
	int nFilas, nColumnas, num;
	int matrix[100][100];
	int matrix2[100][100];
	
	cout << "Numero de Filas:" << endl;
	cin >> nFilas;
	
	cout << "Numero de Columnas: " << endl;
	cin >> nColumnas;
	
	srand(time(NULL)); 	//Genera numero aletorios
	
	for(int i = 0; i < nFilas; i++){
		for(int j = 0; j < nColumnas; j++){
			num = 1 + rand()%(100);
			matrix[i][j] = num;
		}
	}

	for(int i = 0; i < nFilas; i++){
		for(int j = 0; j < nColumnas; j++){
			matrix2[i][j] = matrix[i][j];
		}
	}
	
	cout << "La matriz con numeros aleatorios es: " << endl;
	for(int i = 0; i < nFilas; i++){
		for(int j = 0; j < nColumnas; j++){
			cout << matrix2[i][j] << " ";
		}
		cout << endl;
	}
	
	getch();
	return 0;
}
