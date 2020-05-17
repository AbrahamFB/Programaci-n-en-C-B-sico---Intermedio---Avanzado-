#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int n;
	int numeros[100];
	
	cout << "Ingresa el numero de elementos de tu arregelo:" << endl;
	cin >> n;
	
	
	for(int i = 0; i < n; i++){
		cout << "Ingresa un numero: " << endl;
		cin >> numeros[i];
	}
	
	cout << "Los numeros son: " << endl;
	
	for(int i = 0; i < n; i++){
		cout << i << "--> " << numeros[i] << endl;
	}
		
	getch();
	return 0;
}
