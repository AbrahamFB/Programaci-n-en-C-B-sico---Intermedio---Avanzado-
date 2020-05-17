#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int nFilas1, nFilas2, nColumnas1, nColumnas2;
	int matrix1[100][100];
	int matrix2[100][100];
	int matrixProducto[100][100];
	char band = 'F';
	
	cout << "Matriz 1" << endl;
	cout << "Numero de Filas:" << endl;
	cin >> nFilas1;
	
	cout << "Numero de Columnas: " << endl;
	cin >> nColumnas1;
	
	cout << "Matriz 2" << endl;
	cout << "Numero de Filas:" << endl;
	cin >> nFilas2;
	
	cout << "Numero de Columnas: " << endl;
	cin >> nColumnas2;	
	
	
	
	for(int i = 0; i < nFilas1; i++){
		for(int j = 0; j < nColumnas1; j++){
			cout << "Ingresa [" << i << "][" << j << "]" << endl;
			cin >> matrix1[i][j];
		}
	}
	
	for(int i = 0; i < nFilas2; i++){
		for(int j = 0; j < nColumnas2; j++){
			cout << "Ingresa [" << i << "][" << j << "]" << endl;
			cin >> matrix2[i][j];
		}
	}

	
		
	
	if((nFilas1 == nColumnas1) && (nFilas2 == nColumnas2)){
		for(int i = 0; i < 3; i++){
			for(int j = 0; j < 3; j++){
				if(matrix[i][j] == matrix[j][i]){
					band = 'V';
				}			
			}
		}	
	}
	
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
	
	
	if(band == 'V'){
		
	}
	else{
		cout << "La matriz no es simetrica"<< endl;
	}		
	

	cout << "_______________________________" << endl << endl;




	cout << "El producto de las matrices es: " << endl;
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout << matrixProducto[i][j] << " ";
		}
		cout << endl;
	}
	
	getch();
	return 0;
}
