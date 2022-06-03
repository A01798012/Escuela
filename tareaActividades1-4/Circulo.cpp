
#define _USE_MATH_DEFINES
#include "Circulo.h"
#include <iostream>
#include <math.h>
using std::cout;
using std::cin;

void Circulo::pideRadio(){
    cout << "Dame el radio: ";
    cin >> radio;
}

double Circulo::circ_area(){
    return M_PI * pow(radio, 2);
}

double Circulo::circ_perimetro(){
    return M_PI * radio * 2;
}
