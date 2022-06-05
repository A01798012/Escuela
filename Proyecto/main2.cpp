#include <iostream>
#include "Video.h"
#include <vector>

using std::vector;
using std::cout;
using std::endl;
using std::cin;


int main(){

    Video *p1;
    Video *p2;
    Video *s1, *s2, *s3;

    p1 = new Pelicula("Pelicula", "Dune", "Ciencia Ficcion", 2021, 155, 70);
    p2 = new Pelicula("Pelicula", "Arrival", "Ciencia Ficcion", 2016, 116, 52);
    s1 = new Serie("Serie", "Our beloved summer", "KDrama", 2021, 1000, 16);
    s2 = new Serie("Serie", "Kingdom", "Kdrama", 2020, 10000, 6);
    s3 = new Serie("Serie", "Facultad de derecho","KDrama" ,2021, 19021, 16);

    vector<Video*> videos;

    videos.push_back(p1);
    videos.push_back(p2);
    videos.push_back(s1);
    videos.push_back(s2);
    videos.push_back(s3);

//    videos.push_back(v1);
 //   videos.push_back(v2);

    while (true){
        int option, nCalif, _calificacion;
        
        cout << "Pulsa 1 para consultar videos y 2 para calificar(-1 para salir): ";
        cin >> option;

        if (option == 1){
            for (int i = 0; i < videos.size(); i++){
                videos[i] -> muestraDatos();
            }
        }else if(option == 2){
            for(int i = 0; i < videos.size(); i++)
                cout << i << " - " << (videos[i] -> getNombre()) << "(" << videos[i] -> getTipoVideo() << ")" << endl;

            cout << "Ingresa el numero del video a calificar: ";
            cin >> nCalif;

            if (nCalif > videos.size() - 1){
                cout << "Indice de video calificar incorrecto" << endl;
            }else {
                cout << "Pon una calificacion: ";
                cin >> _calificacion;
                videos[nCalif] -> calificaVideo(_calificacion);
            }

        }else if (option == -1){
            break;
        }else{
            cout << "Error: " << option << " no es una opcion valida" << endl;
        }
    }




    return 0;
}