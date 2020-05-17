#include <iostream>
#include <conio.h>

using namespace std;

struct complejo{
	float real, imaginaria;
	
}z1, z2;

void pedirDatos(){
	cout << "Ingresa los datos para el primer numero complejo" << endl;
	cout << "Parte Real: " << endl;
	cin >> z1.real;
	cout << "Parte Imaginaria: " << endl;
	cin >> z1.imaginaria;
	
	cout << "Ingresa los datos para el segundo numero complejo" << endl;
	cout << "Parte Real: " << endl;
	cin >> z2.real;
	cout << "Parte Imaginaria: " << endl;	
	cin >> z2.imaginaria;	
}

complejo suma(complejo z1, complejo z2){//Tipo estructura "complejo"
	z1.real += z2.real;
	z1.imaginaria += z2.imaginaria;
	return z1;
}

void muestra(complejo x){
	cout << "Resultado de la suma es: " << x.real << ", " << x.imaginaria << endl;
}

int main(){
	pedirDatos();
	
	complejo x = suma(z1, z2);
	muestra(x);
	
	
	getch();
	return 0;
}
