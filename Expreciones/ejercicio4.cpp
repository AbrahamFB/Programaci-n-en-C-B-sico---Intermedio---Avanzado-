/*Expresión matemática en Expresión de C++*/

#include <iostream>
using namespace std;

int main(){
	
	float a = 0, b = 0, c = 0, d= 0, operacion = 0;
	
	cout << "Ingresa el valor de a: " << endl; cin >> a;
	cout << "ingresa el valor de b: " << endl; cin >> b;
	cout << "Ingresa el valor de c: " << endl; cin >> c;
	cout << "ingresa el valor de d: " << endl; cin >> d;
	
	operacion = (a + (b / (c - d)));
	
	cout << "El resultado de (a + (b / (c - d))) es= " << endl;
	cout << operacion << endl;
	
	cout.precision(2);	//Redondear
	cout << "El resultado de (a + (b / (c - d))) redondeado (2) es= " << endl;
	cout << operacion << endl;
	
	return 0;
}
