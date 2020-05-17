#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	
	char cadUsuario[100];
	char cadInvertida[100];
	
	cout << "Ingresa una frase o palabra" << endl;
	cin.getline(cadUsuario, 100, '\n');
	
	strcpy(cadInvertida, cadUsuario); //Copia a cadInvertida
	strrev(cadInvertida);			  //Invierte cadInvertida
	
	if(strcmp(cadUsuario, cadInvertida) == 0){
		cout << "La cadena es Polindroma" << endl;
	}
	else{
		cout << "La cadena no es Polindroma" << endl;
	}

		
	getch();
	return 0;
}
