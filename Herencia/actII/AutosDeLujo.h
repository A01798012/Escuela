#ifndef AUTOS_DE_LUJO_H
#define AUTOS_DE_LUJO_H
#include "Vehiculo.h"

class AutosDeLujo: public Vehiculo{
    private:
        int pasajeros;
        bool isHybrid;

    public:
        AutosDeLujo(int _seriesNumber, string _brand, int _year, 
        int _price, int _pasajeros, bool _isHybrid);
        void displayInfo();
};

#endif