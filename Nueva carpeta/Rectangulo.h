#include <cstdlib>
#include <iostream>

using namespace std;

class Rectangulo 
{
	private: 
	    double largo, ancho, perimetro, area;
	
	public: 
	    Rectangulo(){largo=0; ancho=0; perimetro=0; area=0;}
	    void visualizarPerimetro();
	    void vizualizarArea();
	    void calcularPerimetro();
	    void calcularArea();
	    void setLargo(float la);
	    void setAncho(float an);
};


void Rectangulo::visualizarPerimetro()
{
	cout<<"perimetro:"<<perimetro<<endl;
	cout<<"largo:"<<largo<<endl;
	cout<<"ancho:"<<ancho<<endl;
}

void Rectangulo::vizualizarArea()
{
	cout<<"area:"<<area<<endl;
	cout<<"largo:"<<largo<<endl;
	cout<<"ancho:"<<ancho<<endl;
}

void Rectangulo::calcularPerimetro()
{
	perimetro = largo+largo+ancho+ancho;
}

void Rectangulo::calcularArea()
{
	area = largo*ancho;
}

void Rectangulo::setAncho(float an)
{
	ancho = an;
}

void Rectangulo::setLargo(float la)
{
	largo = la;
}
