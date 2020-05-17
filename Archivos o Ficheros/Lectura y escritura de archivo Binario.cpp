#include <iostream>
#include <conio.h>
#include <fstream>
#include <string.h>
#include <stdlib.h>

using namespace std;

struct Registro{
	char nombre[30];
	char apellido[20];
};

void escribir(){
	ofstream archivoB;
	
	archivoB.open("PruebaRegistro.dat", ios::out | ios::binary);
	
	if(archivoB.fail()){
		cout << "Error al crear el archivo" << endl;
		exit(1);
	}
	
	Registro persona;

	cout << "Solicitando datos" << endl;
	cout << "Nombre:" << endl;
	cin.getline(persona.nombre, 30, '\n');
	cout << "Apellido:" << endl;
	cin.getline(persona.apellido, 20, '\n');
	
	//Escribimos los datos en el archivo binario
	archivoB.write((char *)&persona, sizeof(Registro));
	
	archivoB.close();
}

void leer(){
	ifstream archivoB;
	
	archivoB.open("PruebaRegistro.dat", ios::in | ios::binary);
	
	if(archivoB.fail()){
		cout << "Error al abrir el archivo" << endl;
		exit(1);
	}
	
	Registro persona;
	
	archivoB.read((char *)&persona, sizeof(Registro)); //donde vamos a guardar lo que leemos
	
	cout << "\nMostrando los datos ingresados" << endl;
	cout << "Nombre: " << persona.nombre<< endl;
	cout << "Apellidos: " << endl << persona.apellido << endl;
	cout << endl;
	
	archivoB.close();
}

int main(){
	escribir();
	leer();
	
	getch();
	return 0;
}

