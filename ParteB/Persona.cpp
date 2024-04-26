#include "Persona.h"

using namespace std;

Persona::Persona()
{
    this->nombre = "Desconocido";
    this->dni = "00000000A";
}

Persona::Persona(string nombre, string dni)
{
    this->nombre = nombre;
    this->dni = dni;
}

Persona::Persona(const Persona &otra)
{
    this->nombre = otra.getNombre();
    this->dni = otra.getDNI();
}

bool Persona::operator==(const Persona &otra) const
{
    return (this->getDNI() == otra.getDNI());
}

/*
ostream& Persona::operator<<(const ostream &os, Persona& persona)
{
    return os << "DNI: " << persona.getDNI() << ", llamado " << persona.getNombre();
}
error: 'std::ostream& Persona::operator<<(const ostream&, Persona&)' must take exactly one argument
 ostream& Persona::operator<<(const ostream &os, Persona& persona)
*/

string Persona::getDNI() const
{
    return this->dni;
}

string Persona::getNombre() const
{
    return this->nombre;
}

void Persona::setDNI(string DNI)
{
    this->dni = dni;
}

void Persona::setNombre(string nombre)
{
    this->nombre = nombre;
}

string Persona::toString()
{
    string res = "Nombre: " + this->nombre + " \nDNI: " + this->dni + "\n";
    return res;
}

