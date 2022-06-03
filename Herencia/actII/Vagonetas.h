#ifndef VAGONETAS_H
#define VAGONETAS_H
#include "Vehiculo.h"
class Vagonetas: public Vehiculo{
    private:
        int pasajeros;

    public:
        Vagonetas(int _seriesNumber, string _brand, int _year, int price, int _pasajeros);
        void displayInfo();
};
#endif