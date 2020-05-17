#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;


int main(){
	
	int suma = 0, cuadrado = 0; 
	
	cout << "Calcula y muestra la suma de los cuadrados de los primeros 1o numeros enteros mayores a 0" << endl;
	
	for(int i;  i <= 10; i++){
		cuadrado = pow(i, 2);
		suma += cuadrado;	// suma = suma + cuadrado;		
	}
	
	cout << "La suma total es: " << suma << endl;
	
	getch();
	return 0;
}
