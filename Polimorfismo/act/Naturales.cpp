#include "Naturales.h"
#include <iostream>

using namespace std;

Naturales::Naturales(string _sabor, int _mililitros, double _calorias):
                    Bebidas(_sabor, _mililitros){
                        calorias = _calorias;
}

void Naturales::mostrar(){
    Bebidas::mostrar();
    cout << "Calorias: " << calorias << endl;
    cout << "------------------------------------------------" << endl;
}