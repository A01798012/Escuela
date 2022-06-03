#ifndef VEHICULO_H_
#define VEHICULO_H_
#include <string>

using std::string;

class Vehiculo{
    protected:
        int seriesNumber;
        string brand;
        int year;
        int price;
    public:
        Vehiculo(int _seriesNumber, string _brand, int _year, int _price); 
        void displayInfo();

};

#endif