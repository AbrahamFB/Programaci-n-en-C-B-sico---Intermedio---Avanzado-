#include <iostream>
#include <conio.h>

using namespace std;

void intercambiar(int&, int&);


int main(){
	int num1 = 15, num2	= 32;
	
	cout << "El valor de num1 es: " << num1 << endl;
	cout << "El valor de num2 es: " << num2 << endl;
	
	intercambiar(num1, num2);
	cout << "\n";
	cout << "El nuevo valor de num1 es: " << num1 << endl;
	cout << "El nuevo valor de num2 es: " << num2 << endl;
	
	getch();
	return 0;
}

void intercambiar(int& num1, int& num2){
	int aux;
	
	aux = num1;
	num1 = num2;
	num2 = aux;	
}
