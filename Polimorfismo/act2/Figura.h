#ifndef FIGURA_H_
#define FIGURA_H_
#include <iostream> 

class Figura{
    protected:
        double largo;
        double alto;
    public:
        void obtener(double _largo, double _alto);
        virtual float area();
};

class Rectangulo: public Figura{
    public:
        float area();
};

class Triangulo: public Figura{
    public:
        float area();
};

#endif