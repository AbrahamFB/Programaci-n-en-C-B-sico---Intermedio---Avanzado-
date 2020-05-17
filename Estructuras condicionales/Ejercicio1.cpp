#include <iostream>
using namespace std;


int main(){
	int num1, num2;

	cout << "Ingresa dos n�meros a identificar mayor y menor" << endl;
	cin >> num1 >> num2;

	if(num1 > num2){
		cout << "El mayor es: " << num1;

	}
	else{
		cout << "El mayor es: " << num2;
	}

	return 0;
}
