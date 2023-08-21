#include "Persona.h"
#include <cstdlib>
#include <iostream>

using namespace std;

int main (int argc, char*arg[])
{
	
	float pe, al, imc;
	string n;
	
	cout<<"BIEN BENIDO"<<endl;
	cout<<"\tPrograma que calcula el IMC"<<endl;
	
	cout<<"Esccrive tu nombre:"<<endl;
	cin>>n;
	cout<<"Escribe tu peso:"<<endl;
	cin>>pe;
	cout<<"Escribe tu estatura:"<<endl;
	cin>>al;
	
	 Persona p;
	 p.setNombre(n);
	 p.setEstatura(al);
	 p.setPeso(pe);
	 p.calcularIMC();
	 p.visualizar();
	 
getchar();
system ("pause");
return 0;
}
