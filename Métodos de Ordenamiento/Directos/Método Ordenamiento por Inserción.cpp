#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int numero[10];
	int i, pos, aux; 
	
	cout << "Ingresa 10 numero desordenados: " << endl;
	for(i = 0; i < 10; i++){
		cin >> numero[i];
	}
	
	for(i = 0;i < 10; i++){
		pos = i;
		aux = numero[i];
		while((pos > 0) && (numero[pos - 1] > aux)){
			numero[pos] = numero[pos - 1];
			pos--;
		}
		numero[pos] = aux;
	}
	
	cout << "Numeros ordenados:" << endl;
	
	cout << "Ascendentemente" << endl;
	for(i = 0; i < 10; i++){
		cout << numero[i] << endl;
	}
	cout << "Descendentemente" << endl;
	for(i = 9; i >= 0; i--){
		cout << numero[i] << endl;
	}
	
	getch();
	return 0;
}
