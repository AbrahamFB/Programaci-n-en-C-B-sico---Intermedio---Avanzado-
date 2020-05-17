#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int n, i, j, aux = 0;	
	int num[n];
	
	cout << "Ingresa el numero de elementos: " << endl;
	cin >> n;
	
	for(i = 0 ; i < n; i++){
		cout << "Ingresa [" << i << "]: " << endl;
		cin >> num[i];
	}
	
	cout << "Los numeros ingresados son: " << endl;
	
	for(i = 0 ; i < n; i++){
		cout << num[i] << " ";
	}
	
	//-------  creando el oridenamiento usando el  metodo burbuja ------
	
	for(i = 0; i < n; i++){
		for(j = 0; j < (n - 1); j++){ //Aqui hacemos hasta una vuelta menos
			if(num[j] > num[j + 1]){
				aux = num[j];
				num[j] = num[j + 1];
				num[j + 1] = aux;		
			}
		}
	}
	
	//------ imprimir de forma ascendente de menor a mayor-----------
	
	cout<<"\n\nArreglo ordenado ascendentemente: ";
	for(i=0 ; i < n; i++){
		cout<<num[i]<<" ";
	}
	
	//------ imprimir de forma descendente de menor a mayor-----------
	
	cout<<"\n\nArreglo ordenado descendente: ";
	for(i = (n - 1); i >= 0; i--){ //Y para imprimir descendente la ultima posición del arreglo es (n-1)
		cout << num[i] << " ";
	}
	
	getch();
	return 0;
}
