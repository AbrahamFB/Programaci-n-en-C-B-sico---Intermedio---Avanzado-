#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int numero[5] = {1, 3, 5, 7, 16};
	int suma = 0, mayor = 0;
	for(int i; i < 5; i++){
		suma += numero[i];
		
		if(numero[i] > mayor){
			mayor = numero[i];
		}
		
	}
	
	cout << "Los numeros son: " << endl;
	
	for(int i = 0; i < 5; i++){
		cout << numero[i] << " "; 
	}
	
	cout << endl;
	
	if(mayor  == suma - mayor){
		cout << "El numero " << mayor << " equivale a la suma de los demas" << endl;
	}
	else{
		cout << "Ningun numero equivale a la suma de los demas" << endl;
	}
	
	getch();
	return 0;
}
