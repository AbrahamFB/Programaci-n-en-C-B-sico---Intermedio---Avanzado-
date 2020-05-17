#include <iostream>
#include <conio.h>

using namespace std;

struct Alumno{
	char nombre[40];
	int edad;
	float promedio;	
}alum[3], *punteroAlumno = alum;

void pedirDatos(){
	cout << "\t\tIngresa los siguientes datos" << endl;
	for(int i = 0; i < 3; i++){
		fflush(stdin);
		cout << "\tAlumno " << i+1 << ":" << endl;
		cout << "Nombre:" << endl;
		cin.getline((punteroAlumno + i)->nombre, 40, '\n');
		cout << "Edad:" << endl;
		cin >> (punteroAlumno + i)->edad;
		cout << "Promedio:" << endl;
		cin >> (punteroAlumno + i)->promedio;
	}
}

void mejorPromedio(Alumno *punteroAlumno){
	float mayor = 0;
	int pos;
	for(int i = 0; i < 3; i++){
		if((punteroAlumno + i)->promedio >mayor){
			mayor = (punteroAlumno + i)->promedio;
			pos = i;	//Guardando la posición de mayor promedio
		}
	}
	cout << "El alumno con mejor promedio es: " << endl;
	cout << "Nombre: " << endl;
	cout << (punteroAlumno + pos)->nombre << endl;
	cout << "Edad:" << endl;
	cout << (punteroAlumno + pos)->edad << endl;
	cout << "Promedio:" << endl;
	cout << (punteroAlumno + pos)->promedio << endl;
}

int main(){
	
	pedirDatos();
	mejorPromedio(punteroAlumno);
	
	getch();
	return 0;
}
