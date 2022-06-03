#include "Vehiculo.h"
#include "Camionetas.h"
#include "AutosDeLujo.h"
#include "Vagonetas.h"
#include "AutosCompactos.h"

int main(){

    AutosDeLujo Lujo(123, "Mercedes", 2021, 70000, 2, true);
    Camionetas Camioneta(912934, "Nissan", 1999, 25000, 599, 4);
    AutosCompactos Compacto(345, "Toyota", 2005, 10000, 4);
    Vagonetas Vagoneta(92939, "Volkswagen", 1970, 1000, 10);

    Lujo.displayInfo();
    Camioneta.displayInfo();
    Compacto.displayInfo();
    Vagoneta.displayInfo();

    return 0;
}