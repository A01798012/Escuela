#include <iostream>

using namespace std;

int main(){
    
    int a,b;
    int *ptrA;

    cout << "Introduce A: ";
    cin >> a;
    cout << "Introduce B: ";
    cin >> b;

    ptrA = &a;
    int *ptrB = &b;

    cout << "Valor de ptrA es: " << *ptrA << " almacenado en la direccion: " << &a << endl;

    cout << "Valor de ptrA es: " << *ptrB << " almacenado en la direccion: " << ptrB << endl;
    return 0;
}