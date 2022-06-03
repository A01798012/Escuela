#ifndef CAMIONETAS_H
#define CAMIONETAS_H
#include "Vehiculo.h"
class Camionetas: public Vehiculo{
    private:
        int chargeLoad;
        int axes;
    public:
        Camionetas(int _seriesNumber, string _brand, int _year, int price, 
        int _chargeLoad, int _axes);
        void displayInfo();


};

#endif