#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int numeros[] = {1, 2, 3, 4, 5};
	int *dirNumeros;
	
	dirNumeros = numeros;//Pasando la direccion de memoria inicial del vector
	
	for(int i = 0; i < 5; i++){
		cout << "Elemento del Vector [" << i << "]" << *dirNumeros++ << endl;//Aumenta 4 bytes
	}
	
	getch();
	return 0;
}
