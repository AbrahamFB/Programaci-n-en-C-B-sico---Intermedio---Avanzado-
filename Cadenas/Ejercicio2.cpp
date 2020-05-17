#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	
	char palabra[100];
	char palabra2[100];
	
	cout << "Ingresa una cadena de caracteres: " << endl;
	cin.getline(palabra, 100, '\n');
	
	
	strcpy(palabra2, palabra); //Copiando palabra a palabra2
	
	
	cout << "Funcion strcpy(); " << endl;
	cout << palabra2 << endl;
	
	getch();
	return 0;
}
