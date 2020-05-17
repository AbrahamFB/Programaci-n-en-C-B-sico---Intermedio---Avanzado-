#include <iostream>
#include <conio.h>

using namespace std;

struct Fecha{
	int dia, mes, anio;
}f1, f2;

void pedirDatos(){
	cout << "Ingresa la primera fecha" << endl;

	do{
		cout << "Dia:" << endl;
		cin >> f1.dia;
	}while((f1.dia <= 0) || (f1.dia > 31));
	
	do{
		cout << "Mes:" << endl;
		cin >> f1.mes;
	}while((f1.mes <= 0) || (f1.mes > 12));	
	
	do{
		cout << "Anio:" << endl;
		cin >> f1.anio;
	}while((f1.anio <= 1800) || (f1.anio > 2018));	
	
	cout << "Ingresa la segunda fecha" << endl;
	
	do{
		cout << "Dia:" << endl;
		cin >> f2.dia;
	}while((f2.dia <= 0) || (f2.dia > 31));
	
	do{
		cout << "Mes:" << endl;
		cin >> f2.mes;
	}while((f2.mes <= 0) || (f2.mes > 12));	
	
	do{
		cout << "Anio:" << endl;
		cin >> f1.anio;
	}while((f2.anio <= 1800) || (f2.anio > 2018));

}

Fecha mayor(Fecha f1, Fecha f2){
	Fecha mayorFecha;
	if((f1.anio >= f2.anio) && (f1.mes >= f2.mes) &&(f1.dia >= f2.dia)){
		mayorFecha = f1;
	}
	else{
		mayorFecha = f2;
	}
	return mayorFecha;
}

void muestra(Fecha x){
	cout << "La fecha mas reciente es: " << x.dia << "-" << x.mes << "-" << x.anio << endl;
}

int main(){
	
	pedirDatos();
	
	Fecha x = mayor(f1, f2);
	
	muestra(x);
	
	getch();
	return 0;
}
