//Punteros a Estructuras

//El operador flechita señala posiciones hacia campos que tendrá nuestra estructura

#include <iostream>
#include <conio.h>

using namespace std;

struct Persona{
	char nombre[40];
	int edad;
}persona, *punteroPersona = &persona;	//para poder almacenar un nombre y una edad dentro de la variable tipo puntero

void pedirDatos(){
	cout << "\t Ingresa tus datos:" << endl;
	cout << "Nombre: " << endl;
	cin.getline(punteroPersona->nombre, 40, '\n');//Guardando dentro de la variable estructura
	cout << "Edad:" << endl;
	cin >> punteroPersona->edad; 
}
void mostrarDatos(Persona *punteroPersona){
	cout << "Tu información es:" << endl;
	cout << "Nombre: " << punteroPersona->nombre << endl;
	cout << "Edad: " << punteroPersona->edad << endl;
}

int main(){
	pedirDatos();
	mostrarDatos(punteroPersona);
	
	getch();
	return 0;
}
