#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int nFilas = 3, nColumnas = 3;
	int matrix[nFilas][nColumnas];
	
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
	
	
	cout << "Matriz transpuesta" << endl;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout << matrix[j][i] << " ";
		}
		cout << endl;
	}
	
	getch();
	return 0;
}
