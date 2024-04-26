#include "Musica.h"

using namespace std;

Musica::Musica() {
    this->nombre = "Desconocido";
    this->artista = "Desconocido";
    this->duracion = 0;
}

Musica::Musica(string nombre, string artista, int duracion) {
    this->nombre = nombre;
    this->artista = artista;
    this->duracion = duracion;
}

string Musica::getNombre() const{
    return this->nombre;
}

string Musica::getArtista() const{
    return this->artista;
}

int Musica::getDuracion() const{
    return this->duracion;
}

void Musica::setNombre(string nombre) {
    this->nombre = nombre;
}

void Musica::setArtista(string artista) {
    this->artista = artista;
}

void Musica::setDuracion(int duracion) {
    this->duracion = duracion;
}

string Musica::toString() {
    string res = "Nombre: " + this->nombre + " \nArtista: " + this->artista + " \nDuracion: " + to_string(this->duracion) + "\n";
    return res;
}

bool Musica::operator==(const Musica& otra) const {
        return ((otra.getNombre() == this->getNombre()) && (otra.getDuracion() == this->getDuracion()));
}

bool Musica::operator<(const int &duracion) {
    return (this->getDuracion() < duracion);
}