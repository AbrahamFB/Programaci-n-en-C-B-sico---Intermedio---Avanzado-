//Transformar una Cadena a Numero - Funcion atoi(); y atof();

#include <iostream>
#include <conio.h>	
#include <stdlib.h>

using namespace std;

int main(){
	
	char cadI[] = "123";
	int numeroI;
	char cadF[] = "123.456";
	float numeroF;
	
	numeroI = atoi(cadI);
	cout << "atoi: " << cadI << endl;
	
	numeroF = atof(cadF);
	cout << "atof: " << cadF;

	getch();
	return 0;
}
