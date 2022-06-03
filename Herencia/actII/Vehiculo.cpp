#include "Vehiculo.h"
#include <iostream>

using namespace std;


Vehiculo::Vehiculo(int _seriesNumber, string _brand, int _year, int _price){
    seriesNumber = _seriesNumber;
    brand = _brand;
    year = _year;
    price = _price;
}

void Vehiculo::displayInfo(){
    cout << " ----------------- " << "V E H I C U L O" << " ----------------- " << endl;
    cout << "Series: " << seriesNumber << endl;
    cout << "Brand: " << brand << endl;
    cout << "Year: " << year << endl;
    cout << "Price: " << price << endl;

}