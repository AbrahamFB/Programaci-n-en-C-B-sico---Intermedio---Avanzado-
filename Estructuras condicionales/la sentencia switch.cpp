#include <iostream>
using namespace std;


int main(){
	int numero;

	cout << "Ingresa un numero entre 1 y 5: " << endl;
	cin >> numero;

	switch(numero){
		case 1:
			cout << "El numero es 1";
			break;
		case 2:
			cout << "El numero es 2";
			break;
		case 3:
			cout << "El numero es 3";
			break;
		case 4:
			cout << "El numero es 4";
			break;
		case 5:
			cout << "El numero es 5";
			break;

		default:
			cout << "El numero que ingresaste no esta entre 1 y 5";
			break;

	}

}
