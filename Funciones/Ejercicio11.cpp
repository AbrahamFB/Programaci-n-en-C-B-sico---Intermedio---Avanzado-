#include <iostream>
#include <conio.h>

using namespace std;

void solicitarNum();
int suma(int vec[], int);
int vec[50], tam;

int main(){
	
	solicitarNum();
	cout << "La suma es: " << suma(vec, tam);
	
	getch();
	return 0;
}

void solicitarNum(){
	cout << "Ingresa el tamanio de elementos a sumar:" << endl;
	cin >> tam;
	
	for(int i = 0; i < tam; i++){
		cout << "Ingresa un numero: " << endl;
		cin >> vec[i];
	}
}
int suma(int vec[], int tam){
	int suma = 0;
	
	for(int i = 0; i < tam; i++){
		suma += vec[i];
	}
	return suma;
}
