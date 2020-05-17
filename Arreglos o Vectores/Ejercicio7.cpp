#include <iostream>
#include <conio.h>

using namespace std;


int main(){
	
	char vector1[] = {'b', 'c', 'd', 'f', 'g'};
	char vector2[] = {'a', 'e', 'i', 'o', 'u'};
	char vector3[10];
	
	cout << "Vector 1" << endl;
	for(int i = 0; i < 5; i++){
		cout << vector1[i] << " ";
	}
	
	cout << endl;
	
	cout << "Vector 2" << endl;
	for(int i = 0; i < 5; i++){
		cout << vector2[i] << " ";
	}
	
	
	cout << endl;
	
	for(int i = 0; i < 5 ;i++){
		vector3[i] = vector1[i];
	}
	
	for(int i = 5; i < 10 ;i++){
		vector3[i] = vector2[i-5];
	}
	
	cout << "Vector 3 (Union de V1 y V2)" << endl;
	for(int i = 0; i < 10; i++){
		cout << vector3[i] << " ";
	}
	
	
	
	getch();
	return 0;
}
