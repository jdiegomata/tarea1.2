#include "Rectangulo.h"
#include "Triangulo.h"
#include "Poligono.h"
#include "Circulo.h"
#include "Cuadrado.h"
#include <cstdlib>
#include <iostream>
#include <unistd.h>

using namespace std;

int main ()
{
    Rectangulo p;
	int opc=0, opc2=0, opc3=0;
	float an, la;
	
	Triangulo t;
    float la1, la2, la3;

    Poligono d;
    double lad;
    
    Circulo c;
    double r;
    
    Cuadrado a;
    double ladd;
		
        
	do
	{
		system("cls");
		cout<<"++++menu++++"<<endl;
		cout<<"1. Rectangulo"<<endl;
		cout<<"2. Triangulo" <<endl;
		cout<<"3. Poligono"<<endl;
		cout<<"4. Circulo"<<endl;
		cout<<"5. cuadrado"<<endl;
		cout<<"6. salir"<<endl;
		cout<<"selecciona una opcion"<<endl;
		cin>>opc;
		switch(opc){
			case 1:
				cout<<"+++Rectangulo+++"<<endl;
			    cout<<"cual es el valor del ancho?"<<endl;
			    cin>>an;
			    p.setAncho(an);
			    cout<<"cual es el valor del largo?"<<endl;
			    cin>>la;
			    p.setLargo(la);
			    cout<<"1. perimetro"<<endl;
			    cout<<"2. area"<<  endl;
			    cin>>opc3;
			    switch(opc3)
			    {
			    	case 1:
			    		p.calcularPerimetro();
			    		p.visualizarPerimetro();
			    		break;
			    	case 2:
			    		p.calcularArea();
			    		p.vizualizarArea();
			    		break;
			    	default:
			    		cout << "Opción invalida." << endl;
			    		break;
			    }
			    break;
			case 2:
			    cout << "+++Triangulo+++" << endl;
                cout << "Ingrese el valor del lado 1: ";
                cin >> la1;
                t.setLado1(la1);
                cout << "Ingrese el valor del lado 2: ";
                cin >> la2;
                t.setLado2(la2);
                cout << "Ingrese el valor del lado 3: ";
                cin >> la3;
                t.setLado3(la3);
                t.calcularPerimetro();
                t.calcularArea();
                t.visualizarPerimetro();
                t.vizualizarArea();
                break;
            case 3:
                cout << "Ingrese la longitud de un lado del pentagono regular: ";
                cin >> la;

                d.setLado(la);
                d.calcularPerimetro();
                d.calcularArea();
    
                d.visualizarPerimetro();
                d.visualizarArea();
                break; 
            case 4:
			     cout << "Ingrese el radio del circulo: ";
                 cin >> r;

                c.setRadio(r);
                c.calcularPerimetro();
                c.calcularArea();

                c.visualizarPerimetro();
                c.visualizarArea(); 
				break;
			case 5:  
			    cout << "Ingrese la longitud de un lado del cuadrado: ";
                cin >> ladd;

                a.setLado(ladd);
                a.calcularPerimetro();
                a.calcularArea();

                a.visualizarPerimetro();
                a.visualizarArea();
                break;
            case 6:
            	cout << "Saliendo del programa..." << endl;
        exit(0);
            break;
			default:
			cout << "Opción invalida." << endl;
			break;
		}
		cout << "Presiona Enter para continuar...";
		cin.ignore();
		cin.get();
    } while (opc != 0);
    
    return 0;
}
