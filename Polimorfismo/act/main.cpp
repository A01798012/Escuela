#include "Bebidas.h"
#include "Naturales.h"

int main(){

    Bebidas* ptrN1;
    Bebidas* ptrN2;

    ptrN1 = new Naturales("Kiwi",100,76.56);
    ptrN2 = new Naturales("Fresa",200,13.99);

    ptrN1 -> mostrar();
    ptrN2 -> mostrar();

    return 0;
}