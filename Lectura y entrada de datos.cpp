#include <iostream>
using namespace std;

int main(){
	int numero = 0;
	char letra;
	float flotante = 0;
	double mayor = 0;	//Definiendo la variable
	
	cout << "Digita un número: " << endl;
	cin >> numero;	//Guardando la variable
	cout <<"El número que ingresaste es= " << endl << numero << endl;	//Mostrando el numero
	
	cout << "Digita una letra: " << endl;
	cin >> letra;	//Guardando la variable
	cout <<"La letra que ingresaste es= " << endl << letra << endl;	//Mostrando el numero
	
	cout << "Digita un número flotante: " << endl;
	cin >> flotante;	//Guardando la variable
	cout <<"El número flotante que ingresaste es= " << endl << flotante << endl;	//Mostrando el numero
	
	cout << "Digita un número Double: " << endl;
	cin >> mayor;	//Guardando la variable
	cout <<"El número Double que ingresaste es= " << endl << mayor << endl;	//Mostrando el numero

	return 0;
}
