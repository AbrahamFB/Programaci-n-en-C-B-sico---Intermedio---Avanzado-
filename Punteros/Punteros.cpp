/*Punteros - Declaraci�n de Punteros

&n = La direcci�n de n
*n = La variable cuya direcci�n esta alamacenada en n

*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int num = 20, *dirNum;
	
	dirNum = &num;
	
	cout << "Numero: " << *dirNum << endl;
	cout << "Direcci�n de memoria: " << dirNum << endl;
	getch();
	return 0;
}
