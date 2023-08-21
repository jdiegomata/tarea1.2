#include <cstdlib>
#include <iostream>

using namespace std;

class Persona
{
	private:
		float peso, estatura, imc;
		
		string nombre;
		
	public:
	 persona(){peso=0; estatura=0; imc=0;}
	 void visualizar();
	 void calcularIMC();
	 void setEstatura(float es);
	 void setPeso (float pe);
	 void setNombre(string n);
	 };
	 
void Persona ::visualizar()
{

 cout<<"indice de masa corporal:"<<endl;
 cout<<"nombre:"<<nombre<<endl;
 cout<<"peso:"<<peso<<endl;
 cout<<"IMC:"<<imc<<endl;	 
}

void Persona :: calcularIMC()
{
	imc = peso/(estatura*estatura);
}

void Persona :: setEstatura(float es)
{
	estatura = es;
}

void Persona :: setPeso(float pe)
{
	peso = pe;
}

void Persona :: setNombre (string n)
{
	nombre = n;
}
