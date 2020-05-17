#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	
	char cad[] = "Hola que tal ";
	char cadUsuario[50];
	
	cout << "Ingresa tu nombre: " << endl;
	cin.getline(cadUsuario, 50, '\n');
		
	strcat(cad, cadUsuario);
	
	cout << cad;

	getch();
	return 0;
}
