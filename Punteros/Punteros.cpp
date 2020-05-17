/*Punteros - Declaración de Punteros

&n = La dirección de n
*n = La variable cuya dirección esta alamacenada en n

*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int num = 20, *dirNum;
	
	dirNum = &num;
	
	cout << "Numero: " << *dirNum << endl;
	cout << "Dirección de memoria: " << dirNum << endl;
	getch();
	return 0;
}
