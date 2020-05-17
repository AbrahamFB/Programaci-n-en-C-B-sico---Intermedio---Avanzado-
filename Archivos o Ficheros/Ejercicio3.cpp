#include <iostream>
#include <conio.h>
#include <stdlib.h>	//exit(1);
#include <fstream>//Sirve para creación, lectura y escritura de archivos

using namespace std;

void aniadir(){
	ofstream archivo;	//tipo de dato(ifstream) nombreDelArchivo(archivo)
	string nombreArchivo, frase;
	char resp;
	
	cout << "Ingresa el nombre del archivo:" << endl;
	getline(cin, nombreArchivo);
	
	//archivo.open("ubicacion y nombre del archivo",ios::out);
	archivo.open(nombreArchivo.c_str(), ios::app); //Abriendo archivo	
	
	
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

int main(){
	aniadir();
	
	getch();
	return 0;
}
