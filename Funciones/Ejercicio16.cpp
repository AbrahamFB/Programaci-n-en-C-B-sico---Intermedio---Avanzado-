#include <iostream>
#include <conio.h>

using namespace std;

int matrix[100][100], nFilas, nColumnas;
void pedirDatos(){
	cout << "Ingresa el numero de Filas:" << endl;
	cin >> nFilas;
	cout << "Ingresa el numero de Columnas:" << endl;
	cin >>nColumnas;
	
	for(int i = 0; i < nFilas; i++){
		for(int j = 0; j < nColumnas; j++){
			cout << "Ingresa un numero: [" << i << "][" << j << "]"<< endl;
			cin >> matrix[i][j];
		}
	}
}
int comprobarMenElem(int matrix[][100], int nFilas, int nColumnas){
	int fila, menor = 999999999;
	cout << "Ingresa un numero de fila: " << endl;
	cin >> fila;
	
	for(int i = 0; i < nFilas; i++){
		for(int j = 0; j < nColumnas; j++){
			if(i == fila){
				if(menor > matrix[i][j]){
					menor = matrix[i][j];
				}
			}
		}
	}
	return menor;
}

int main(){
	cout << ".::Comprobar el numero menor de una fila dada::." << endl;
	pedirDatos();
	cout << "El menor de la fila es: " << comprobarMenElem(matrix, nFilas, nColumnas) << endl;
	
	getch();
	return 0;
}
