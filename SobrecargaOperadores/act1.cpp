#include <iostream>
using namespace std;

class Fraccion{
    public:
        int numerador, denominador;
        Fraccion(int _numerador, int _denominador){
            numerador = _numerador;
            denominador = _denominador;
        }
        Fraccion(){}

        Fraccion operator-(Fraccion fr){
            Fraccion res;
            if(denominador == fr.denominador){
                res.numerador = numerador - fr.numerador;
                res.denominador = denominador; 
            }else{
                int multiplo = denominador * fr.denominador;
                res.numerador = (multiplo / denominador * numerador) - (multiplo / fr.denominador * fr.numerador);
                res.denominador = multiplo;
            }

            return res;
        }
};

int main(){

    Fraccion f1(71,9);
    Fraccion f2(79,17);
    Fraccion f3;

    f3 = f1 - f2;

    cout << f3.numerador << endl;
    cout << f3.denominador << endl;

    return 0;
}
