//Cadena de Caracteres

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	
	char palabra[] = "Abraham";
	char palabra2[] = {'A', 'b', 'r', 'a', 'h', 'a', 'm'};
	char nombre[25];
	
	cout << "Nombre con = Abraham" << endl;
	cout << palabra << endl; 
	
	cout << "Nombre con = {'A', 'b', 'r', 'a', 'h', 'a', 'm'}" << endl;
	cout << palabra2 << endl;
	
	cout << "Ingresa tu nombre: " << endl;
	cin.getline(nombre, 25, '\n'); //cin.getline(variable_donde_guardar, tamaño, limitador);
	cout << nombre;
	
	getch();
	return 0;
}
