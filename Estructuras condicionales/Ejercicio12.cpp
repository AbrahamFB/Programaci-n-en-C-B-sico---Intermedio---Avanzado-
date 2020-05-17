#include <iostream>
#include <math.h>
using namespace std;


int main(){
	int numero, opcion, cubo;
	
	cout << "\t .::Menu::." << endl;
	
	cout << "1. Cubo de un numero" << endl;
	cout << "2. Numero Par o Impar" << endl;
	cout << "3. Salir" << endl;
	
	cout << "Opcion: " << endl;
	cin >> opcion;
	
	switch(opcion){
		case 1: cout << "__--Cubo de un numero--__" << endl;
		cout << "Ingresa un numero: " << endl;
		cin >> numero;
		
		cubo = pow(numero, 3);
		
		cout << "El cubo de " << numero << " es " << cubo;
		break;
			
			
		case 2: cout << "__--Numero Par o Impar--__" << endl;
		cout << "Ingresa un numero: " << endl;
		cin >> numero;
		
		if(numero%2 == 0){
			cout << "El numero es Par" << endl;
		}
		else{
			cout << "El numero es Impar" << endl;
		}
					
		break;		
		
		case 3: cout << "__--Gracias por usar el código--__" << endl;
		break;
		
		default: cout << "Opcion invalida" << endl;		
	}
	
	
	return 0;
}
