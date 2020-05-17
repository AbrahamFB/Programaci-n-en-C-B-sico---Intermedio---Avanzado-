#include <iostream>
#include <conio.h>

using namespace std;

struct alumno{
	char nombre[30];
	int edad;
	float promedio;	
}alumnos[3];


int main(){
	float mayor = 0;
	int posicion;
	
	for(int i = 0; i <= 3; i++){
		fflush(stdin); //Vaciar el buffer y permitir ingresar valores
		cout << "Ingresa los datos del alumno " << i+1 << endl;
		cout << "Nombre: " << endl;
		cin.getline(alumnos[i].nombre, 30, '\n');
		cout << "Edad: " << endl;
		cin >> alumnos[i].edad;
		cout << "Promedio: " << endl;
		cin >> alumnos[i].promedio;
		cout << endl;
		
		
		//Comprobando el mejor promedio
		if(alumnos[i].promedio > mayor){
			mayor = alumnos[i].promedio;
			posicion = i;
		}
	}
	
	
	cout << endl << "----Alumnos con el mejor promedio----" << endl;	
	cout << "Nombre: " << alumnos[posicion].nombre << endl;
	cout << "Edad: " << alumnos[posicion].edad << endl;
	cout << "Promedio: " << alumnos[posicion].promedio << endl;
	
	getch();
	return 0;
}
