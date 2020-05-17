#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	
	char cadena1[100];
	char cadena2[100];
	
	cout << "Ingresa la primera cadena de caracteres: " << endl;
	cin.getline(cadena1, 100, '\n');
	
	cout << "Ingresa la segunda cadena de caracteres: " << endl;
	cin.getline(cadena2, 100, '\n');	
	
	
	if(strcmp(cadena1, cadena2) == 0){
		cout << "Las palabras son iguales" << endl;
	}
	else if(strcmp(cadena1, cadena2) > 0){
			cout << "La cadena mayor alfabeticamente es: " << endl;
			cout << cadena1;
			}
			else{
				cout << "La cadena mayor alfabeticamente es: " << endl;
				cout << cadena2; 
			}

	
	getch();
	return 0;
}
