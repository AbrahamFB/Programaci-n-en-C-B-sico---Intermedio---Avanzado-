#include <iostream>
#include <conio.h>

using namespace std;


int main(){
	int numero;
	
	cout << "Tabla de multiplicacion" << endl;
	
	do{
		cout << "Ingresa un numero del 1 al 20" << endl;
		cin >> numero;
	}while((numero < 1) || (numero > 20));
	
	cout << "Tabla de multiplicar de " << numero << " hasta el 10" << endl;
	for(int factor; factor <= 10; factor++){
		cout << numero << " * " << factor << " = " << numero * factor << endl;
	}	
	
	getch();
	return 0;
}
