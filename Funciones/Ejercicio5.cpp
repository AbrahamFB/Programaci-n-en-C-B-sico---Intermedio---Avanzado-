#include <iostream>
#include <conio.h>

using namespace std;

template <class TIPOA>
void despliegue(TIPOA dato);

int main(){
	int datoI = 4;
	float datoF = 543.534;
	double datoD = 6546756.62345;
	char datoC = 'A';
	
	despliegue(datoI);
	despliegue(datoF);
	despliegue(datoD);
	despliegue(datoC);			
	
	getch();
	return 0;
}

template <class TIPOA>
void despliegue(TIPOA dato){
	cout << "El dato es: " << dato << endl;
}
