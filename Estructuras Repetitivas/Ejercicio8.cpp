#include <iostream>
#include <conio.h>

using namespace std;


int main(){
	
	int n, suma = 0;
	
	cout << "Calcula 1 + 3 +...... + 2n-1" << endl << endl;
	
	cout << "Ingresa el numero de elementos: " << endl;
	cin >> n;
	
	for(int i = 1; i <= 2*n-1; i+=2){
		suma += i;
	}
	
	cout << "El resultado es: " << suma << endl;
	
	getch();
	return 0;
}
