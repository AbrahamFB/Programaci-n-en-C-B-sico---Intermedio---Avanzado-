/*	Asignación Dinámica de Arrgelos

new: Reserva el número de bytes solicitado por la declaración
delete: Libera un bloque de bytes reservado con anterioridad

Ejem:
	Pedir al usuario n calificaciones y almacenarlos en un arreglo dinámico
*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>	//Funciona delete y new

using namespace std;

int numCalificaciones, *calif;
void pedirCalificaciones(){
	cout << "Ingresa el numero de Calificaciones: " << endl;
	cin >>numCalificaciones;
	
	calif = new int [numCalificaciones]; //Creando el arreglo dinámico, reservando memoria
	
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
