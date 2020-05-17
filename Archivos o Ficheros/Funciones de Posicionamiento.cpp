//Funciones de Posicionamiento - Escritura

#include <iostream>
#include <conio.h>
#include <fstream>
#include <stdlib.h>

using namespace std;

void escribir(){
	ofstream archivo;
	
	archivo.open("posicion.txt", ios::out);
	
	if(archivo.fail()){//archivo.fail() envia un true o un false 
		cout << "Error al abrir el archivo" << endl;
		exit(1);
	}
	
	cout << "Posicion actual: " << archivo.tellp() << endl;//Devuelve la posicion del cursor donde se quedó
	archivo << "Hola que tal?";
	
	//Posiciona el cursor en la posición n apartir de ahí
	archivo.seekp(5);//apartir de la posicion que le indico empieza a escribir
	archivo << "como estas?";
	cout << "Posicion actual: " << archivo.tellp() << endl;
	archivo.close();
}

int main(){
	escribir();
	
	getch();
	return 0;
}
