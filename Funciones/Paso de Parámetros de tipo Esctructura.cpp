#include <iostream>
#include <conio.h>

using namespace std;

struct Persona{
	char nombre[30];
	int edad;
}p1;

void pedirDatos(){
	cout << "Ingresa los siguientes datos:" << endl;
	cout << "Nombre:" << endl;
	cin.getline(p1.nombre, 30, '\n');
	cout << "Edad:" << endl; 
	cin >> p1.edad;
}
void mostrarDatos(Persona p){
		cout << "Nombre:" << endl;
		cout << p.nombre << endl;
		cout << "Edad:" << endl;
		cout << p.edad << endl;
}


int main(){
	pedirDatos();
	mostrarDatos(p1);
	
	getch();
	return 0;
}
