#include <iostream>
#include <conio.h>

using namespace std;

struct tEmpCicli{
	int horas, minutos, segundos;
	
	
}etapas[100000];

int main(){
	int nEtapas, segTot = 0, minTot = 0, horTot = 0;
	
	cout << "Ingrese el numero de etapas:" << endl;
	cin >> nEtapas;
	
	for(int i = 0; i < nEtapas; i++){

		cout << "Ingrese el tiempo de la etapa ::" << i+1 << "::" << endl;
		cout << "Ingrese el numero de horas:" << endl;
		cin >> etapas[i].horas;
		cout << "Ingrese el numero de minutos:" << endl;
		cin >> etapas[i].minutos;
		cout << "Ingrese el numero de segundos:" << endl;
		cin >> etapas[i].segundos;
	
		horTot += etapas[i].horas;
		minTot += etapas[i].minutos;
		

		if(minTot >= 60){
			minTot -= 60;
			horTot++;
		}
		segTot += etapas[i].segundos;
		if(segTot >= 60){
			segTot -= 60;
			minTot++;
		}
	}
	
	cout << "Datos del jugador" << endl;
	cout << "Numero de etapas: " << nEtapas << endl;
	cout << "Tiempo total: " << horTot << ":" << minTot << ":" << segTot << endl;
	
	getch();
	return 0;
}
