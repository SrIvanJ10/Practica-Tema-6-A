#include "ListaDeReproduccion.h"

ListaDeReproduccion::ListaDeReproduccion(const Musica &inicial){
    //La lista debe tener una canción para existir
    this->musica[0] = inicial;
    this->cant_musicas = 1;
    this->reproduciendo = nullptr; //para que ahora mismo no apunte a ninguna posición
}

Musica& ListaDeReproduccion::getReproduciendo(){
    return *(this->reproduciendo); //devuelve la canción que se está reproduciendo ahora mismo
}

int ListaDeReproduccion::getCantMusicas(){
    return this->cant_musicas;
}

bool ListaDeReproduccion::setReproduciendo(){
    this->reproduciendo = &this->musica[0];
    return true; //acaba de empezar a reproducir música
}

bool ListaDeReproduccion::setReproduciendo(int numero){
    //para el usuario, la primera canción es la 1, aunque en el programa es el 0
    this->reproduciendo = &this->musica[numero - 1];
    return true; //acaba de empezar a reproducir música
}

bool ListaDeReproduccion::setReproduciendo(Musica musica){
    int i = 0;
    while(!(this->musica[i] == musica) && (i < this->cant_musicas)){
        //la canción no coincide con la numero i
        i++; //siguiente canción
    }
    if(i < this->cant_musicas){
        this->reproduciendo = &this->musica[i];
        return true;
    }
    return false;
}

string ListaDeReproduccion::toString(){
    string c = "\n";
    for(int i = 0; i < cant_musicas; i++){
        c += "Cancion" + to_string(i + 1) + ":\n" + this->musica[i].toString() + "\n";
    }
    return c;
}

/* string ListaDeReproduccion::toString(){
    string c = "\n";
    for(int i = 0; i < cant_musicas; i++){
        c += "Cancion" + to_string(i + 1) + ":\n"
            + this->musica[i].getNombre() + "Artista: " + this->musica[i].getArtista() + " " + to_string(this->musica[i].getDuracion()) + "s \n";
    }
    return c;
} */

ListaDeReproduccion& ListaDeReproduccion::operator+=(const Musica& musica){
    int i = 0;
    while(!(this->musica[i] == musica) && (i < this->cant_musicas)){
        //la canción no coincide con la numero i
        i++; //siguiente canción
    }
    if(i < this->cant_musicas){
        //ya existe la canción
        return *this; //termina la función si realizar nada
    }

    if(this->cant_musicas < MAX){
        //caben más canciones
        this->musica[this->cant_musicas] = musica;
        this->cant_musicas++;
    }
    else{
        this->musica[0] = musica;
    }

    return *this;
}