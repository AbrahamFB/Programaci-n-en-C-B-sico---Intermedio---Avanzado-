#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int nFilas, nColumnas;
	int matrix[100][100];
	char band = 'F';
	
	cout << "Numero de Filas:" << endl;
	cin >> nFilas;
	
	cout << "Numero de Columnas: " << endl;
	cin >> nColumnas;

	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout << "Ingresa [" << i << "][" << j << "]" << endl;
			cin >> matrix[i][j];
		}
	}	
	
	cout << "Matriz Original" << endl;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	
	if(nFilas == nColumnas){
		for(int i = 0; i < 3; i++){
			for(int j = 0; j < 3; j++){
				if(matrix[i][j] == matrix[j][i]){
					band = 'V';
				}			
			}
		}	
	}
	
	if(band == 'V'){
		cout << "La matriz es simetrica" << endl;
	}
	else{
		cout << "La matriz no es simetrica"<< endl;
	}
	
	
	getch();
	return 0;
}
