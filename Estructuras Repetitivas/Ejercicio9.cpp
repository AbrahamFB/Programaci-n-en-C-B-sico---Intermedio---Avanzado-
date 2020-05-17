#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int n, factorial = 1;

	cout << ".:::Factotial de un numero:::." << endl;
	cout << "Ingresa el numero: " << endl;
	cin >> n;

	for(int i = 1; i <= n; i++){
		factorial *= i;

	}

	cout << "El fatorial de " << n << " es: " << endl;
	cout << factorial << endl;

	getch();
	return 0;
}
