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
        string getNombre();
        string getArtista();
        int getDuracion();
        void setNombre();
        void setArtista();
        void setDuracion();
        string toString();
        bool operator==(const Musica &otra);
        bool operator<(const int &duracion);
};