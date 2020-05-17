#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int numeros[10], *dirNum;
	
	for(int i = 0; i < 10; i++){
		cout << "Ingresa un numero: [" << i << "]: " << endl;
		cin >> numeros[i];
	}
	
	dirNum = numeros; //Posición de memoria comienza numeros
	for(int i = 0; i < 10; i++){
		if(*dirNum%2 == 0){
			cout << "El numero: " << *dirNum << " Es par" << endl;
			cout << "Posicion: " << dirNum << endl;
		}
		dirNum++;
	}	
	
	getch();
	return 0;
}
