#include <iostream>
#include <conio.h>

using namespace std;

struct tiempoCiclista{
	int horas, minutos, segundos;
}tCiclista[3], *punteroCiclista = tCiclista;

void pedirDatos(){
	cout << "Ingresa los siguientes valores:" << endl;
	
	for(int i = 0; i < 3; i++){
		cout << "Tiempo etapa " << i+1 << endl;
		cout << "Horas: " << endl;
		cin >> (punteroCiclista + i)->horas;
		cout << "Minutos:" << endl;
		cin >> (punteroCiclista + i)->minutos;
		cout << "Segundos:" << endl;
		cin >> (punteroCiclista + i)->segundos;
	}
}

void calcularTiempo(tiempoCiclista *punteroCiclista){
	int tH = 0, tM = 0, tS = 0;
	for(int i = 0; i < 3; i++){
		tH += (punteroCiclista + i)->horas;
		tM += (punteroCiclista + i)->minutos;
		if(tM >=60){
			tM -= 60;
			tH++;
		}
		tS += (punteroCiclista + i)->segundos;
		if(tS >=60){
			tS -=60;
			tM++;
		}
	}
	cout << "El tiempo total es:" << endl;
	cout << "Horas: " << tH << endl;
	cout << "Minutos: " << tM << endl;
	cout << "Segundos: " << tS << endl;
}

int main(){
	pedirDatos();
	calcularTiempo(punteroCiclista);
	
	getch();
	return 0;
}
