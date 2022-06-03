#include "Figura.h"

void Figura::obtener(double _largo, double _alto){
    largo = _largo;
    alto = _alto;
}

float Figura::area(){
    return 0.0;
}

float Rectangulo::area(){
    return largo * alto;
}

float Triangulo::area(){
    return largo * alto / 2;
}


