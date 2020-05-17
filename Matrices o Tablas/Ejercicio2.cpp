#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int nFilas = 3, nColumnas = 3;
	int matrix[nFilas][nColumnas] = {{1, 2, 3} , {4, 5, 6} , {7, 8, 9}};
	
	cout << "Matriz Completa" << endl;
	for(int i = 0; i < nFilas; i++){
		for(int j = 0; j < nColumnas; j++){
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	
	
	cout << "Diagonal de la Matriz" << endl;
	for(int i = 0; i < nFilas; i++){
		for(int j = 0; j < nColumnas; j++){
			if(i == j){
				cout << matrix[i][j];
			}
			cout << "  ";
		}
		cout << endl;
	}
	
	getch();
	return 0;
}
