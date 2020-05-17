#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int numeros[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int multiplicacion =1;
	
	for(int i = 0; i < 9; i++){
		multiplicacion *= numeros[i];
	}	
	
	
	cout << "La multiplicaion es:" << endl;
	cout << multiplicacion;
	
	getch();
	return 0;
}
