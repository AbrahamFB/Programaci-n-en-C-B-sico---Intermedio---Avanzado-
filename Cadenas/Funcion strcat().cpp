#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	
	char cade1[] = "Hola";
	char cade2[] = "Buenos dias";
	char cadeConcatenada[50];
	
	strcpy(cadeConcatenada, cade1);
	
	strcat(cadeConcatenada, cade2);
	
	cout << cade2;
	
	getch();
	return 0;
}
