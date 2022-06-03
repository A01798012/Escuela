#include <iostream>
#include "Video.h"
//#include "Serie.h"
//#include "Pelicula.h"
#include <vector>

using std::vector;
using std::cout;
using std::endl;
using std::cin;


int main(){

    Video v1("Risas", "Bailando en CDMX", "Entretenimiento", 2019, 120, 10); //Con calif
    Video v2("Ensayo", "Capitalismo...", "Didactico", 2021, 515); // sin calif
    vector<Video> videos;

    videos.push_back(v1);
    videos.push_back(v2);

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
                cout << i << " - " << videos[i].getNombre() << endl;

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