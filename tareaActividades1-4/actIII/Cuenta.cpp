#include "Cuenta.h"
#include <iostream>

using std::cout;
using std::endl;

Cuenta::Cuenta(){
    saldo = 0;
};

Cuenta::Cuenta(int _saldo){
    if (_saldo > 0){
        saldo = _saldo;
    } else{
        saldo = 0;
        cout << "Error: el saldo indicado es invalido, por lo que su saldo se inicializo en 0" << endl;
    }
}

void Cuenta::agrega(int _cantidad){
    if (_cantidad > 0){
        saldo += _cantidad;
        cout << "Se agrego " << _cantidad << " exitosamente" << endl;
    }
}

void Cuenta::retira(int _cantidad){
    if (saldo >= _cantidad) {
        saldo -= _cantidad;
        cout << "Retiro de " << _cantidad << " exitosa" << endl;
    } else{
        cout << "El monto a cargar excede el saldo de la cuenta." << endl;
    }
}

int Cuenta::obtenerSaldo(){
    return saldo;
}
