#include "Transporte.h"
#include <iostream>

using namespace std;

Transporte::Transporte(string _marca, int _nPasajeros){
    marca = _marca;
    nPasajeros = _nPasajeros;
}

void Transporte::modelo(){
    cout << "Marca: " << marca << endl;
    cout << "Numero de pasajeros: " << nPasajeros << endl;
}

Moto::Moto(string _marca, int _nPasajeros, int _precio): Transporte(_marca, _nPasajeros){
    precio = _precio;
}

void Moto::modelo(){
    Transporte::modelo();
    cout << "Precio: " << precio << endl;
    cout << "--------------------------------" << endl;
}

Camion::Camion(string _marca, int _nPasajeros, int _maxCarga): Transporte(_marca, _nPasajeros){
    maxCarga = _maxCarga;
}

void Camion::modelo(){
    Transporte::modelo();
    cout << "Carga maxima: " << maxCarga << " toneladas" << endl;
    cout << "--------------------------------" << endl;
}