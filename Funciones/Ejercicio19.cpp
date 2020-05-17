#include <iostream>
#include <conio.h>

using namespace std;

//Funcion Recursiva
int sumar(int n){
	int suma = 0;
	if(n == 1){//Caso base
		suma = 1;
	}
	else{//Caso General
		suma = n + sumar(n-1);
	}
	return suma;
	
}

int main(){
	
	int numElementos;
	
	do{
		cout << "Ingresa el numero de elementos:" << endl;
		cin >> numElementos;
	}while(numElementos <= 0);
	cout << "La suma es: " << sumar(numElementos) << endl;
	
	getch();
	return 0;
}
