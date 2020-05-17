#include <iostream>
using namespace std;

int main() {

	float x, y, aux = 0;

	cout << "Ingresa el valor de X: " << endl; cin >> x;
	cout << "Ingresa el valor de Y: " << endl; cin >> y;

	aux = x;
	x = y;
	y = aux;

	cout << "Los valores intercambiados quedan así: " << endl << "X: " << x << endl << "Y: " << y;

	return 0;
}
