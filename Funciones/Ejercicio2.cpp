#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

void solicitarNum();
void alCuadrado(float n);
float x;

int main(){
	
	cout << ".::El cuadrado de un numero::." << endl;
	
	solicitarNum();
	alCuadrado(x);
	
	getch();
	return 0;
}


void solicitarNum(){
	cout << "Ingresa un numero: " << endl;
	cin >> x;
}
void alCuadrado(float n){
	n = pow(n, 2);
	cout << "El cuadrado es: " << n;
}
