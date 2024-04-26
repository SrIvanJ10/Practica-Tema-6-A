#include <iostream>
#include "ListaDeReproduccion.h"

using namespace std;

int main()
{
    // Crear algunas canciones
    Musica cancion1("Deja Vu", "Dave Rodgers", 297);
    Musica cancion2("505", "Artic Monkeys", 250);
    Musica cancion3("Torero", "Chayanne", 222);

    // Crear una lista de reproducción
    ListaDeReproduccion lista(cancion1);

    // Agregar canciones a la lista
    lista += cancion2;
    lista += cancion3;

    // Mostrar la lista de reproducción
    cout << "Lista de Reproduccion:" << endl;
    cout << lista.toString() << endl;

    // Reproducir la primera canción
    lista.setReproduciendo();
    cout << "Reproduciendo: " << lista.getReproduciendo().getNombre() << endl;

    // Reproducir la segunda canción
    lista.setReproduciendo(2);
    cout << "Reproduciendo: " << lista.getReproduciendo().getNombre() << endl;

    // Utilizar el operador de comparación ==
    if (cancion2 == cancion3)
    {
        cout << "Las canciones 2 y 3 son iguales." << endl;
    }
    else
    {
        cout << "Las canciones 2 y 3 son diferentes." << endl;
    }

    // Utilizar el operador de comparación <
    int duracionLimite = 200;
    if (cancion1 < duracionLimite)
    {
        cout << "La cancion 1 dura menos de " << duracionLimite << " segundos." << endl;
    }
    else
    {
        cout << "La cancion 1 dura mas de " << duracionLimite << " segundos." << endl;
    }

    return 0;
}
