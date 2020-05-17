#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int n, sumaPar = 0, sumaImpar = 0, resultado = 0, par;
	
	cout << ".::Calcula resultado de 1 - 2 + 3 - 4 + ..... n::." << endl;
	
	cout << "Ingresa el valor de n: " << endl;
	cin >> n;
	
	for(int i = 1; i <= n; i++){
		if(i % 2 == 0){
			par = i * -1;
			sumaPar += par;
		}
		else{
			sumaImpar += i;
		}
		
	}
	
	resultado = sumaPar + sumaImpar;
	
	cout << "Resultado:  " << resultado << endl;
	
	
	getch();
	return 0;
}
