/*Programa que calcula las soluciones de segundo grado de la forma ax^ + bx + c, teniendo en cuenta que:
(-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a) y (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a)*/

#include <iostream>
#include <math.h>
using namespace std;

int main(){
	
	float a, b, c, resultado1 = 0, resultado2 = 0;
	
	cout << "Ingresa el valor de a: " << endl; cin >> a;
	cout << "Ingresa el valor de b: " << endl; cin >> b;
	cout << "Ingresa el valor de c: " << endl; cin >> c;

	resultado1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
	resultado2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
	
	cout << "El resultado de x1: " << endl;
	cout << resultado1 << endl;
	
	cout << "El resultado de x2: " << endl;
	cout << resultado2 << endl;	
	
	return 0;
}
