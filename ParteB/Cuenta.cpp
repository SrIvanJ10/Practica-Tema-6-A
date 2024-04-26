#include "Cuenta.h"

using namespace std;

Cuenta::Cuenta(){
    this->numero = "0000000000000000";
    this->saldo = -200;
}
Cuenta::Cuenta(string numero, float saldo){
    this->numero = numero;
    this->saldo = saldo;
}
bool Cuenta::operator<(const Cuenta& otra) const{
    if(this->saldo < otra.getSaldo()){
        return true;
    }
    return false;
}
Cuenta Cuenta::operator+(const float& monto){
    this->saldo += monto;
    return *this;
}
/*
ostream& Cuenta::operator<<(ostream& os, Cuenta& cuenta){
    return os << "Cuenta: " << cuenta.numero << " - Saldo" << cuenta.saldo;
}
error: 'std::ostream& Cuenta::operator<<(std::ostream&, Cuenta&)' must take exactly one argument
 ostream& Cuenta::operator<<(ostream& os, Cuenta& cuenta){
*/
string Cuenta::getNumero(){
    return this->numero;
}
float Cuenta::getSaldo() const{
    return this->saldo;
}

void Cuenta::setNumero(string numero){
    this->numero = numero;
}
void Cuenta::setSaldo(float saldo){
    this->saldo = saldo;
}

string Cuenta::toString(){
    string c = "Numero: " + this->getNumero() + ", con un saldo de " + to_string(this->saldo);
    return c;
}