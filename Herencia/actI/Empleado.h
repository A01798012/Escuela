#ifndef EMPLEADO_H_
#define EMPLEADO_H_
#include "Persona.h"

class Empleado: public Persona{
    private:
        int sueldo;
    public:
        void setSueldo(int _sueldo);
        void printSueldo();

};

#endif