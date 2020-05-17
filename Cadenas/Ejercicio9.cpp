#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	
	char palabra[50];
	int contA = 0, contE = 0, contI = 0, contO = 0, contU = 0;
	
	cout << "Ingrese una frase a contar vocales:" << endl;
	cin.getline(palabra, 50, '\n');
	
	strlwr(palabra);
	
	for(int i = 0; i < 30; i++){
		switch(palabra[i]){
			case 'a': contA++;
				break;
			case 'e': contE++;
				break;
			case 'i': contI++;
				break;
			case 'o': contO++;
				break;
			case 'u': contU++;
				break;
		}
	}
	
	cout << "El numero de vocales son:" << endl;
	cout << "A-> " << contA << endl;
	cout << "E-> " << contE << endl;
	cout << "I-> " << contI << endl;
	cout << "O-> " << contO << endl;
	cout << "U-> " << contU << endl;
	
	
	getch();
	return 0;
}
