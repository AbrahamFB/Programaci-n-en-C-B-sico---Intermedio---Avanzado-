#include <iostream>
using namespace std;

int main(){
	
	int num;
	
	cout << "Programa que identifica si un numero es par o impar" << endl;
	
	cout << "Ingresa un numero: " << endl;
	cin >> num;
	
	if(num == 0){
		cout << "El numero es 0" << endl;
	}
	
	else if(num % 2 == 0){
		cout << "El numero es par" << endl;
	}
	
	else if(num % 2 != 0){
		cout << "El numero es impar" << endl;
	}
	
	return 0;
}
