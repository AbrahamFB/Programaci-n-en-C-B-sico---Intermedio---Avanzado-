#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int n, numero[100], mayor = 0;

	cout << "Ingresa el numero de elementos del vector: " << endl;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cout << "Ingresa un numero: " << endl;
		cin >> numero[i];
			mayor = numero[i];
			for(int i = 1; i < n; i++){
				if(numero[i] > mayor){
					mayor = numero[i];
				}	
			}	
		}

	cout << "El numero mas grande del vector es: " << endl;
	cout << mayor << endl;

	getch();
	return 0;
}
