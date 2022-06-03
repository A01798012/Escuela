#include "Empleado.h"
#include <iostream>

using namespace std;

void Empleado::setSueldo(int _sueldo){
    sueldo = _sueldo;
}

void Empleado::printSueldo(){
    cout << "Sueldo: " << sueldo << endl;
}