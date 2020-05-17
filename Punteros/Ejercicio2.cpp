#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int num, *dirNum, cont = 0;
	
	cout << "Ingresa un numero: " << endl;
	cin >> num;
	
	dirNum = &num;
	
	for(int i = 1; i < *dirNum; i++){
		if(*dirNum % i == 0){
			cont++;
		}
		else{
			
		}
	}
	
	if(cont > 2){
		cout << "El numero: " << *dirNum << " No es Primo" << endl;
	}
	else{
		cout << "El numero: " << *dirNum << " Es Primo" << endl;
	}
	
	getch();
	return 0;
}
