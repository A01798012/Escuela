#include "Camionetas.h"
#include <string>
#include <iostream>

using namespace std;
using std::string;

Camionetas::Camionetas(int _seriesNumber, string _brand, int _year, int _price, 
        int _chargeLoad, int _axes): Vehiculo(_seriesNumber, _brand, _year, _price){
            chargeLoad = _chargeLoad;
            axes = _axes;

}

void Camionetas::displayInfo(){
    cout << " ----------------- " << "C A M I O N E T A" << " ----------------- " << endl;
    cout << "Series: " << seriesNumber << endl;
    cout << "Brand: " << brand << endl;
    cout << "Year: " << year << endl;
    cout << "Price: " << price << endl;
    cout << "Charge: " << chargeLoad << "kg" << endl;
    cout << "Axes: " << axes << endl;

}
