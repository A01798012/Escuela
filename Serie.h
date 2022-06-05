#ifndef SERIE_H_
#define SERIE_H_
#include "Video.h"

class Serie: public Video{
    public:
        Serie(string _tipoVideo, string _nombreVideo, string _genero, 
            int _anioLanzamiento, int _duracion);
        Serie(string _tipoVideo, string _nombreVideo, string _genero, 
            int _calificacion, int _anioLanzamiento, int _duracion);

};

#endif