#include "Vagonetas.h"
#include <iostream>

using namespace std;


Vagonetas::Vagonetas(int _seriesNumber, string _brand, int _year, int _price, int _pasajeros): 
    Vehiculo(_seriesNumber, _brand, _year, _price){
        pasajeros = _pasajeros;
}

void Vagonetas::displayInfo(){
    cout << " ----------------- " << "V A G O N E T A" << " ----------------- " << endl;
    cout << "Series: " << seriesNumber << endl;
    cout << "Brand: " << brand << endl;
    cout << "Year: " << year << endl;
    cout << "Price: " << price << endl;
    cout << "Passengers: " << pasajeros << endl;

}