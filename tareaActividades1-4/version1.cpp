
#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
using std::cout;
using std::cin;

class Circulo{
    private:
        double radio;
    public:
        void pideRadio(){
            cout << "Dame el radio: ";
            cin >> radio;
        }

        double circ_area(){
            return M_PI * pow(radio, 2);
        }
        double circ_perimetro(){
            return M_PI * radio * 2;
        }
};

int main(){

    Circulo cir;
    Circulo cir2;
    cir.pideRadio();
    std::cout << "El area es: " << cir.circ_area() << std::endl;
    std::cout << "El perimetro es: " << cir.circ_perimetro() << std::endl;

    cir2.pideRadio();
    std::cout << "El area es: " << cir2.circ_area() << std::endl;
    std::cout << "El perimetro es: " << cir2.circ_perimetro() << std::endl;


    return 0;
}
