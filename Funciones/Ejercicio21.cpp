#include <iostream>
#include <conio.h>

using namespace std;

int potencia(int x, int y){
	int pot;
	
	if(y == 1){//Caso Base
		pot = x;
	}
	else{//Caso general
		pot = x * potencia(x, y-1);
	}
}



int main(){
	int base, exponente;
	
	cout << "Ingrese la base:" << endl;
	cin >> base;
	cout << "Ingrese el exponente:" << endl;
	cin >> exponente;
	cout << "La potencia es: " << potencia(base, exponente) << endl;
	
	getch();
	return 0;
}
