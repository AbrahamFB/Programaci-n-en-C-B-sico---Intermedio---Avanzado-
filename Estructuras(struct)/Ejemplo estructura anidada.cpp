#include <iostream>
#include <conio.h>

using namespace std;

struct infoDireccion{
	char direccion[30];
	char ciudad[20];
	char municipio[20];
};

struct empleado{
	char nombre[30];
	struct infoDireccion dirEmpleado;
	double salario;
}empleados[2];

int main(){
	
	for(int i = 0; i < 2; i++){
		fflush(stdin); //Vaciar el buffer y permitir ingresar valores
		cout << "Nombre: " << endl;
		cin.getline(empleados[i].nombre, 20, '\n');
		cout << "Direccion: " << endl;
		cin.getline(empleados[i].dirEmpleado.direccion, 30, '\n');
		cout << "Ciudad: " << endl;
		cin.getline(empleados[i].dirEmpleado.ciudad, 20, '\n');
		cout << "Municipio: " << endl;
		cin.getline(empleados[i].dirEmpleado.municipio, 20, '\n');
		cout << "Salario: " << endl;
		cin >> empleados[i].salario;
		cout << endl;
	
	}
	
	//Imprimir datos
	
	for(int i = 0; i < 2; i++){
		cout << "Nombre: " << empleados[i].nombre << endl;
		cout << "Direccion: " << empleados[i].dirEmpleado.direccion << endl;
		cout << "Ciudad: " << empleados[i].dirEmpleado.ciudad << endl;
		cout << "Municipio: " << empleados[i].dirEmpleado.municipio << endl;
		cout << "Salario: " << empleados[i].salario << endl;
		cout << endl;	
	}
	getch();
	return 0;
}
