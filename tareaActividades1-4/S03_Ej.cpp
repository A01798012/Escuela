#include <iostream>

using namespace std;

class Vehicle{
    public:
        string marca = "VW";

        void enciende(){
            cout << "El vehiculo ha encendido..." << endl;
        }
};

class Auto: public Vehicle{
    public:
        string transmission = "Manual";

};

int main(){

    Auto Micarro;

    Micarro.enciende();
    cout << "Marca: " << Micarro.marca << "\t Transimission: " << Micarro.transmission << endl;

    return 0;
}