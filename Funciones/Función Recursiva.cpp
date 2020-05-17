//Recursividad

#include <iostream>
#include <conio.h>

using namespace std;
int num;
void pedirDatos(){
	cout << "Ingresa un numero: " << endl;
	cin >> num;
}

int factorial(int n){
	if(n == 0){//Caso base
		n = 1;
	}
	else{//Caso general
		n *= factorial(n-1);
	}
	return n;
}

int main(){
	pedirDatos();
	cout << "El factorial es: " << factorial(num);
	
	getch();
	return 0;
}
