/*La calificación final de un estudiante es la media ponderada de 3 notas:
la nota de prácticas que cuenta un 30% del total, la nota teórica que cuenta un 60%
y la nota de participación que cuenta es el 10% restante. Programa que lee una salida
estándar de 3 notas de un alumno y escribe en la salida su nota final*/

#include <iostream>
using namespace std;

int main(){
	
	float practica, teorica, participacion, promedio = 0;
	
	cout << "Ingresa la calificación en prácticas: " << endl; cin >> practica;
	cout << "Ingresa la calificación en tu nota teótica: " << endl; cin >> teorica;
	cout << "Ingresa la calificación de participaciones: " << endl; cin >> participacion;
	
	practica *= .30; // pratica = (practica * .30)
	teorica *= .60;
	participacion *= .10;
	
	promedio = practica + teorica + participacion;

	cout << "Tu promedio acumulado es de: " << endl;
	cout << promedio <<  endl;
	
	return 0;
}
