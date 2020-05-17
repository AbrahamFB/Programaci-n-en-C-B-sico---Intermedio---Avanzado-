#include <iostream>
using namespace std;

int main(){
	 
	cout << "Simula un cajero automatico con un saldo inicial de 1000 pesos MXN" << endl;
	
	int saldoInicial = 1000, opcion;
	float saldoActual = 0, aumento, retiro;
	
	cout << "\t Bienvenido a su Cajero Automatico Virtual" << endl;
	
	cout << ".::::Menu::::." << endl;
	
	cout << "1. Ingresar dinero a tu cuenta" << endl;
	cout << "2. Retirar dinero de tu cuenta" << endl;
	cout << "3. Salir" << endl;
	
	cout << "Opcion : " << endl;
	cin >> opcion;
	
	
	switch(opcion){
		case 1: cout << ":::::Apartado de aumento de saldo en cuenta:::::" << endl;
			cout << "Ingresa dinero a aumentar: " << endl;
			cin >> aumento;
			
			saldoActual = saldoInicial + aumento;
			
			cout << "Tu saldo actual es de: $" << saldoActual;
			break;
			
		case 2: cout << ":::::Apartado de retiro de saldo en cuenta:::::" << endl;
			cout << "Ingresa cantidad a retirar: " << endl;	
			cin >> retiro;
			
			if(retiro < saldoInicial){
			
			saldoActual = saldoInicial - retiro;
		
			cout << "Tu saldo actual es de: $" << saldoActual;
			}
			else{
				cout << "No puedes retirar más de saldo Actual" << endl;
			}
			break;
			

		case 3: cout << ".:::Gracias por visitarnos:::.";
			break;
			
		default: cout << "Opcion invalida"<< endl;
			break;
		
	}
	
	return 0;
}
