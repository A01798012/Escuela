#include "AutosCompactos.h"
#include <iostream>

using namespace std;


AutosCompactos::AutosCompactos(int _seriesNumber, string _brand, int _year, int _price, int _pasajeros): 
    Vehiculo(_seriesNumber, _brand, _year, _price){
        pasajeros = _pasajeros;
}

void AutosCompactos::displayInfo(){
    cout << " ----------------- " << "C O M P A C T O" << " ----------------- " << endl;
    cout << "Series: " << seriesNumber << endl;
    cout << "Brand: " << brand << endl;
    cout << "Year: " << year << endl;
    cout << "Price: " << price << endl;
    cout << "Passengers: " << pasajeros << endl;

}