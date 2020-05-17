#include <iostream>
#include <conio.h>


using namespace std;

void cambio(int, int&, int&, int&, int&, int&, int&);

int main(){
	
	int valor, cien, cincuenta, veinte, diez, cinco, uno;
	
	cout << "Ingresa la cantidad en dolares: " << endl;
	cin >>valor;
	
	cambio(valor, cien, cincuenta, veinte, diez, cinco, uno);
	
	cout << "Cantidad de billetes a entregar: " << endl;

	cout << "$100.00 -->" << cien << endl;
	cout << "$50.00 -->" << cincuenta << endl;
	cout << "$20.00 -->" << veinte << endl;
	cout << "$10.00 -->" << diez << endl;
	cout << "$5.00 -->" << cinco << endl;
	cout << "$1.00 -->" << uno << endl;
	
	
	getch();
	return 0;
}

void cambio(int valor, int& cien, int& cincuenta, int& veinte, int& diez, int& cinco, int& uno){
	cien = valor / 100;
	valor %= 100;
	cincuenta = valor / 50;
	valor %= 50;
	veinte = valor / 20;
	valor %= 20;
	diez = valor / 10;
	valor %= 10;
	cinco = valor / 5;
	uno %= 5;
}
