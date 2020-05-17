#include <iostream>
using namespace std;

int main(){
	
	int numero;
	
	cout << "Programa que identifica si el numero es positivo o negativo" << endl;
	
	
	cout << "Ingresa un numero: " << endl;
	cin >> numero;
	
	if(numero == 0){
		cout << "El numero es 0" << endl;		
	}
	else if(numero > 0){
		cout << "El numero " << numero << " es positivo" << endl;
	}
	
	else if(numero < 0){
		cout << "El numero " << numero << " es negativo" << endl;
	}
	
	return 0;
}
