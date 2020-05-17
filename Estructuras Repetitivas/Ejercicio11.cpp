#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

int main(){
	
	int numero, elevacion = 0, suma = 0;
	
	cout << ".::Calcula el valor de 2'1 + 2'2 + 2'3 + ... + 2'n" << endl;
	
	cout << "Ingresa el valor de n: " << endl;
	cin >> numero;
	
	for(int i = 1; i <= numero; i ++){
			elevacion = pow(2, i);
			
			suma += elevacion;
	}
	
	cout << "El valor es: " << endl;
	cout << suma;
	
	getch();
	return 0;
}
