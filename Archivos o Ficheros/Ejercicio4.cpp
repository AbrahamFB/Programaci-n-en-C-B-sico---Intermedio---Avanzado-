#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>	//exit(1);
#include <fstream>//Sirve para creación, lectura y escritura de archivos

using namespace std;
struct contacto{
	string nombre, apellido, telefono;
}datos;

//Funcion para crear un contacto
void crearContacto(){
	ofstream archivo;
	char resp;
	
	archivo.open("AgendaTelefonica.txt", ios::out); //Abrimos el archivo en modo escritura
	
	if(archivo.fail()){
		cout << "Error al abrir el archivo";
		exit(1);
	}
	
	archivo<<"\tAgenda Telefonica\n\n";
	
	do{
		fflush(stdin);
		cout << "Ingresa correctamente la Informacion del Contacto" << endl;
		cout << "\nNombre(s): " << endl;
		getline(cin, datos.nombre);
		cout << "Apellido(s): " << endl;
		getline(cin, datos.apellido);
		cout << "Telefono: " << endl;
		getline(cin, datos.telefono);
	
		archivo << "Nombre(s): " << datos.nombre << endl;
		archivo << "Apellido: " << datos.apellido << endl;
		archivo << "Telefono: " << datos.telefono << endl << endl;
		
		cout << "\nDesea Agregar otro contacto: " << endl;
		cin >> resp;
	}while((resp == 'S') || (resp == 's'));
	
	archivo.close(); //Cerramos el archivo	
}

//Funcion para agregar más contactos
void agregarContacto(){
	ofstream archivo;
	char resp;
	
	archivo.open("AgendaTelefonica.txt", ios::app); //Abrimos el archivo en modo agregar
	
	if(archivo.fail()){
		cout<<"Error al abrir el archivo";
		exit(1);
	}
	
	do{
		fflush(stdin);
		cout << "Ingresa correctamente la Informacion del Contacto" << endl;
		cout << "\nNombre(s): " << endl;
		getline(cin, datos.nombre);
		cout << "Apellido(s): " << endl;
		getline(cin, datos.apellido);
		cout << "Telefono: " << endl;
		getline(cin, datos.telefono);
	
		archivo << "Nombre(s): " << datos.nombre << endl;
		archivo << "Apellido(s): " << datos.apellido << endl;
		archivo << "Telefono: " << datos.telefono << endl << endl;
	
		cout << "\nDesea Agregar otro contacto: " << endl;
		cin >> resp;
	}while((resp == 'S') || (resp == 's'));
	
	archivo.close(); //Cerramos el archivo
}

//Función para mostrar los contactos
void visualizarContacto(){
	ifstream archivo;
	string texto;
	
	archivo.open("AgendaTelefonica.txt", ios::in); //Abrimos el archivo en modo lectura
	
	if(archivo.fail()){
		cout << "No se pudo abrir el archivo";
		exit(1);
	}
	
	while(!archivo.eof()){ //mientras no sea el final de archivo
		getline(archivo, texto);
		cout << texto << endl;
	}
	
	archivo.close(); //Cerramos el archivo
}

void menu(){
	int opcion;
	
	do{
		cout << "\t.::MENU De AGENDA TELEFONICA::." << endl;
		cout << "1. Crear Agenda Telefonica" << endl;
		cout << "2. Agregar mas contactos" << endl;
		cout << "3. Mostrar contactos existentes" << endl;
		cout << "4. Salir" << endl;
		cout << "Ingresa la opcion deseada: " << endl;
		cin >> opcion;
		
		switch(opcion){
			case 1:
				cout << "Añadir informacion de Nuevo Contacto" << endl;
				crearContacto();
				cout << endl;
				system("pause");
				break;
			case 2:
				cout << "Añadir informacion de Nuevo Contacto" << endl;
				agregarContacto();
				cout << endl;
				system("pause");
				break;
			case 3:
				cout << "Contactos en Agenda Personal" << endl;
				visualizarContacto();
				cout << endl;
				system("pause");
				break;
		}
		system("cls");
	}while(opcion != 4);
}

int main(){
	menu();	
	
	getch();
	return 0;
}
