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
        cout << "Per�metro del c�rculo: " << perimetro << endl;
    }

    void visualizarArea() {
        cout << "�rea del c�rculo: " << area << endl;
    }
};
