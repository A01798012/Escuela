#include <iostream>

using namespace std;

void intercambio(int *x, int *y);

int main(){

    int a = 1;
    int b = 2;


    cout << "\n a: " << a << "\t b: " << b << "\n";
    intercambio(&a, &b);

    cout << "\n a: " << a << "\t b: " << b << "\n";
    return 0;
}

void intercambio(int *x, int *y){
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;

}