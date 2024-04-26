#pragma once
#include <iostream>

using namespace std;

class Cuenta{
    private:
        string numero;
        float saldo;
    public:
        Cuenta();
        Cuenta(string numero, float saldo);
        bool operator<(const Cuenta& otra) const;
        Cuenta operator+(const float& monto);
        
        string getNumero();
        float getSaldo() const;
        void setNumero(string numero);
        void setSaldo(float saldo);

        //friend ostream& operator<<(ostream& os, const Cuenta& cuenta);
        string toString();
};

