/*Programa que lee 3 notas de un alumno y calcula  la nota final (promedio)*/

#include <iostream>
using namespace std;

int main(){
	
	float cal1, cal2, cal3, promedio = 0;
	
	cout << "Ingresa tu primer promedio:" << endl; cin >> cal1;
	cout << "Ingresa tu segundo promedio:" << endl; cin >> cal2;
	cout << "Ingresa tu tercer promedio:" << endl; cin >> cal3;
	
	promedio = ((cal1 + cal2 + cal3) / 3);
	
	cout << "Tu promedio general de las 3 materias es: " << endl;
	cout << promedio << endl;
	
	return 0;
}
