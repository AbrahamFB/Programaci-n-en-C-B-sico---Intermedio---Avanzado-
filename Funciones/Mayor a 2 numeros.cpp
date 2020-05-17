/*Definición de Funciones

	tipo nombre(tipo var1, tipo var2, tipo varn){
		conjunto de instrucciones;
	}

*/

#include <iostream>
#include <conio.h>

using namespace std;

	//Prototipo de Función
int encontrarMayor(int x, int y);

int main(){
	int n1, n2;
	cout << "Ingresa dos numeros" << endl;
	cin >> n1 >> n2;
	
	//encontrarMayor(n1, n2); //Lo que se va a mandar
		
	cout << "El numero mayor es: " << encontrarMayor(n1, n2) << endl;
	
	getch();
	return 0;
}

//Definición de Función

int encontrarMayor(int x, int y){ //Valores que recibe
	int numMayor;
	if(x > y){
		numMayor = x;
	}
	else{
		numMayor = y;
	}
	return numMayor;
}
