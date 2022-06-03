#include <iostream>

using namespace std;

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
Cuenta::Cuenta(){
    saldo = 0;
};

Cuenta::Cuenta(int _saldo){
    if (_saldo > 0){
        saldo = _saldo;
    } else{
        saldo = 0;
        cout << "Error: el saldo indicado es invalido, por lo que su saldo se inicializo en 0" << endl;
    }
}

void Cuenta::agrega(int _cantidad){
    if (_cantidad > 0){
        saldo += _cantidad;
        cout << "Se agrego " << _cantidad << " exitosamente" << endl;
    }
}

void Cuenta::retira(int _cantidad){
    if (saldo >= _cantidad) {
        saldo -= _cantidad;
        cout << "Retiro de " << _cantidad << " exitosa" << endl;
    } else{
        cout << "El monto a cargar excede el saldo de la cuenta." << endl;
    }
}

int Cuenta::obtenerSaldo(){
    return saldo;
}

int main() {

    Cuenta c1(-5);
    Cuenta c2(500);

    cout << "Su saldo es(c1): " << c1.obtenerSaldo() << endl;
    cout << "Su saldo es(c2): " << c2.obtenerSaldo() << endl;

    c1.agrega(5);
    c2.agrega(3000);

    cout << "Su saldo es(c1): " << c1.obtenerSaldo() << endl;
    cout << "Su saldo es(c2): " << c2.obtenerSaldo() << endl;

    c1.retira(100);
    c2.retira(1500);


    cout << "Su saldo es(c1): " << c1.obtenerSaldo() << endl;
    cout << "Su saldo es(c2): " << c2.obtenerSaldo() << endl;


    return 0;
}
