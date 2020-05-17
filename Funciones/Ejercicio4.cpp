#include <iostream>
#include <conio.h>

using namespace std;

void solocitarNum();
void partFracc(float n);
float num;


int main(){
	
	cout << "Parte Fraccionaria de un Numero" << endl;
	
	solocitarNum();
	partFracc(num);
	
	getch();
	return 0;
}


void solocitarNum(){
	cout << "Ingresa un numero: " << endl;
	cin >> num;
}
void partFracc(float n){
	int en = n;
	float resul = n - en;
	cout << "Es: " << resul << endl;
}
