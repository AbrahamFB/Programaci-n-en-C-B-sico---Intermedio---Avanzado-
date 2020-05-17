#include <iostream>
#include <conio.h>

using namespace std;

void intercambio(float&, float&);
void ordenacionShell(float a[], int);

int main(){
	
	float array[] = {6, 1, 9, 5, 10, 11, 19, 7, 3, 2}; 
	
	ordenacionShell(array, 10);
	
	cout << "Ordenado en Forma Ascendente:" << endl;
	for(int i = 0; i < 10; i++){
		cout << array[i] << " ";
	}
	
	cout << endl;
	
	cout << "Ordenado en Forma Descendente:" << endl;
	for(int i = 9; i >= 0; i--){
		cout << array[i] << " ";
	}	
	
	
	getch();
	return 0;
}

void intercambio(float &s, float &q){
	float aux;
	
	aux = s;
	s = q;
	q = aux;
}
void ordenacionShell(float a[], int n){
	int salto, i, j, k;
	salto = n / 2;
	
	while(salto > 0){
		for(i = salto; i < n; i++){
			j = i - salto;
			while(j >= 0){
				k = j + salto;
				if(a[j] <= a[k]){	//Par de elementos ordenados
					j = -1;   
				}
				else{	//Par de elementos no ordenados
					intercambio(a[j], a[k]);
					j -= salto;
				}
			}
		}
		salto = salto / 2;
	}
}

