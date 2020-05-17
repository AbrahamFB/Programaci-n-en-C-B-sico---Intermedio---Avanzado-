#include <iostream>
#include <conio.h>


using namespace std;

void tiempo(int, int&, int&, int&);

int main(){
	
	int totalSeg, horas, minutos, segundos;
	
	cout << "Ingresa los segundos totales: " << endl;
	cin >>totalSeg;
	
	tiempo(totalSeg, horas, minutos, segundos);
	
	cout << "Cantidad de billetes a entregar: " << endl;

	cout << "Total de Segundos -->" << totalSeg << endl;
	cout << "Horas -->" << horas << endl;
	cout << "Minutos -->" << minutos << endl;
	cout << "Segundos -->" << segundos << endl;
	
	getch();
	return 0;
}

void tiempo(int totalSeg, int& horas, int& minutos, int& segundos){

	horas = totalSeg / 3600;
	totalSeg %= 3600;
	minutos = totalSeg / 60;
	segundos = totalSeg % 60;
}
