#pragma once
#include "Musica.h" //Composición

#define MAX 20

class ListaDeReproduccion{
    private:
        Musica musica[MAX];
        Musica *reproduciendo;
        int cant_musicas;
    public:
        ListaDeReproduccion(const Musica &inicial){
            //La lista debe tener una canción para existir
            this->musica[0] = inicial;
            this->cant_musicas = 1;
            this->reproduciendo = nullptr; //para que ahora mismo no apunte a ninguna posición
        }
        Musica& getReproduciendo();
        int getCantMusicas();
        bool setReproduciendo();
        bool setReproduciendo(int numero);
        bool setReproduciendo(Musica musica);
        string toString();
        ListaDeReproduccion& operator+=(const Musica& musica);


        friend bool operator!=(const Musica& musica);
};
