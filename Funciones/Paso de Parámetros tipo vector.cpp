/*	Paso de parámetros de tipo Vector

Parámetros de la función

	void nombreFuncion(tipo nombreArray[], int ("guia no se pone"tamañoArray))
	
Llamar a la función
	nombreFuncion(nombreArray, tamañoArray) 	

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
