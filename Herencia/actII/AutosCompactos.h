#ifndef AUTOS_COMPACTOS_H
#define AUTOS_COMPACTOS_H
#include "Vehiculo.h"

class AutosCompactos: public Vehiculo{
    private:
        int pasajeros;
    public:
        AutosCompactos(int _seriesNumber, string _brand, int _year, int price, int _pasajeros);
        void displayInfo();
};

#endif