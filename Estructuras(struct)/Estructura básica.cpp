/*
	struct  <nombreDeLaEstructura> {
    <tipoDeDato>     <nombreDeCampo>
    <tipoDeDato>     <nombreDeCampo>
    <tipoDeDato>     <nombreDeCampo>
    …
    <tipoDeDato>     <nombreDeCampo>
};

*/

#include <iostream>
#include <conio.h>


using namespace std;


struct Persona{
	char nombre[20];
	int edad;
}persona1;

int main(){
	
	cout << "Ingresa tu nombre:" << endl;
	cin.getline(persona1.nombre, 20, '\n');
	
	cout << "Ingresa tu edad:" << endl;
	cin >> persona1.edad;	
	
	cout << "Datos del usuario:" << endl;
	cout << "Nombre: " << persona1.nombre << endl;
	cout << "Edad: " << persona1.edad << endl;
		
	getch();
	return 0;
}
