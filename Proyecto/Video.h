#ifndef VIDEO_H_
#define VIDEO_H_

#include <string>

using std::string;

class Video{
    protected:
        string tipoVideo;
        string nombreVideo;
        string genero;
        int calificacion;
        int anioLanzamiento;
        int duracion;
    public:
        Video(string _tipoVideo, string _nombreVideo, string _genero, 
            int _anioLanzamiento, int _duracion);
        Video(string _tipoVideo, string _nombreVideo, string _genero, 
             int _anioLanzamiento, int _duracion, int _calificacion);
        void calificaVideo(int _calificacion);
        void muestraDatos();
        string getTipoVideo();
        string getNombre();
};
class Pelicula: public Video{
    public:
        Pelicula(string _tipoVideo, string _nombreVideo, string _genero, 
            int _anioLanzamiento, int _duracion);
        Pelicula(string _tipoVideo, string _nombreVideo, string _genero, 
            int _calificacion, int _anioLanzamiento, int _duracion);

};
class Serie: public Video{
    public:
        Serie(string _tipoVideo, string _nombreVideo, string _genero, 
            int _anioLanzamiento, int _duracion);
        Serie(string _tipoVideo, string _nombreVideo, string _genero, 
            int _calificacion, int _anioLanzamiento, int _duracion);

};
#endif