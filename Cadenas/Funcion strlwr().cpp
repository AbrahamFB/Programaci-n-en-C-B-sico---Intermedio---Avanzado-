//Pasar una palabra a May�sculas - Funci�n strlwr()

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
