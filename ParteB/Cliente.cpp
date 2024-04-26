#include "Cliente.h"

using namespace std;

Cliente::Cliente() : Persona(){
    this->cuenta = Cuenta();
}

Cliente::Cliente(string nombre, string dni, Cuenta cuenta) : Persona(nombre, dni) {
    this->cuenta = cuenta;
}

Cliente::Cliente(Persona persona, Cuenta cuenta) : Persona(persona) {
    this->cuenta = cuenta;
}

string Cliente::tostring()
{
    string res = "Objeto Cliente: " + Persona::toString() + this->cuenta.toString(); 
    return res;
}

/*ostream& Cliente::operator<<(const ostream &os, const Cliente &cliente)
{
    return os << cliente.toString();
    //os = "DNI: " << Persona::getDNI << " - Cuenta: " << this->cuenta.toString() << " - Saldo "
}
error: 'std::ostream& Cliente::operator<<(const ostream&, const Cliente&)' must take exactly one argument
 ostream& Cliente::operator<<(const ostream &os, const Cliente &cliente)
*/

