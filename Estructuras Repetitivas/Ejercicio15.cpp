#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
	
	int numero, dato, contador = 0;
	
	cout << "Adivina el numero entre 1 y 100" << endl;
	
	
	srand(time(NULL));	//Genera numero aleatorio
	dato = 1 + rand() % (100);	//limite inferior + rand() % (limite superior + 1 - limite inferior)
	
	
	do{
		cout << "Ingresa un numero: " << endl;
		cin >> numero;
		
		if(numero > dato){
			cout << "El numero es mas pequeño" << endl;
		}
		
		if(numero < dato){
			cout << "El numero es mas grande" << endl;
		}
		contador++;
		 
	}while(numero != dato);

	cout << "Encontraste " << dato << " correctamente" << endl;

	cout << "Intentos realizados: " << contador << endl;
	
		system("pause");
	return 0;
}
