#include <iostream>
#include <conio.h>
#include <fstream>
#include <string.h>
#include <stdlib.h>

using namespace std;

struct RegistroPulsaciones{
	float hora, minuto;
};

void comenzarPulsaciones(){
	ofstream archivoB;
	
	archivoB.open("RegistroPulsaciones.dat", ios::out | ios::binary);
	
	if(archivoB.fail()){
		cout << "Error al crear el archivo" << endl;
		exit(1);
	}
	
	RegistroPulsaciones pulsaciones;

	cout << "Solicitando datos de las pulsaciones" << endl;
	cout << "Tiempo" << endl;
	cin >> pulsaciones.hora;
	cout << "Pulsaciones:" << endl;
	cin >> pulsaciones.minuto;
	
	//Escribimos los datos en el archivo binario
	archivoB.write((char *)&pulsaciones, sizeof(RegistroPulsaciones));
	
	archivoB.close();
}

void anadirPulsaciones(){
	ofstream archivoB;	//Crear objeto
	
	archivoB.open("RegistroPulsaciones.dat", ios::app | ios::binary);
	
	if(archivoB.fail()){
		cout << "Error al crear el archivo" << endl;
		exit(1);
	}
	
	RegistroPulsaciones pulsaciones;

	cout << "Solicitando datos de las pulsaciones" << endl;
	cout << "Tiempo" << endl;
	cin >> pulsaciones.hora;
	cout << "Pulsaciones:" << endl;
	cin >> pulsaciones.minuto;
	
	//Escribimos los datos en el archivo binario
	archivoB.write((char *)&pulsaciones, sizeof(RegistroPulsaciones));
	
	archivoB.close();
}

void leer(){
	ifstream archivoB;
	
	archivoB.open("RegistroPulsaciones.dat", ios::in | ios::binary);
	
	if(archivoB.fail()){
		cout << "Error al abrir el archivo" << endl;
		exit(1);
	}
	
	RegistroPulsaciones pulsaciones;

	
	while(!archivoB.eof()){//mientras no haya finalizado de recorrer mi archivo
		
		archivoB.read((char *)&pulsaciones, sizeof(RegistroPulsaciones)); //donde vamos a guardar lo que leemos
		if(!archivoB.eof()){
			cout << "\nMostrando los datos ingresados" << endl;
			cout << "Tiempo:" << endl << pulsaciones.hora << endl;
			cout << "Pulsaciones:" << endl << pulsaciones.minuto << endl;
			cout << endl;
		}
	}
	archivoB.close();
}
void menu(){
	int opcion;
	
	do{
		cout << ".::MENU DE ARCHIVOS BINARIOS::." << endl;
		cout << "1. Comenzar a digitar las pulsaciones" << endl;
		cout << "2. Anadir mas pulsaciones" << endl;
		cout << "3. Mostrar Pulsaciones" << endl;
		cout << "4. Salir" << endl;
		
		cout << "Ingrese la opcion de deseada:" << endl;
		cin >> opcion;
		
		switch(opcion){
			case 1:
				comenzarPulsaciones();
				system("pause");
				break;
			case 2:
				anadirPulsaciones();
				system("pause");
				break;
			case 3:
				leer();
				system("pause");
				break;
			default:
				cout << "Ingrese la opcion correcta" << endl;
		}
		system("cls");
	}while(opcion != 4);
}

int main(){
	menu();
	
	getch();
	return 0;
}

