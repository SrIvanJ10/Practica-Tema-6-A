#include "Musica.h"

class ListaDeReproduccion{
    private:
        Musica musica[20];
        Musica *reproduciendo;
        int cant_musicas;
    public:
        ListaDeReproduccion(const Musica &inicial){}
};
