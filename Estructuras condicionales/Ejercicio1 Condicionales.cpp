#include <iostream>
using namespace std;


int main(){
	int num1, num2;

  cout << "Ingresa 2 numeros: " << endl;
  cin >> num1 >> num2;

  if(num1 == num2){
    cout << "Los numeros ingresados son iguales: " << endl;
  }
  else if(num1 > num2){
    cout << num1 << " Es mayor que " << num2;
  }
  else{
    cout << num2 << " Es mayor que " << num1 << endl;
  }

  return 0;
}
