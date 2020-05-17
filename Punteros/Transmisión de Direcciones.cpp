/*	Transmisión de Direcciones

Ejem:
	Intercambiar el valor de 2 variables
*/

#include <iostream>
#include <conio.h>

using namespace std;

void intercambio(float *dirNum1, float *dirNum2){//Recibiendo en el parámetro de tipo puntero
	float aux;
	
	//Intercambio de valores
	aux = *dirNum1;
	*dirNum1 = *dirNum2;
	*dirNum2 = aux;
}


int main(){
	float num1 = 20.4, num2 = 32.32;
	
	cout << "::Valores originales::" << endl;
	cout << "Primer numero: " << num1 << endl;
	cout << "Segundo numero: " << num2 << endl;
	
	intercambio(&num1, &num2);	//Enviando la dirección de memoria donde esta almacenado num1 y num2
	cout << endl;
	cout << "::Valores Intercambiado::" << endl;
	cout << "Primer numero: " << num1 << endl;
	cout << "Segundo numero: " << num2 << endl;
	
	getch();
	return 0;
}
