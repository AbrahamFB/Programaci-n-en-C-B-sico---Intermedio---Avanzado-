//Busqueda Secuencial
#include <iostream>
#include <conio.h>

using namespace std;


int main(){
	int array[] = {3, 4, 2, 1, 5};
	int i = 0, dato = 5;
	char band = 'F';
	
	//Busqueda Secuencial
	
	while((band == 'F') && (i < 5)){
		if(array[i] == dato){
			band = 'V';
		}
		i++;
	}
	if(band == 'F'){
		cout << "El numero a busacr no exisre en el array" << endl;
	}
	else if(band == 'V'){
		cout << "El numero a sido encontrado en la poscion: " << i-1 << endl;
	}
	
	getch();
	return 0;
}
