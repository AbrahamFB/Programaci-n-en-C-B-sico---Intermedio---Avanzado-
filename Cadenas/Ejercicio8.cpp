#include <iostream>
#include <conio.h>	
#include <stdlib.h>

using namespace std;

int main(){
	
	char cadI[20];
	int numeroI;
	char cadF[20];
	float numeroF, suma = 0;
	
	cout << "Ingresa un numero Entero:" << endl;
	cin.getline(cadI, 20, '\n');
	
	cout << "Ingresa un numero Flotante:" << endl;
	cin.getline(cadF, 20, '\n');	
	
	numeroI = atoi(cadI);
	numeroF = atof(cadF);
	
	suma = numeroI + numeroF;
	
	cout << "La suma de " << numeroI << "+" << numeroF << " es: " << suma << endl;

	getch();
	return 0;
}
