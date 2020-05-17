#include <iostream>
#include <conio.h>

using namespace std;

int escribeNum(int ini, int fin){
	if(ini == fin){
		return ini;
	}
	else{
		return escribeNum(ini, fin-1);
	}
}


int main(){
	int ini, fin;
	
	cout << "Ingresa un Inicio:" << endl;
	cin >> ini;
	cout << "Ingresa un Final:" << endl;
	cin >> fin;
	
	for(int i = ini; i <= fin; i++){
		cout << escribeNum(i, fin) << " ";
	}
	
	getch();
	return 0;
}
