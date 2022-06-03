#include "Pelicula.h"
#include <iostream>

using std::cout;
using std::endl;

Pelicula::Pelicula(string _tipoVideo, string _nombreVideo, string _genero, int _anioLanzamiento, int _duracion):
            Video(_tipoVideo, _nombreVideo, _genero, _anioLanzamiento, _duracion){}

Pelicula::Pelicula(
    string _tipoVideo, string _nombreVideo, string _genero, int _anioLanzamiento, int _duracion, int _calificacion):
             Video(_tipoVideo, _nombreVideo, _genero, _anioLanzamiento, _duracion, _calificacion){}
