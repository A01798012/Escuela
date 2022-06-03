#ifndef BEBIDAS_H_
#define BEBIDAS_H_

#include <string>

using std::string;

class Bebidas{
    private:
        string sabor;
        int mililitros;
    public:
        Bebidas(string, int);
        virtual void mostrar();

};

#endif