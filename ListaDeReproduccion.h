#pragma once
#include "Musica.h" //Composición

#define MAX 20

class ListaDeReproduccion{
    private:
        Musica musica[MAX];
        Musica *reproduciendo;
        int cant_musicas;
    public:
        ListaDeReproduccion(const Musica &inicial);
        Musica& getReproduciendo();
        int getCantMusicas();
        bool setReproduciendo();
        bool setReproduciendo(int numero);
        bool setReproduciendo(Musica musica);
        string toString();
        ListaDeReproduccion& operator+=(const Musica& musica);
};
