#include <iostream>
#include "Persona.h"
#include "Cuenta.h"
#include "Cliente.h"

using namespace std;

int main() {
    // Crear objetos de Persona
    Persona persona1("Juan", "12345678A");
    Persona persona2("Maria", "87654321B");

    // Crear objetos de Cuenta
    Cuenta cuenta1("1234567890123456", 1000.0);
    Cuenta cuenta2("9876543210987654", 2000.0);

    // Crear objetos de Cliente
    Cliente cliente1(persona1, cuenta1);
    Cliente cliente2(persona2, cuenta2);

    // Mostrar información de los clientes
    cout << "Informacion del Cliente 1:\n" << cliente1.toString() << endl;
    cout << "Informacion del Cliente 2:\n" << cliente2.toString() << endl;

    // Demostrar la igualdad de personas
    if (persona1 == persona2) {
        cout << "Las personas son iguales." << endl;
    } else {
        cout << "Las personas son diferentes." << endl;
    }

    // Demostrar la funcionalidad de los setters
    persona1.setNombre("Pedro");
    cuenta2.setSaldo(3000.0);

    // Mostrar la información actualizada
    cout << "Informacion del Cliente 1 (actualizada):\n" << cliente1.toString() << endl;
    cout << "Informacion del Cliente 2 (actualizada):\n" << cliente2.toString() << endl;

    return 0;
}