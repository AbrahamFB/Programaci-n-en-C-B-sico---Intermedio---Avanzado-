#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int nNumeros, *numeros;
void pedirNumeros(){
	cout << "Ingresa la cantidad de numeros: " << endl;
	cin >>nNumeros;
	
	numeros = new int [nNumeros]; //Creando el arreglo dinámico, reservando memoria
	
	for(int i = 0; i < nNumeros; i++){
		cout << "Numero " << i << ":" << endl; 
		cin >> *(numeros+i);// ó numeros[i]
	}	
}

void ordenarNumeros(int *numeros, int nNumeros){
	int aux;
	
	//Ordenamiento por metodo burbuja con punteros
	for(int i = 0; i < nNumeros; i++){
		for(int j = 0; j < nNumeros - 1; j++){
			if(*(numeros + j) > *(numeros + j + 1)){
				aux = *(numeros + j);
				*(numeros + j) = *(numeros + j + 1);
				*(numeros + j + 1) = aux;
			}
		}
	}
}

void mostrarArregloOrdenado(int *numeros, int nNumeros){//Mostrando Arreglo ordenado
	cout << "Mostrando Arreglo Ordenado: " << endl;
	for(int i = 0; i < nNumeros; i++){
		cout << *(numeros + i) << " ";
	}
}

int main(){
	
	pedirNumeros();
	ordenarNumeros(numeros, nNumeros);
	mostrarArregloOrdenado(numeros, nNumeros);	
	delete[] numeros;	//Liberar memoria reservada, || delete[] nombreVariableTipoPuntero;
	getch();
	return 0;
}
