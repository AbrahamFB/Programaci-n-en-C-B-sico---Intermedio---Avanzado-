/**/

#include <iostream>
#include <math.h>
using namespace std;

int main(){
	
	float x, y, funcion = 0;
	
	cout << "Ingresa el valor de X: " << endl; cin >> x;
	cout << "Ingresa el valor de Y: " << endl; cin >> y;
	
	funcion = (sqrt(x)) / (pow(y, 2)-1);

	cout << "El resultado de raiz de x / y al cuadrado -1: " << endl;
	cout << funcion;
	
	return 0;
}
