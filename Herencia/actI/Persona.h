#ifndef PERSONA_H_
#define PERSONA_H_
#include <string>

using std::string;

class Persona{
    private:
        string nombre;
        string sexo;
        int edad;
    public:
        void setData(string _nombre, string _sexo, int _edad);
        void printData();

};

#endif