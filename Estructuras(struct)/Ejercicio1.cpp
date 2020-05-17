#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;


struct corredor{
	char nombre[30];
	int edad;
	char sexo[10];
	char club[20];

}corredor1;


int main(){
	char categoriaComp[30];	
	
	
	cout << "Ingresa los siguientes datos:" << endl;
	cout << "Nombre: " << endl;
	cin.getline(corredor1.nombre, 30, '\n');
	
	cout << "Edad: " << endl;
	cin >> corredor1.edad;
	
	fflush(stdin); //Vaciar el buffer y permitir ingresar valores
	
	cout << "Sexo:" << endl;
	cin.getline(corredor1.sexo, 10, '\n');
	
	cout << "Club:" << endl;
	cin.getline(corredor1.club, 20, '\n');
	
	if(corredor1.edad <= 18){
		strcpy(categoriaComp, "Juvenil");
	}
	else if(corredor1.edad <= 40){
		strcpy(categoriaComp, "Senior");
	}
	else{
		strcpy(categoriaComp, "Veterano");
	}
	
	cout << endl << ".::Datos del Usuario::." << endl;
	cout << "Nombre: " << corredor1.nombre << endl;
	cout << "Edad: " << corredor1.edad << endl;
	cout << "Sexo: " << corredor1.sexo << endl;
	cout << "Club: " << corredor1.club << endl;
	cout << "Categoria: " << categoriaComp << endl;
	
	getch();
	return 0;
}
