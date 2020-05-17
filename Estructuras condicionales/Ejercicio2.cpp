#include <iostream>
using namespace std;

int main(){
	int num1, num2, num3;
	
	
	cout << "Ingresa 3 numeros: " << endl;
	cin >> num1 >> num2 >> num3;
	
	if((num1 > num2) && (num1 > num3)){
		cout << "El mayor es: " << num1 << endl;
	}
	
	else if((num2 > num1) && (num2 > num3)){
		cout << "El mayor es: " << num2 << endl;
	}
	
	else{
		cout << "El mayor es: " << num3 << endl;		
	}
	
	return 0;
}
