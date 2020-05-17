#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

char fraseUsu[50];
void pedirFrase(){
	
	cout << "Ingresa tu frase o palabra: " << endl;
	cin.getline(fraseUsu, 50, '\n');
	
	strupr(fraseUsu);	//pasando a mayúsculas	
}

void contandoVocales(char *frase){
	int contA = 0, contE = 0, contI = 0, contO = 0, contU = 0;	

	while(*frase){	//mientras frase no sea nulo '\0'
		switch(*frase){
			case 'A': contA++;
				break;
			case 'E': contE++;
				break;
			case 'I': contI++;
				break;
			case 'O': contO++;
				break;
			case 'U': contU++;
			break;
		}
		frase++;
	}
	cout << "El numero de veces de Vocales: " << endl;
	cout << "A --> " << contA << endl;
	cout << "E --> " << contE<< endl;
	cout << "I --> " << contI << endl;
	cout << "O --> " << contO << endl;			
	cout << "U --> " << contU << endl;
}

int main(){
	
	pedirFrase();
	contandoVocales(fraseUsu);
		
	getch();
	return 0;
}
