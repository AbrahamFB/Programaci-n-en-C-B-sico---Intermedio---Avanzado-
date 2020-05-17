#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int numero, conteo = 0;
	
	do{
		cout << "Ingresa un numero: " << endl;
		cin >> numero;
		if(numero > 0){
			conteo++;
	}
	}while(numero != 0);
	
	cout << "El numero de valores mayor a 0 son: " << conteo << endl;
	
	getch();
	return 0;
}
