/*	Transmisión de Arreglos

Ejem:
	Halla el máximo elemento de un arreglo
*/

#include <iostream>
#include <conio.h>

using namespace std;

int hallarMayor(int *dirVec, int numElementos){
	int mayor = 0;
	
	for(int i = 0; i < numElementos; i++){
		if(*(dirVec + i) > mayor){
			mayor = *(dirVec + i);
		}
	}
	return mayor;
}

int main(){
	const int numElementos = 5;
	int numeros[numElementos] = {3, 5, 2, 8, 1};
	
	
	cout << "Numeros del arreglo:" << endl;
	for(int i = 0; i < numElementos; i++){
		cout << numeros[i]<< " ";
	}
	cout << endl;
	
	cout << "El numero mayor del arreglo es: " << hallarMayor(numeros, numElementos);
	
	
	getch();
	return 0;
}
