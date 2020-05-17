//Compara cadenas - Función srtcmp();

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	
	char palabra1[] = "Abraham";
	char palabra2[] = "Abraham";
	
	char frase1[] = "arbol";
	char frase2[] = "computadora";
	
	
	if(strcmp(palabra1, palabra2) == 0){
		cout << palabra1 <<" Coincide con palabra 2" << endl;
	}
	else{
		cout << palabra1 <<" No coincide con palabra 2" << endl;
	}
	
	if(strcmp(frase1, frase2) < 0){
		cout << frase2 << " esta despues de " << frase1;
	}
	
	getch();
	return 0;
}
