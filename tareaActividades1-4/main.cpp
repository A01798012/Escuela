
#define _USE_MATH_DEFINES
#include <iostream>
#include "Circulo.h"

int main() {

    Circulo cir;
    Circulo cir2;
    cir.pideRadio();
    std::cout << "El area es: " << cir.circ_area() << std::endl;
    std::cout << "El perimetro es: " << cir.circ_perimetro() << std::endl;

    cir2.pideRadio();
    std::cout << "El area es: " << cir2.circ_area() << std::endl;
    std::cout << "El perimetro es: " << cir2.circ_perimetro() << std::endl;

    return 0;
}
