#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int numero, suma = 0;
	
	while(((numero < 20) || (numero > 30)) && (numero != 0)){
		cout << "Ingresa un numero: " << endl;
		cin >> numero;
		
		if( (numero > 0) && ((numero < 20) || (numero > 30))){
		suma += numero;
		}
	} 
	
	
	
	cout << "La suma de los enteros mayores a 0: y fuera de [20-30]: " << endl;
	cout << suma << endl;
	getch();
	return 0;
}
