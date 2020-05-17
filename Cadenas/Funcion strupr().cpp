//Pasar una palabra a Mayúsculas - Función strupr()

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	
	char nombre[] = "Abraham";
	
	strupr(nombre);
	
	cout << nombre;
	
	getch();
	return 0;
}
