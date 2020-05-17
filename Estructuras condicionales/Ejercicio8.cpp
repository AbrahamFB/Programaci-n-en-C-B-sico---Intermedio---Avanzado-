#include <iostream>
using namespace std;

int main(){
	
	int num1, num2, num3, num4;
	
	cout << "Programa que verifica 3 numeros y checa el cuarto los 3 numeros anteriores para ver si se repitio" << endl;
	
	cout << "Ingresa 3 numeros: " << endl;
	cin >> num1 >> num2 >> num3;
	
	cout << "Ingresa otro numero: " << endl;
	cin >> num4;
	
	if((num1 == num4) || (num2 == num4) || (num3 == num4)){
		cout << "Coincide con algún numero ingresado" << endl;
	}
	
	else{
		cout << "El numero no coincide con ningun numero ingresado" << endl;
	}
	
	return 0;
}
