#include <iostream>
#include <conio.h>

using namespace std;

//Prototipo de Función

template <class TIPOA>
void mostrarAbsoluto(TIPOA numero);


int main(){
	int numI = 6;
	float numF = 45.356;
	double numD = 763423.346;
 	
	mostrarAbsoluto(numI);
 	mostrarAbsoluto(numF);
 	mostrarAbsoluto(numD);
 	
	getch();
	return 0;
}

template <class TIPOA>	//La funcion que esté debajo usará el template
void mostrarAbsoluto(TIPOA numero){
	if(numero < 0){
		numero *= -1;
	}
	cout << "El absoluto es: " << numero << endl;
}

