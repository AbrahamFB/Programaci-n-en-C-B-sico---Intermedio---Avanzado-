//Pasar una palabra a May�sculas - Funci�n strupr()

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
