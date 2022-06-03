#include "Transporte.h"

int main(){

    Transporte* moto;
    Transporte* camion;
    Transporte* transporte;

    moto = new Moto("Honda", 2, 35000);
    camion = new Camion("Isuzu", 3, 1);
    transporte = new Transporte("BMW", 4);

    moto -> modelo();
    camion -> modelo();
    transporte -> modelo();

    return 0;
}