/*Programa que calula la hipotenusa mediante sus catetos*/

#include <iostream>
#include <math.h>	//Libería matemática y algebráica
using namespace std;

int main(){
	
	float cat1, cat2, hipotenusa = 0;
	
	cout << "Ingresa el Cateto 1: " << endl; cin >> cat1;
	cout << "Ingresa el Cateto 2: " << endl; cin >> cat2;
	
	hipotenusa = sqrt(pow(cat1, 2) + pow(cat2, 2));	//sqrt = raiz cuadrada, pow = elevar
	
	cout << "Hipotenusa: " << endl;
	cout << hipotenusa << endl;
	
	return 0;
}
