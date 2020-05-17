/*Expresión matemática en Expresión de C++*/

#include <iostream>
using namespace std;

int main(){
	
	float a = 0, b = 0, operacion = 0;
	
	cout << "Ingresa el valor de a: " << endl; cin >> a;
	cout << "ingresa el valor de b: " << endl; cin >> b;
	
	operacion = (a / b) + 1;
	
	cout << "El resultado de (A/B)+1 es= " << endl;
	cout << operacion << endl;
	
	cout.precision(2);	//Redondear
	cout << "El resultado de (A/B)+1 redondeado (2) es= " << endl;
	cout << operacion << endl;
	
	return 0;
}
