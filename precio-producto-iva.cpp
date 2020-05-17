/*Programa que lee entrada estándar del precio de un producto y muestre la salida estándar  del precio al aplicarle el iva*/

#include<iostream>
using namespace std;

int main(){
	
	double costo, iva, costo_Iva;
	
	cout << "Ingresa el costo del producto" << endl;
	cin >> costo;
	
	iva = (costo * .16);
	costo_Iva = iva + costo;
	
	cout << "El Iva del producto es de= " << endl;
	cout << "$" << iva << endl;
	
	cout << "El costo del producto con Iva es de= " << endl;
	cout << "$" << costo_Iva << endl;
		
	return 0;
}
