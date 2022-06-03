#include "Figura.h"
#include <iostream>

using namespace std;

int main(){

    Figura* r1;
    Figura* t1;

    r1 = new Rectangulo();
    t1 = new Triangulo();

    r1 -> obtener(4,5);
    t1 -> obtener(4,5);

    cout << r1 -> area() << " <- Area del rectangulo"<< endl;
    cout << t1 -> area() << " <- Area del triangulo" << endl;

    return 0;
}