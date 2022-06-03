#include <iostream>
#include "Bebidas.h"

using namespace std;

Bebidas::Bebidas(string _sabor, int _mililitros){
    sabor = _sabor;
    mililitros = _mililitros;
}

void Bebidas::mostrar(){
    cout << "Sabor: " << sabor << endl;
    cout << "Mililitros: " << mililitros << endl;
}