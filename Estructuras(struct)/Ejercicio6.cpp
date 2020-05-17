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
}alumnos[1000];


int main(){
	int numAlumnos, posMejProm = 0;
	float media[1000], mejProm = 0;
	
	cout << "Ingresa el numero de alumnos:" << endl;
	cin >> numAlumnos;
	

	cout << "Ingresa los siguientes datos" << endl;
	for(int i = 0; i < numAlumnos; i++){
		cout << "Alumno " << i+1 << endl;
		fflush(stdin); //Vaciar el buffer y permitir ingresar valores	
	
		cout << "Nombre:" << endl;
		cin.getline(alumnos[i].nombre, 30, '\n');
		cout << "Sexo: " << endl;
		cin.getline(alumnos[i].sexo, 10, '\n');
		cout << "Edad:" << endl;
		cin >> alumnos[i].edad;
		cout << "Promedio 1: " << endl;
		cin >> alumnos[i].notas.promedio1;
		cout << "Promedio 2: " << endl;
		cin >> alumnos[i].notas.promedio2;	
		cout << "Promedio 3: " << endl;
		cin >> alumnos[i].notas.promedio3;	
		
		media[i] = (alumnos[i].notas.promedio1 + alumnos[i].notas.promedio2 + alumnos[i].notas.promedio3) / 3;
		if(media[i] > mejProm){
			mejProm = media[i];
			posMejProm = i;
		}
		cout << endl;
	}
	
	cout << endl;
	cout << "Los datos del alumno son:" << endl;
	cout << "Nombre:" << endl;
	cout << alumnos[posMejProm].nombre << endl;
	cout << "Sexo:" << endl;
	cout << alumnos[posMejProm].sexo << endl;
	cout << "Edad:" << endl;
	cout << alumnos[posMejProm].edad << endl;
	cout << "Promedio General = " << media[posMejProm] << endl;
	
	getch();
	return 0;
}
