#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int numeros[10], *dirNum, menor = 999999999;
	
	cout << ".::Ingresa 10 numeros en el arreglo::." << endl;
	for(int i = 0; i < 10; i++){
		cout << "Ingresa un numero: [" << i << "]" << endl;
		cin >> numeros[i]; 		
	}
	
	dirNum = numeros; //Posición de memoria comienza numeros
		
	for(int i = 0; i < 10; i++){
		if(*dirNum < menor){
			menor = *dirNum;
		}
		dirNum++;
	}
	
	cout << "El numero menor del arreglo es: " << menor << endl;
	
	getch();
	return 0;
}
