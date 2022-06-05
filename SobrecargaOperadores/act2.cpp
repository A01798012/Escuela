#include <iostream>

using namespace std;

class Complejo{
    public: 
        float real, complejo;
        Complejo(float _real, float _complejo);
        Complejo();

        Complejo operator+(Complejo c){
            Complejo new_complejo(0,0);
            new_complejo.real = real + c.real;
            new_complejo.complejo = complejo + c.complejo;
            return new_complejo;
        }
        Complejo operator-(Complejo c){
            Complejo new_complejo(0,0);
            new_complejo.real = real - c.real;
            new_complejo.complejo = complejo - c.complejo;
            return new_complejo;
        }
        Complejo operator*(Complejo c){
            Complejo new_complejo(0,0);
            new_complejo.real = real*c.real - complejo*c.complejo;
            new_complejo.complejo = real*c.complejo + complejo*c.real; 
            return new_complejo;
        }
        Complejo operator/(Complejo c){
            Complejo new_complejo(0,0);
            new_complejo.real = (real*c.real + complejo*c.complejo) / ((c.real * c.real) + (complejo * complejo));
            new_complejo.complejo = (-(real*c.complejo) + complejo*c.real) / ((c.real * c.real) + (complejo * complejo));
            return new_complejo;
        }
        Complejo operator^(float n){
            Complejo new_complejo(0,0);
            new_complejo.real = real*n;
            new_complejo.complejo= complejo*n;
            return new_complejo;
        }

};

Complejo::Complejo(float _real, float _complejo){
    real = _real;
    complejo = _complejo;
}
Complejo::Complejo(){}

int main(){

    Complejo z1(1,3);
    Complejo z2(3,4);
    Complejo res;
    res = z1 + z2;
    cout << res.real << " + " << res.complejo << "i" << endl;
    res = z1 - z2;
    cout << res.real << " + " << res.complejo << "i" << endl;
    res = z1 * z2;
    cout << res.real << " + " << res.complejo << "i" << endl;
    cout << "----------------------------------------------------------------" << endl;
    res = z1 / z2;
    cout << res.real << " + " << res.complejo << "i" << endl;
    res = z1^1.5;
    cout << res.real << " + " << res.complejo << "i" << endl;



    return 0;
}