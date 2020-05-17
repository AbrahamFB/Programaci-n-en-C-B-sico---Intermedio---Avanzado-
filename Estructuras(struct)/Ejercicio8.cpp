#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

struct Persona{
	char nombre[30];
	bool discapacidad;
	
}personas[1000], personasDisc[1000], personasNDisc[1000];

int main(){
	int nPersonas, j = 0, q = 0;
	
	cout << "Ingrese el numero de personas:" << endl;
	cin >> nPersonas;
	
	for(int i = 0; i < nPersonas; i++){
		fflush(stdin);
		cout << "Ingresa los datos de la persona " << i+1 << endl;
		cout << "Nombre: " << endl;
		cin.getline(personas[i].nombre, 30, '\n');
		cout << "Discapacidad (1/0):" << endl;
		cin >> personas[i].discapacidad;
		
		//Almacenando personas con discacidad
		if(personas[i].discapacidad == 1){
			strcpy(personasDisc[j].nombre, personas[i].nombre);
			j++;
		}
		else{
			strcpy(personasNDisc[q].nombre, personas[i].nombre); 
			q++;
		}
		cout << endl;
	}
	
	cout << ".::Datos de las personas::." << endl;
	cout << "\tPersonas con Discapacidad" << endl;
	cout << "Numero de personas con Discapacidad: " << j << endl;
	for(int i = 0; i < j; i++){
		cout << "Nombre: " << personasDisc[i].nombre << endl;
	}
	cout << endl;
	cout << "\tPersonas sin Discapacidad: " << q << endl;
	for(int i = 0; i < q; i++){
		cout << "Nombre: " << personasNDisc[i].nombre << endl;
	}
	
	getch();
	return 0;
}
