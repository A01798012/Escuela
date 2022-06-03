#ifndef TRANSPORTE_H_
#define TRANSPORTE_H_
#include <string>

using std::string;

class Transporte{
    protected:  //De momento protected
        string marca;
        int nPasajeros;
    public:
        Transporte(string _marca, int _nPasajeros);
        virtual void modelo();
};

class Moto: public Transporte{
    private:
        int precio;
    public:
        Moto(string _marca, int _nPasajeros, int _precio);
        void modelo();
};

class Camion: public Transporte{
    protected:
        int maxCarga;
    public:
        Camion(string _marca, int _nPasajeros, int _maxCarga);
        void modelo();
};

#endif
