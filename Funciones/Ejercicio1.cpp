#include <iostream>
#include <conio.h>

using namespace std;

void solicitarNum();
void mult(float x, float y);
float num1, num2;

int main(){
	cout << "Multiplicaicion de 2 numeros" << endl;
	
	solicitarNum();
	mult(num1, num2);
	
	getch();
	return 0;
}
void solicitarNum(){
	cout << "Ingresa dos numeros: " << endl;
	cin >> num1 >> num2;
}
void mult(float x, float y){
	float multi = x * y;
	cout << "El resultado de multiplicar " << x << " * " << y << " es: " << multi << endl;
}
