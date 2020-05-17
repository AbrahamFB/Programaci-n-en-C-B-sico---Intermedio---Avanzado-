#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	float temperatura, alta = 0, baja = 9999, promedio = 0, sumaTotal = 0, media = 0;
	
	cout << "Programa que toma cada 4 horas la temperatura exterior, durante 24 hrs." << endl;
	cout << "Calcula la media, la mas alta y baja temperatura." << endl;
	
	for(int hora;hora < 24; hora += 4){
		cout << "Ingresa la temperatura de la hora " << hora << endl;
		cin >> temperatura;
		
		sumaTotal += temperatura;
		
		if(temperatura > alta){
			alta = temperatura;
		}
		if(temperatura < baja){
			baja = temperatura;
		}

	}
			
	media = sumaTotal / 6;
	
	cout << endl;
	cout << "La temperatura media es: " << endl << media << endl;
	cout << "La temperatura mas alta fue: " << endl << alta << endl;
	cout << "La temperatura mas baja fue: " << endl << baja << endl;
	
	getch();
	return 0;
	
}
