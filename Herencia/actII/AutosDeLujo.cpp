#include "AutosDeLujo.h"
#include <iostream>

using namespace std;

AutosDeLujo::AutosDeLujo(int _seriesNumber, string _brand, int _year, int _price, int _pasajeros, bool _isHybrid): 
    Vehiculo(_seriesNumber, _brand, _year, _price){
        pasajeros = _pasajeros;
        isHybrid = _isHybrid;

}

void AutosDeLujo::displayInfo(){
    cout << " ----------------- " << "L U J O" << " ----------------- " << endl;
    cout << "Series: " << seriesNumber << endl;
    cout << "Brand: " << brand << endl;
    cout << "Year: " << year << endl;
    cout << "Price: " << price << endl;
    cout << "Passengers: " << pasajeros << endl;
    cout << "Hybrid: " << isHybrid << endl; 

}