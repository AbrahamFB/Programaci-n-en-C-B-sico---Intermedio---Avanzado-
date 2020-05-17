#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int nFilas = 2, nColumnas = 2;
	int matrix[nFilas][nColumnas] = {{1, 2} , {3, 4}};
	int matrix2[nFilas][nColumnas];
	
	for(int i = 0; i < nFilas; i++){
		for(int j = 0; j < nColumnas;j++){
			matrix2[i][j] = matrix[i][j];
		}
	}
	
	
	for(int i = 0; i < nFilas; i++){
		for(int j = 0; j < nColumnas;j++){
			cout << matrix2[i][j] << " ";
		}
		cout << endl;
	}
	
	getch();
	return 0;
}
