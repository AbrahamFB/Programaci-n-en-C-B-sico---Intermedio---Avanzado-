#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	
	char cadNombre[50];
	
	cout << ".::Convertira tu nombre a minusculas si la 1era letra es 'A'::." << endl;
	
	cout << "Ingresa tu nombre en mayusculas" << endl;
	cin.getline(cadNombre, 100, '\n');

	
	if(strncmp(cadNombre, "A", 1) == 0){ //si se le agrega la n entre str y cmp va a comprobar el numero de caracteres
		strlwr(cadNombre);
		cout << cadNombre << endl;
	}
	else{
		cout << "Tu nombre no comienza con 'A'" << endl;
	}
		
	getch();
	return 0;
}
