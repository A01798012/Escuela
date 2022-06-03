#ifndef NATURALES_H_
#define NATURALES_H_
#include "Bebidas.h"

#include <string>

using std::string;

class Naturales: public Bebidas{
    private:
        double calorias;
    public:
        Naturales(string, int, double);
        void mostrar();

};

#endif