#include <iostream>
#include <conio.h>

using namespace std;

struct atleta{
	char nombre[30];
	char pais[30];
	int numMedallas;
}atletas[10000];


int main(){
	int nAtletas, mayNumMed = 0, posMayNMed = 0;
	
	cout << "Ingresa el numero de atletas: " << endl;
	cin >> nAtletas;
	
	for(int i = 0; i < nAtletas; i++){
		fflush(stdin); //Vacias el buffer y poder digitar mas valores	
		cout << "Ingresa los datos del atleta Num. " << i+1 << endl;
		cout << "Nombre: " << endl;
		cin.getline(atletas[i].nombre, 30, '\n');
		cout << "Pais: " << endl;
		cin.getline(atletas[i].pais, 30, '\n');
		cout << "Numero de medallas: " << endl;
		cin >> atletas[i].numMedallas;
		
		if(atletas[i].numMedallas > mayNumMed){
			mayNumMed = atletas[i].numMedallas;
			posMayNMed = i;
		}
		cout << endl;
	}
	
	cout << endl << "El atleta con mayor numero de medallas es: " << endl;
	cout << "Nombre: " << atletas[posMayNMed].nombre << endl;
	cout << "Pais: " << atletas[posMayNMed].pais << endl;
	
	getch();
	return 0;
}
