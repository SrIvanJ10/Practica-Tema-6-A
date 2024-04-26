#pragma once
#include "ListaDeReproduccion.h"

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
    //int i = 0;
    //while(this->musica[i] != musica && i < this.cant_musicas){

    //}
}
string ListaDeReproduccion::toString(){
    string c = "\n";
    for(int i = 0; i < cant_musicas; i++){
        c += "Canci" + char(162) + "n " + to_string(i) + ":\n"
            + this->musica[i].getNombre() + "Artista: " + this->musica[i].getArtista() + " " + this->musica[i].getDuracion() + "s \n";
    }
    return c;
}
ListaDeReproduccion& ListaDeReproduccion::operator+=(const Musica& musica){
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



friend bool ListaDeReproduccion::operator!=(const Musica& musica){
    
}