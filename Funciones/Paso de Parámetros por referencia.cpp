//Paso de Parámetros por referencia
//El & significa la posición donde se alamacena dicha variable

#include <iostream>
#include <conio.h>

using namespace std;

void valNuevo(int&, int&);

int main(){
	
	int num1, num2;
	
	cout << "Ingresa 2 numero" << endl;
	cin >> num1 >> num2;
	
	valNuevo(num1, num2);

	cout << "El nuevo valor del numero 1 es: " << num1 << endl;
	cout << "El nuevo valor del numero 2 es: " << num2 << endl;
	getch();
	return 0;
}

void valNuevo(int& xnum, int& ynum){
	cout << "El valor del numero 1 es: " << xnum << endl;
	cout << "El valor del numero 2 es: " << ynum << endl;
	
	xnum = 90;
	ynum = 28;
	
}
