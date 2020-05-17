#include <iostream>
using namespace std;

int main(){
	char letra;
	
	cout << "Programa que identifica si la vocal es mayuscula o minuscula" << endl;
	
	cout << "Ingresa la vocal" << endl;
	cin >> letra;
	
	switch(letra){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u': cout << "La vocal es minuscula" << endl;
			break;
		default: cout << "La vocal es mayuscula" << endl;
			break;	
			
	}
	
	return 0;
}
