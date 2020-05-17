#include <iostream>
#include <conio.h>

using namespace std;

int main(){

	int n, suma = 0;
	
	cout << "Calcula la suma de 1 + 2 + .... + n elementos" << endl << endl;
	
	cout << "Ingresa el numero de elementos: " << endl;
	cin >> n;	
	
	for(int i = 1; i <= n; i++){

		suma += i;
	}

	cout << "La suma total es: " << suma << endl;

	getch();	
	return 0;
}
