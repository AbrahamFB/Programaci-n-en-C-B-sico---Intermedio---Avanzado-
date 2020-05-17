#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

void solicitarNum();
void funPot(int x, int y);
int num, potencia;

int main(){

	cout << ".::Programa de exponentes::." << endl;
	
	solicitarNum();
	funPot(num, potencia);

	getch();
	return 0;	
}


void solicitarNum(){
	cout << "Ingresa un numero: " << endl;
	cin >> num;
	
	cout << "Ingresa su exponente de elevacion: " << endl;
	cin >> potencia;
}
void funPot(int x, int y){
	long resultado;
	resultado = pow(x, y);
	cout << "El resultado es: " << resultado << endl;
}
