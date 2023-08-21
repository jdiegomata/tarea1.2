#include <iostream>

using namespace std;

class Cuadrado {
private:
    double lado;
    double perimetro;
    double area;

public:
    Cuadrado() {
        lado = 0;
        perimetro = 0;
        area = 0;
    }

    void setLado(double la) {
        lado = la;
    }

    void calcularPerimetro() {
        perimetro = 4 * lado;
    }

    void calcularArea() {
        area = lado * lado;
    }

    void visualizarPerimetro() {
        cout << "Perimetro del cuadrado: " << perimetro << endl;
    }

    void visualizarArea() {
        cout << "area del cuadrado: " << area << endl;
    }
};
