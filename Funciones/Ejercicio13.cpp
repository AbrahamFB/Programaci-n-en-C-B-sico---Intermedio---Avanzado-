#include <iostream>
#include <conio.h>

using namespace std;

int vec[100], tam; 
void pedirDatos(){
	cout << "Ingresa el tamaño del vector:" << endl;
	cin >> tam;
	
	for(int i = 0; i < tam; i++){
		cout << "Ingresa un numero: " << endl;
		cin >> vec[i];		
	}
}
void cambiarSigno(int vec[], int tam){
	for(int i = 0; i < tam; i++){
		vec[i] *= -1;
	}
}
void mostrarVec(int vec[], int tam){
	cout << ".::Numeros con signo invertido::." << endl;
	for(int i = 0; i < tam; i++){
		cout << vec[i] << " ";
	}
}

int main(){
	
	pedirDatos();
	cambiarSigno(vec, tam);
	mostrarVec(vec, tam);
	
	getch();
	return 0;
}
