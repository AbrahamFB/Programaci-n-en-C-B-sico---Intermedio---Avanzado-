/*	Asignaci�n Din�mica de Arrgelos

new: Reserva el n�mero de bytes solicitado por la declaraci�n
delete: Libera un bloque de bytes reservado con anterioridad

Ejem:
	Pedir al usuario n calificaciones y almacenarlos en un arreglo din�mico
*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>	//Funciona delete y new

using namespace std;

int numCalificaciones, *calif;
void pedirCalificaciones(){
	cout << "Ingresa el numero de Calificaciones: " << endl;
	cin >>numCalificaciones;
	
	calif = new int [numCalificaciones]; //Creando el arreglo din�mico, reservando memoria
	
	cout << ":::Ingresa las Calificaciones:::" << endl;
	for(int i = 0; i < numCalificaciones; i++){
		cout << "Calificacion " << i << ":" << endl;
		cin >> calif[i];
	}
}

void mostrarCalificaciones(){
	cout << "Calificaciones del Usuario" << endl;
	for(int i = 0; i < numCalificaciones; i++){
		cout << "Calificacion " << i << ": " << calif[i] << endl;
	}
}


int main(){
	
	pedirCalificaciones();
	mostrarCalificaciones();
	
	delete[] calif;	//Liberar memoria reservada, || delete[] nombreVariableTipoPuntero;
	
	getch();
	return 0;
}
