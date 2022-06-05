#ifndef PELICULA_H_
#define PELICULA_H_
#include "Video.h"

class Pelicula: public Video{
    public:
        Pelicula(string _tipoVideo, string _nombreVideo, string _genero, 
            int _anioLanzamiento, int _duracion);
        Pelicula(string _tipoVideo, string _nombreVideo, string _genero, 
            int _calificacion, int _anioLanzamiento, int _duracion);

};
#endif