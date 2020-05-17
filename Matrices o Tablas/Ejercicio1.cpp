#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int nFilas, nColumnas; 
	int matrix[100][100];
	
	
	cout << "Ingresa el numero de Filas:" << endl;
	cin >> nFilas;
	cout << "Ingresa el numero de Columnas:" << endl;
	cin >> nColumnas;
	
	for(int i = 0; i < nFilas; i++){
		for(int j = 0; j < nColumnas; j++){
			cout << "Ingresa un numero [" << i << "][" << j << "]"<< endl;
			cin >> matrix[i][j];
		}
	}
	
	
	cout << "La matriz es: " << endl;
	for(int i = 0; i < nColumnas; i++){
		for(int j = 0; j < nColumnas; j++){
		cout << matrix[i][j] << " ";	
		}
		cout << endl;
	}
	
	getch();
	return 0;
}
