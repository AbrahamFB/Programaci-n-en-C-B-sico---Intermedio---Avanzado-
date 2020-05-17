#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <fstream>
using namespace std;

void lectura(){
	ifstream archivo;
	string texto;
	
	archivo.open("Ejercicio1.txt", ios::in); //Abriendo el archivo en modo lectura
	
	if(archivo.fail()){
		cout << "Error al abrir el archivo" << endl;
		exit(1);
	}
	
	while(!archivo.eof()){//Mientras no sea el final del archivo
		getline(archivo, texto);	//Copiando todo lo que esten dentro del archivo a la variable texto de tipo string
		cout << texto << endl;
	}
	archivo.close();//Cerramos el archivo
}


int main(){
	lectura();
	
	getch();
	return 0;
}
