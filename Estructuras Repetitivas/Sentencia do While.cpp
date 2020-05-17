/*Sentencias do while
	
	do{
		conjunto de instrucciones;
	}
	while(expresion logica);
	
	El conjunto de instrucciones de do, se va a ejecutar si o si una vez
*/
#include <iostream>
#include <stdlib.h>

using namespace std;


int main(){
	int numero = 1;
	
	do{
		cout << numero << endl;
		numero++;
	}while(numero <= 10);
	
	system("pause");
	return 0;
}
