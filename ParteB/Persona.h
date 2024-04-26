#pragma once
#include <iostream>

using namespace std;

class Persona
{
private:
    string dni;
    string nombre;

public:
    Persona();
    Persona(string nombre, string dni);
    Persona(const Persona &otra);
    bool operator==(const Persona &otra) const;
    //friend ostream& operator<<(const ostream &os, Persona& persona);
    string getDNI() const;
    string getNombre() const;
    void setDNI(string dni);
    void setNombre(string nombre);
    string toString();
};