#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

char nombre[50];
void pedirNombre(){
	
	cout << "Ingresa tu nombre:" << endl;
	cin.getline(nombre, 50, '\n');
	
	strupr(nombre);	//pasando a mayúsculas	
}

int contandoVocales(char *nom){
	int contV = 0;	

	while(*nom){	//mientras nombre no sea nulo '\0'
		switch(*nom){
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U': contV++;
		}
		nom++;
	}
	return contV;
}

int main(){
	
	pedirNombre();
	cout << "El numero de Vocales del nombre es: " << endl;
	cout << contandoVocales(nombre) << endl;
	
	getch();
	return 0;
}
