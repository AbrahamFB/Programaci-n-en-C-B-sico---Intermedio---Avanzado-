#include <iostream>
#include<conio.h>

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

void comprSime(int matrix[][100], int nFilas, int nColumnas){
	int cont = 0;
	if(nFilas == nColumnas){
		for(int i = 0; i < nFilas; i++){
			for(int j = 0; j < nColumnas; j++){
				if(matrix[i][j] == matrix[j][i]){
					cont++;
				}
			}
		}
	}
	if(cont == nFilas * nColumnas){
		cout << endl;
		cout << "La matriz es simetrica" << endl;
	}
	else{
		cout << "La matriz no es simetrica" << endl;		
	}
}

int main(){
	
	pedirDatos();
	comprSime(matrix, nFilas, nColumnas);
	
	getch();
	return 0;
}
