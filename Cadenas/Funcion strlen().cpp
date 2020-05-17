//Longitud de una Cadenas de Caracteres - Funcion strlen()

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	
	char palabra[100];
	int longitud = 0;
	
	cout << "Ingresa un frase: " << endl;
	cin.getline(palabra, 100, '\n');
	
	longitud = strlen(palabra);
	
	cout << "Su longitu es: " << endl;
	cout << longitud;
	
	
	getch();
	return 0;
}
