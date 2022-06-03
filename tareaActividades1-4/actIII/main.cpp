#include <iostream>
#include "Cuenta.h"

using namespace std;

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
