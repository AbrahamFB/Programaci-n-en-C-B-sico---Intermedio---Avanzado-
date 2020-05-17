#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int n;
	int numeros[100];
	
	cout << "Ingresa el numero de elementos del vector: " << endl;
	cin >> n;
	
	
	for(int i = 0; i < n; i++){
		cout << "Ingresa un numero: " << endl;
		cin >> numeros[i];
	}
	
	cout << "Los numeros invertidos son: " << endl;
	
	for(int i = n-1; i >= 0; i--){
		cout << "Posicion: " << i << "--> " << numeros[i] << endl;
	}
		
	getch();
	return 0;
}
