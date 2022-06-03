#ifndef CUENTA_H_
#define CUENTA_H_

class Cuenta{
    private:
        int saldo;
    public:
        Cuenta();
        Cuenta (int _saldo);
        void agrega(int _cantidad);
        void retira(int _cantidad);
        int obtenerSaldo();

    
};

#endif
