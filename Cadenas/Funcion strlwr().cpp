//Pasar una palabra a Mayúsculas - Función strlwr()

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	
	char nombre[] = "ABRAHAM";
	
	strlwr(nombre);
	
	cout << nombre;
	
	getch();
	return 0;
}
