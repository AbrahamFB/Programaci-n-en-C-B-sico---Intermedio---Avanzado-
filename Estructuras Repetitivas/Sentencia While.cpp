/*Sentencia while

	while(expresion logica){
		conjunto de instrucciones;
	}
*/#include <iostream>
#include <conio.h>
using namespace std;


int main(){
	int numero = 1;
	
	cout << "Programa que escribe los numero del 1 al 10" << endl;
	
	while(numero <= 10){
		cout << numero << endl;
		numero++;
	}
	
	getch();
	return 0;
}
