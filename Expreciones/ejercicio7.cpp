/*La calificaci�n final de un estudiante es la media ponderada de 3 notas:
la nota de pr�cticas que cuenta un 30% del total, la nota te�rica que cuenta un 60%
y la nota de participaci�n que cuenta es el 10% restante. Programa que lee una salida
est�ndar de 3 notas de un alumno y escribe en la salida su nota final*/

#include <iostream>
using namespace std;

int main(){
	
	float practica, teorica, participacion, promedio = 0;
	
	cout << "Ingresa la calificaci�n en pr�cticas: " << endl; cin >> practica;
	cout << "Ingresa la calificaci�n en tu nota te�tica: " << endl; cin >> teorica;
	cout << "Ingresa la calificaci�n de participaciones: " << endl; cin >> participacion;
	
	practica *= .30; // pratica = (practica * .30)
	teorica *= .60;
	participacion *= .10;
	
	promedio = practica + teorica + participacion;

	cout << "Tu promedio acumulado es de: " << endl;
	cout << promedio <<  endl;
	
	return 0;
}
