#include "Persona.h"
#include "Empleado.h"
#include <iostream>

using namespace std;

int main(){

    Persona p1;
    Empleado e1;

    p1.setData("Arturo", "Hombre", 20);
    p1.printData();
    std::cout << "--------------------------------" << std::endl;
    e1.setData("Orutra", "Mujer", 40);
    e1.setSueldo(100000);
    e1.printData();
    e1.printSueldo();


    return 0;
}