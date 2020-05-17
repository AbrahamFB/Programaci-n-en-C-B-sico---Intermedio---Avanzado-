/*Sentencia if
	if(conficion){
		Instrucciones 1;
	}
	else{
		Instrucciones 2;
	}
	*/

#include <iostream>
using namespace std;

int main(){

	int numero, dato = 5;

	cout << "Ingresa un numero: " << endl; cin >> numero;

	if( numero ==  dato ){
		cout << "El n�mero es igual a 5" << endl;
	}
	else{
		cout << "El n�mero no es igual a 5" << endl;
	}

	cout << "Ingresa un numero: " << endl; cin >> numero;

	if( numero !=  dato ){
		cout << "El n�mero es distinto a 5" << endl;
	}
	else{
		cout << "El n�mero es a 5" << endl;
	}

	return 0;
}
