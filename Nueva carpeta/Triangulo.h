#include <cstdlib>
#include <iostream>
#include <cmath> 

using namespace std;

class Triangulo 
{
private: 
    double lado1, lado2, lado3, perimetro, area;

public: 
    Triangulo(){lado1=0; lado2=0; lado3=0; perimetro=0; area=0;}
    void visualizarPerimetro();
    void vizualizarArea();
    void calcularPerimetro();
    void calcularArea();
    void setLado1(float la1);
    void setLado2(float la2);
    void setLado3(float la3);
};


void Triangulo::visualizarPerimetro()
{
    cout << "Perimetro: " << perimetro << endl;
    cout << "Lado 1: " << lado1 << endl;
    cout << "Lado 2: " << lado2 << endl;
    cout << "Lado 3: " << lado3 << endl;
}

void Triangulo::vizualizarArea()
{
    cout << "Area: " << area << endl;
    cout << "Lado 1: " << lado1 << endl;
    cout << "Lado 2: " << lado2 << endl;
    cout << "Lado 3: " << lado3 << endl;
}

void Triangulo::calcularPerimetro()
{
    perimetro = lado1 + lado2 + lado3;
}

void Triangulo::calcularArea()
{
    double s = perimetro / 2.0; // Semiperímetro
    area = sqrt(s * (s - lado1) * (s - lado2) * (s - lado3));
}

void Triangulo::setLado1(float la1)
{
    lado1 = la1;
}

void Triangulo::setLado2(float la2)
{
    lado2 = la2;
}

void Triangulo::setLado3(float la3)
{
    lado3 = la3;
}
