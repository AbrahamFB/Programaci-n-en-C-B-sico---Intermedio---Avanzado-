#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int x, y, elevacion = 1;
	
	cout << "Ingresa el valor de X: " << endl;
	cin >> x;
	
	cout << "Ingresa el valor de Y: " << endl;
	cin >> y;
	
	for(int i = 1; i <= y; i++){
		elevacion *= x;
	}
	
	cout << "El resultado de la elevacion de " << x << " a " << y << " es:  "<< elevacion << endl;
	
	getch();
	return 0;
}	
