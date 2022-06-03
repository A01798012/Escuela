#include "Video.h"
#include <iostream>

using std::cout;
using std::endl;

Video::Video(string _tipoVideo, string _nombreVideo, string _genero, int _anioLanzamiento, int _duracion){

    tipoVideo = _tipoVideo;
    nombreVideo = _nombreVideo;
    genero = _genero;
    anioLanzamiento = _anioLanzamiento;
    duracion = _duracion;
    calificacion = 0;

}

Video::Video(string _tipoVideo, string _nombreVideo, string _genero, 
             int _anioLanzamiento, int _duracion, int _calificacion){
    tipoVideo = _tipoVideo;
    nombreVideo = _nombreVideo;
    genero = _genero;
    calificacion = _calificacion;
    anioLanzamiento = _anioLanzamiento;
    duracion = _duracion;
}

void Video::calificaVideo(int _calificacion){
    calificacion = _calificacion;
}

void Video::muestraDatos(){
    cout << "Tipo de video: " << tipoVideo << endl;
    cout << "Nombre de video: " << nombreVideo << endl;
    cout << "Genero de video: " << genero<< endl;
    cout << "Calificacion de video: " << calificacion << endl;
    cout << "Anio de video: " << anioLanzamiento<< endl;
    cout << "Duracion de video: " << duracion << endl;
    cout << "----------------------------------------------------------------" << endl;
}

string Video::getNombre(){
    return nombreVideo;
}

string Video::getTipoVideo(){
    return tipoVideo;
}