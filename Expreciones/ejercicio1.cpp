/*Programa que lee una entrada estándar dos números y muestra la salida  estándar de la suma, resta, multiplicación y división*/

#include <iostream>
using namespace std;

int main(){

	int numero1, numero2, suma = 0, resta = 0, multiplicacion = 0, division = 0;
	
	cout << "Ingresa el primer número" << endl;
	cin >> numero1;
	
	cout << "Ingresa el segundo número" << endl;
	cin >> numero2;
	
	suma = numero1 + numero2;
	resta = numero1 - numero2;
	multiplicacion = numero1 * numero2;
	division = numero1 / numero2;
	
	cout << "El resultado de sumar " << numero1 << "+" << numero2 <<" es= " << suma << endl;
	cout << "El resultado de restar " << numero1 << "-" << numero2 <<" es= " << resta << endl;
	cout << "El resultado de multiplicar " << numero1 << "*" << numero2 <<" es= " << multiplicacion << endl;
	cout << "El resultado de dividir " << numero1 << "/" << numero2 <<" es= " << division << endl;	
	
	return 0;
}
