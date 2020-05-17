#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	
	char cadUsua1[50];
	char cadUsua2[50];
	
	cout << "Ingresa frase 1" << endl;
	cin.getline(cadUsua1, 50, '\n');
		
	cout << "Ingresa frase 2" << endl;
	cin.getline(cadUsua2, 50, '\n');
	
	strupr(cadUsua1);
	strupr(cadUsua2);
	
	cout << "Frase 1" << endl << cadUsua1 << endl;
	cout << "Frase 2" << endl << cadUsua2 << endl;
	
	if(strcmp(cadUsua1, cadUsua2) == 0){
		cout << "Ambas frases son iguales" << endl;
	}
	else{
		cout << "Ambas frases no son iguales" << endl;
	}
	
	getch();
	return 0;
}
