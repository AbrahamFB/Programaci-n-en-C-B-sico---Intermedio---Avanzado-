#include <iostream>
using namespace std;

int main(){
	int numero = 0;
	char letra;
	float flotante = 0;
	double mayor = 0;	//Definiendo la variable
	
	cout << "Digita un n�mero: " << endl;
	cin >> numero;	//Guardando la variable
	cout <<"El n�mero que ingresaste es= " << endl << numero << endl;	//Mostrando el numero
	
	cout << "Digita una letra: " << endl;
	cin >> letra;	//Guardando la variable
	cout <<"La letra que ingresaste es= " << endl << letra << endl;	//Mostrando el numero
	
	cout << "Digita un n�mero flotante: " << endl;
	cin >> flotante;	//Guardando la variable
	cout <<"El n�mero flotante que ingresaste es= " << endl << flotante << endl;	//Mostrando el numero
	
	cout << "Digita un n�mero Double: " << endl;
	cin >> mayor;	//Guardando la variable
	cout <<"El n�mero Double que ingresaste es= " << endl << mayor << endl;	//Mostrando el numero

	return 0;
}
