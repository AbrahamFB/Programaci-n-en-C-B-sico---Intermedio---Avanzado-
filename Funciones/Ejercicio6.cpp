#include <iostream>
#include <conio.h>

using namespace std;

template <class TIPOA>
TIPOA maximo(TIPOA x, TIPOA y, TIPOA z);



int main(){
	float x = 5.1, y = 432.54, z = 325.642565;

	cout << "El mayor es: " << maximo(x, y, z);
	getch();
	return 0;
}

template <class TIPOA>
TIPOA maximo(TIPOA x, TIPOA y, TIPOA z){
	TIPOA mayor;
	if((x >= y) && (x >= z)){
		mayor = x;
	}
		else{	
			if((y >= x) && (y >= z)){
			mayor = y;
		}
		else{
			mayor = z;
		}
	}
	return mayor;
}
