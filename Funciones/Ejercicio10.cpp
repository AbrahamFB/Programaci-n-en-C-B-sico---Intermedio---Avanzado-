#include <iostream>
#include <conio.h>

using namespace std;

void calcAnios(int, int&, int&, int&);

int main(){
	int tDias, anio, mes, dia;
	
	cout << "Ingresa el total de dias: " << endl;
	cin >> tDias;
	
	calcAnios(tDias, anio, mes, dia);
	
	cout << "La fecha actual: " << dia + 1 << "/" << mes + 1 << "/" << anio + 2000 << endl;
	
	getch();
	return 0;	
}

void calcAnios(int tDias, int& anio, int& mes, int& dia){
	anio = tDias / 365;
	tDias %= 365;
	mes =  tDias / 30;
	dia = tDias / 30;
}

