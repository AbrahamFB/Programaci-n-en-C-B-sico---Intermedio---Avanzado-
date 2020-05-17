//Invertir una Cadena -  Funcion strrev()

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	
	char cadUsuario[100];
	
	cout << "Ingresa una frase o palabra" << endl;
	cin.getline(cadUsuario, 100, '\n');
	
	strrev(cadUsuario);
	
	cout << "Cadena invertida: " << endl;
	cout << cadUsuario << endl;
		
	getch();
	return 0;
}
