#include <iostream>
using namespace std;

int main(){
	int edad;
	
	cout << "Programa que identifica la edad y si esta dentro del rango [18-25]" << endl;
	
	cout << "Ingresa tu edad: " << endl;
	cin >> edad;
	
	if((edad >= 18) && (edad <= 25)){
		cout << "Tu edad esta dentro del rango [18-25]" << endl;		
	}
	else{
		cout << "Tu edad esta fuera del rango " << endl;
	}
	
	return 0;
}
