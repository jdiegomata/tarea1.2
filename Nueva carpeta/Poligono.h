#include <iostream>
#include <cmath>

using namespace std;

class Poligono {
private:
    double lado;
    double perimetro;
    double area;

public:
    Pentagono() {
        lado = 0;
        perimetro = 0;
        area = 0;
    }

    void setLado(double la) {
        lado = la;
    }

    void calcularPerimetro() {
        perimetro = 5 * lado;
    }

    void calcularArea() {
        area = (5 * lado * lado) / (4 * tan(M_PI / 5));
    }

    void visualizarPerimetro() {
        cout << "Perimetro del pentágono: " << perimetro << endl;
    }

    void visualizarArea() {
        cout << "Área del pentágono: " << area << endl;
    }
};
