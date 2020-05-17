#include <iostream>
#include <conio.h>

using namespace std;


int main(){
	
	int numero, factorial = 1, suma = 0;
	
	cout << ".::Calcula el valor de la suma de factoriales en n::." << endl;
	
	cout << "Ingresa el numero de n: " << endl;
	cin >> numero;
	
	for(int i = 1; i <= numero; i++){
		factorial *= i;
		
		suma += factorial;
	}
	
	
	cout << "La suma total es de: " << suma	<< endl;
	
	getch();
	return 0;
}
