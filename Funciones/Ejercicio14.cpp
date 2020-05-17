#include <iostream>
#include <conio.h>

using namespace std;

int vec[100], tam;
void pedirDatos(){
	cout << "Ingresa el tama�o del vector:" << endl;
	cin >> tam;

	for(int i = 0; i < tam; i++){
		cout << "Ingresa un numero: " << endl;
		cin >> vec[i];
	}
}

void imprVecImpar(int vec[], int tam){
	int vecImpar[100];
	int j = 0;
	for(int i = 0; i < tam; i++){
		if(vec[i]%2 != 0){
			vecImpar[j] = vec[i];
			j++;
		}
	}
	cout << ".::Numero impares::." << endl;
	for(int i = 0; i < j; i++){
		cout << vecImpar[i] << " ";
	}
}


int main(){

	pedirDatos();
	imprVecImpar(vec, tam);

	getch();
	return 0;
}
