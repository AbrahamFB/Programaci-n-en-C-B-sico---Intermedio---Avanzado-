#include <iostream>
#include <conio.h>

using namespace std;

struct Promedio{
	float promedio1, promedio2, promedio3;
	
};

struct Alumno{
	char nombre[30];
	char sexo[10];
	int edad;
	struct Promedio notas;
}alumno1;


int main(){
	float media = 0;
	
	cout << "Ingresa los siguientes datos" << endl;
	fflush(stdin); //Vaciar el buffer y permitir ingresar valores	
	
	cout << "Nombre:" << endl;
	cin.getline(alumno1.nombre, 30, '\n');
	cout << "Sexo: " << endl;
	cin.getline(alumno1.sexo, 10, '\n');
	cout << "Edad:" << endl;
	cin >> alumno1.edad;
	cout << "Promedio 1: " << endl;
	cin >> alumno1.notas.promedio1;
	cout << "Promedio 2: " << endl;
	cin >> alumno1.notas.promedio2;	
	cout << "Promedio 3: " << endl;
	cin >> alumno1.notas.promedio3;	
	
	media = (alumno1.notas.promedio1 + alumno1.notas.promedio2 + alumno1.notas.promedio3) / 3;
	
	cout << "Los datos del alumno son:" << endl;
	cout << "Nombre:" << endl;
	cout << alumno1.nombre << endl;
	cout << "Sexo:" << endl;
	cout << alumno1.edad << endl;
	cout << "Edad:" << endl;
	cout << alumno1.edad << endl;
	cout << "Promedio General = " << media << endl;
	
	getch();
	return 0;
}
