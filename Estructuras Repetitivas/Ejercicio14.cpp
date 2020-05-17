/*En una clase de 5 alumnos se han realizado tres exámenes y se requiere determinar el número de: 
 
	a) Alumnos que aprobaron todos los exámenes. 
	b) Alumnos que aprobaron al menos un examen. 
	c) Alumnos que aprobaron únicamente el último examen. 
 
	Realice un programa que permita la lectura de los datos 
	y el cálculo de las estadísticas. 
 
*/	

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	float cal1 = 0, cal2, cal3;
	int aproT = 0, apro1 = 0, aproUlt = 0;
	

	cout << "<--- Bienvenido ---> " << endl << "Ingresa 3 Cal. de 5 alumnos" << endl;
	
	for(int i = 1; i <= 5; i++){
		
		cout << endl << "::::Calificacion del alumno::: " << i << endl << endl;
		
		do{
			cout <<"Ingresa la Calificacion 1" << endl;
			cin >> cal1;
			
		}while((cal1 < 0) || (cal1 > 10));

		do{
			cout <<"Ingresa la Calificacion 2" << endl;
			cin >> cal2;
		}while((cal2 < 0) || (cal2 > 10));
			
		do{
			cout <<"Ingresa la Calificacion 3" << endl;
			cin >> cal3;
		}while((cal3 < 0) || (cal3 > 10));
		
		
		if((cal1 >= 6) && (cal2 >= 5) && (cal3 >= 6)){
			aproT++;
		}
		
		if((cal1 >= 6) || (cal2 >= 6) || (cal3 >= 6)){
			apro1++;
		}
		
		if(cal3 >= 6){
			aproUlt++;
		}
		cout <<"----------------------------------" << endl;
		
	}
	
	cout << endl;
	
	cout << "El numero de alumnos que aprobaron todos los examenes son: " << endl;
	cout << aproT << endl;
	
	cout << "El numero de alumnos que aprobaron un solo examen son: " << endl;
	cout << apro1 << endl;
	
	cout << "El numero de alumnos que aprobaron el ultimo examen son: " << endl;
	cout << aproUlt << endl;
	
	getch();
	return 0;
}
