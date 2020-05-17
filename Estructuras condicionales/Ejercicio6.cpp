#include <iostream>
using namespace std;

int main(){
	char letra;
	
	cout << "Programa que identifica si la letra ingresada es vocal minuscula o mayusucula y si no es una vocal" << endl << endl;
		
	cout << "Ingresa la letra: " << letra;
	cin >> letra;
	
	switch(letra){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':	cout << "La vocal es minuscula" << endl;
			break;
		
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':	cout << "La vocal es mayuscula" << endl;
			break;
		
		default: cout << "La letra no es vocal" << endl;
	
	}
	
	return 0;
}
