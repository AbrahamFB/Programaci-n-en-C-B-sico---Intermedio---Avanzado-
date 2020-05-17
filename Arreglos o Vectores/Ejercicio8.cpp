#include <iostream>
#include <conio.h>

using namespace std; 

int main(){
	int n = 5;
	int numero[n];
	int array[n];
	
	cout << "Ingresa 5 numeros al vector Numero" << endl;
	
	for(int i = 0; i < 5; i++){
		cout << "Ingrese un numero: " << endl;
		cin >> numero[i];
	}
	
	for(int i = 0; i < 5; i++){
		array[i] = numero[i];
		
		array[i] *= 2;
	}
	
	
	cout << "Vector 2:: Multiplicado * 2" << endl;
	for(int i = 0; i < 5; i++){
		cout << array[i] << " ";
	}
	
	getch();
	return 0;
}
