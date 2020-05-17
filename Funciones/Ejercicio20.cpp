#include <iostream>
#include <conio.h>

using namespace std;

int fibonacci(int n){
	if(n < 2){
		return n;
	}
	else{
		return fibonacci(n-1)+ fibonacci(n-2);
	}
}


int main(){
	int numElementos;
	
	do{
		cout << "Ingresa el numero de elementos:" << endl;
		cin >> numElementos;
	}while(numElementos <= 0);
	
	cout << ".::Serie de Fibonacci::." << endl;
	for(int i = 0; i < numElementos; i++){
		cout << fibonacci(i) << ", ";	
	}
	
	getch();
	return 0;
}
