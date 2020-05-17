#include <iostream>
#include <conio.h>

using namespace std;

struct empleado{
	char nombre[30];
	float salario;
}empleados[1000];


int main(){
	int nEmp, posicionM = 0, posicionm = 0;
	float mayor = 0, menor = 9999999;

	cout << "Ingresa el numero de empleado: " << endl;
	cin >> nEmp;

	
	for(int i = 0; i < nEmp; i++){
		fflush(stdin); //Vaciar el buffer y permitir ingresar valores
		
		cout << "Ingresa los datos del empleado Num. " << i+1 << endl;
		
		cout << "Nombre: " << endl;
		cin.getline(empleados[i].nombre, 30, '\n');
		
		cout << "Salario: " << endl;
		cin >> empleados[i].salario;
		
		if(empleados[i].salario > mayor){
			mayor = empleados[i].salario;
			posicionM = i;
		}
		
		if(empleados[i].salario < menor){
			menor = empleados[i].salario;
			posicionm = i;
		}
	}
	
	cout << endl;
	cout << "El empleado con mayor sueldo es: " << endl;
	cout << "Nombre: " << empleados[posicionM].nombre << endl;
	cout << "Salario: " << empleados[posicionM].salario << endl;
	
	cout << endl;
	
	cout << "El empleado con menor sueldo es: " << endl;
	cout << "Nombre: " << empleados[posicionm].nombre << endl;
	cout << "Salario: " << empleados[posicionm].salario << endl;	
	
	getch();
	return 0;
}
