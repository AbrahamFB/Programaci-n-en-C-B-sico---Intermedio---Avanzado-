#include <iostream>
#include <conio.h>
#include <stdlib.h>	//exit(1);
#include <fstream>//Sirve para creación, lectura y escritura de archivos

using namespace std;

void escribir(){
	ofstream archivo;	//tipo de dato(ifstream) nombreDelArchivo(archivo)
	string nombreArchivo, frase;
	char resp;
	
	cout << "Ingresa el nombre del archivo:" << endl;
	getline(cin, nombreArchivo);
	
	//archivo.open("ubicacion y nombre del archivo",ios::out);
	archivo.open(nombreArchivo.c_str(), ios::out); //Abriendo archivo
	
	if(archivo.fail()){//archivo.fail() envia un true o un false 
		cout << "Error al abrir el archivo" << endl;
		exit(1);
	}
	
	do{
		fflush(stdin);
		cout << "Ingresa el texto del archivo" << endl;
		getline(cin, frase);
		archivo << frase << endl;
		cout << "Desea ingresar otra frase (s/n):" << endl;
		cin >> resp;
	}while((resp == 'S') || (resp == 's'));
	archivo.close();//Cerrar Archivo
}

void lectura(){
	ifstream archivo;
	string nombreArchivo, texto;
	
	cout << "\tIngresa el nombre o ubicacion del archivo" << endl;
	getline(cin,nombreArchivo);
	archivo.open(nombreArchivo.c_str(), ios::in); //Abriendo el archivo en modo lectura
	
	if(archivo.fail()){
		cout << "Error al abrir el archivo" << endl;
		exit(1);
	}
	cout << "\tAbriendo tu archivo" << endl;
	while(!archivo.eof()){//Mientras no sea el final del archivo
		
		getline(archivo, texto);	//Copiando todo lo que esten dentro del archivo a la variable texto de tipo string
		cout << texto << endl;
		fflush(stdin);
	}
	archivo.close();//Cerramos el archivo
}

int main(){
	int opcion;

	do{
		cout << "\t:::MENU DE ARCHIVOS:::" << endl;
		cout << "1. Ingresa tu texto a un archivo en la direccion de tu preferencia" << endl;
		cout << "2. Abrir archivo de tu eleccion" << endl;
		cout << "3. Salir" << endl;
		cout << "Ingresa la opcion de tu preferencia: " << endl;
		cin >> opcion;
		switch(opcion){
			case 1:
				fflush(stdin);
				cout << "Ingreso de Informacion" << endl;
				escribir();
				system("pause");
				break;
			case 2:
				fflush(stdin);
				cout << "Abrir Archivos" << endl;
				lectura();
				system("pause");
				break;
		}
		system("cls");
	}while(opcion != 3);
	
	getch();
	return 0;
}
