//Declaración de una Clase

//Archivo gf.h es el encabezado

class Punto{
	//Atributos
	private:
		int x, y;
		
	//Métodos	
	public:
		Punto(int _x, int _y){//Inicializar los atributos	//Constructor1
		x = _x;
		y = _y;
	}
	
	Punto(){//Constructor2
		x = y = 0;
	}
	
	void setX(int valorX); //Establecer valor de X
	void setY(int valorY); //Establecer valor de Y
	int getX();	//Obtener el valor de X
	int getY(); //Obtener el valor de Y
	 
};
