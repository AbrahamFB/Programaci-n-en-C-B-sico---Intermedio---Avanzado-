#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	
	char nombre[] = "Abraham";
	char nombre2[30];
	
	strcpy(nombre2, nombre);
	
	cout << nombre << endl;
	
	getch();
	return 0;
}
