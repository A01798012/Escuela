#include <iostream>
#include "Video.h"
#include <vector>

using std::vector;
using std::cout;
using std::endl;
using std::cin;


int main(){

    Pelicula p1("Pelicula", "Dune", "Ciencia Ficcion", 2021, 155);
    Pelicula p2("Pelicula", "Arrival", "Ciencia Ficcion", 2016, 116);
    Serie s1("Serie", "Our beloved summer", "KDrama", 2021, 1000);
    Serie s2("Serie", "Kingdom", "Kdrama", 2020, 10000);
    Serie s3("Serie", "Facultad de derecho","KDrama" ,2021, 19021);

    vector<Video> videos;

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
                videos[i].muestraDatos();
            }
        }else if(option == 2){
            for(int i = 0; i < videos.size(); i++)
                cout << i << " - " << videos[i].getNombre() << "(" << videos[i].getTipoVideo() << ")" << endl;

            cout << "Ingresa el numero del video a calificar: ";
            cin >> nCalif;

            if (nCalif > videos.size() - 1){
                cout << "Indice de video calificar incorrecto" << endl;
            }else {
                cout << "Pon una calificacion: ";
                cin >> _calificacion;
                videos[nCalif].calificaVideo(_calificacion);
            }

        }else if (option == -1){
            break;
        }else{
            cout << "Error: " << option << " no es una opcion valida" << endl;
        }
    }




    return 0;
}