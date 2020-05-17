#include <iostream>
#include <conio.h>

using namespace std;

int vec[100], tam;
void pedirDatos(){
	cout << "Ingresa el numero de elementos del vector:" << endl;
	cin >> tam;
	
	for(int i = 0; i < tam; i++){
		cout << i+1 << ". Ingresa un numero:" << endl;
		cin >> vec[i];
	}
}

void verificarOrden(int vec[], int tam){
	char band = 'F';
	int i = 0;
	
	while((band == 'F') && (i < tam-1)){
		if(vec[i] > vec[i+1]){
			band = 'V';
		}
		i++;
	}
	
	if(band == 'F'){
		cout << "El arreglo esta ordenado ascendentemente" << endl;
	}
	else{
		cout << "El arreglo no esta ordenado ascendentemente" << endl;
	}
}

int main(){
	pedirDatos();
	verificarOrden(vec, tam);
	
	
	getch();
	return 0;
}
