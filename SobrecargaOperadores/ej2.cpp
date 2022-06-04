#include <iostream>
using namespace std;

class Caja{
    public:
        int x, y, z;
        void pide(int _x, int _y, int _z){
            x = _x;
            y = _y;
            z = _z;
        }
        int volumen(){
            return x * y * z;
        }
        Caja operator+(Caja tmp_caja){
            Caja nueva_caja;
            nueva_caja.x = x + tmp_caja.x;
            nueva_caja.y = y + tmp_caja.y;
            nueva_caja.z = z + tmp_caja.z;
            return nueva_caja;
        } 
};

int main(){
    Caja chica, media, grande;
    Caja jumbo;

    chica.pide(2,3,4);
    media.pide(5,6,7);
    grande.pide(8,9,10);

//    cout << "Volumen caja chica: " << chica.volumen() << endl;
//    cout << "Volumen caja media: " << media.volumen() << endl;
//    cout << "Volumen caja grande: " << grande.volumen() << endl;

    jumbo = grande + chica;

}