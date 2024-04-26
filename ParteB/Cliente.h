#pragma once
#include <iostream>
#include "Persona.h"
#include "Cuenta.h"

using namespace std;

class Cliente : public Persona
{
    private:
        Cuenta cuenta;
    public:
        Cliente();
        Cliente(string nombre, string dni, Cuenta cuenta);
        Cliente(Persona persona, Cuenta cuenta);
        //friend ostream& operator<<(const ostream &os, const Cliente &cliente);
        
        string tostring();
};