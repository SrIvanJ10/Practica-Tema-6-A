#pragma once
#include<iostream>

using namespace std;

class Musica{
    private:
        string nombre;
        string artista;
        int duracion;
    public:
        Musica();
        Musica(string nombre, string artista, int duracion);
        string getNombre() const;
        string getArtista() const;
        int getDuracion() const;
        void setNombre(string nombre);
        void setArtista(string artista);
        void setDuracion(int duracion);
        string toString();
        bool operator==(const Musica &otra) const;
        bool operator<(const int &duracion);
};