#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int num, *dirNum;
	
	cout << "Ingresa un numero:" << endl;
	cin >> num;
	
	dirNum = &num;	//Guardando la posici�n de memoria
	
	if(*dirNum%2 == 0){//Va a tomar lo que esta dentro de esa direcci�n	||un puntero antes de una variable, se�ala lo que esta dentro de la direccion de memoria
		cout << "El numero: " << *dirNum << " Es par" << endl;
		cout << "Su posicion es:" << dirNum << endl;
	}
	else{
		cout << "El numero: " << *dirNum << " No es par" << endl;
		cout << "Su posicion es:" << dirNum << endl;
	}
	
	getch();
	return 0;
}
