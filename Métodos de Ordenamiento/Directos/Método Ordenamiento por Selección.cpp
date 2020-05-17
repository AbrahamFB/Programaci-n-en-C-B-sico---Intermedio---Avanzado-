//Ordenamiento por Selección

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int numero[10];
	int i, j, min, aux; 
	
	cout << "Ingresa 10 numero desordenados: " << endl;
	for(i = 0; i < 10; i++){
		cin >> numero[i];
	}
		
	//Algoritmo del Ordenamiento por Selección
	for(i = 0; i < 10; i++){
		min = i;
		for(j = i + 1; j < 10; j++){
			if(numero[j] < numero[min]){
				min = j;
			}
		}
		aux = numero[i];
		numero[i] = numero[min];
		numero[min] = aux;
	}
	
	
	cout << "Numeros ordenados:" << endl;
	
	cout << "Ascendentemente" << endl;
	for(i = 0; i < 10; i++){
		cout << numero[i] << endl;
	}
	cout << "Descendentemente" << endl;
	for(i = 9; i >= 0; i--){
		cout << numero[i] << endl;
	}
	
	getch();
	return 0;
}
