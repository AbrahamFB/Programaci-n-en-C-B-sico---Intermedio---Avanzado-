/*Programa que lee una entrada estándar de una persona*/

#include <iostream>
using namespace std;

int main(){
	
	int edad;
	char sexo[10];
	float altura;
	
	
	cout << "Ingresa tu edad" << endl; cin >> edad;
	
	cout << "Ingresa tu sexo" << endl; cin >> sexo;
	
	cout << "Ingresa tu altura en metros" << endl; cin >> altura;
	
	
	cout << "Los datos que ingresaste son:" <<endl;
	cout << "Edad: " << edad << endl << "Sexo: " << sexo << endl << "Altura: " << altura << endl;
	
	
	return 0;
}
