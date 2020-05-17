#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	
	char palabra[100];
	
	cout << "Pide una palabra, si tiene mas de 10 caracteres no imprime" << endl;
	cout << "en caso contrario imprimira la palabra" << endl;
	
	cout << "Ingresa un frase: " << endl;
	cin.getline(palabra, 100, '\n');
		
	if(strlen(palabra) <= 10){
		cout << "La palabra no contiene mas de 10 caracteres: " << endl;
		cout << palabra << endl;
	}
	else{
		cout << "La palabra contiene mas de 10 caracteres" << endl;
	}
	
	getch();
	return 0;
}
