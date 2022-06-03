#include "Persona.h"
#include <iostream>

using namespace std;

void Persona::setData(string _nombre, string _sexo, int _edad){
    nombre = _nombre;
    sexo = _sexo;
    edad = _edad;
}

void Persona::printData(){
    cout << "Nombre: " << nombre << endl;
    cout << "Sexo: " << sexo << endl;
    cout << "Edad: " << edad << endl;
}