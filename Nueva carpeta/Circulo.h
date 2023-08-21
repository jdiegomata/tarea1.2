#include <iostream>
#include <cmath>

using namespace std;

class Circulo {
private:
    double radio;
    double perimetro;
    double area;

public:
    Circulo() {
        radio = 0;
        perimetro = 0;
        area = 0;
    }

    void setRadio(double r) {
        radio = r;
    }

    void calcularPerimetro() {
        perimetro = 2 * M_PI * radio;
    }

    void calcularArea() {
        area = M_PI * pow(radio, 2);
    }

    void visualizarPerimetro() {
        cout << "Perímetro del círculo: " << perimetro << endl;
    }

    void visualizarArea() {
        cout << "Área del círculo: " << area << endl;
    }
};
