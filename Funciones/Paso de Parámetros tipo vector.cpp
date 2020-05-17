/*	Paso de par�metros de tipo Vector

Par�metros de la funci�n

	void nombreFuncion(tipo nombreArray[], int ("guia no se pone"tama�oArray))
	
Llamar a la funci�n
	nombreFuncion(nombreArray, tama�oArray) 	

*/

#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

void cuadrado(int vec[], int);
void mostrar(int vec[], int);


int main(){
	
	const int TAM = 5;
	int vec[TAM] = {1, 2, 3, 4, 5};
	
	
	cuadrado(vec, TAM);
	mostrar(vec, TAM);
	
	getch();
	return 0;
}

void cuadrado(int vec[], int tam){
	for(int i = 0; i < tam; i++){
		vec[i] = pow(vec[i], 2);
	}
}

void mostrar(int vec[], int tam){
	for(int i = 0; i < tam; i++){
		cout << vec[i] << " ";
	}
}
