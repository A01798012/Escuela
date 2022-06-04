#include <iostream>
using namespace std;

class Puntos{
    public:
        int x,y;
        Puntos(int _x, int _y);

        Puntos operator+(Puntos pts){
            Puntos new_puntos(0,0);
            new_puntos.x = x + pts.x;
            new_puntos.y = y + pts.y;
            return new_puntos;
        }
};

Puntos::Puntos(int _x, int _y){
    x = _x;
    y = _y;
}

int main(){

    Puntos punto1(10,20);
    Puntos punto2(15,40);
    Puntos punto3(0,0);

    punto3 = punto1 + punto2;
    cout << punto3.x << endl;
    cout << punto3.y << endl;
    return 0;
}