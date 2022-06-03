#include <iostream>

using namespace std;

int main(){

    int n;
    int *mayor;

    cout << "Ingresa una cantidad de numeros: ";
    cin >> n;

    int elementos[n];
    for(int i = 0; i < n; i++){
        cin >> elementos[i];
    }

    mayor = &elementos[0];

    for(int i = 0; i < n - 1 ; i++){
        if(elementos[i + 1] > *mayor){
            mayor = &elementos[i + 1];
        }
    }

    cout << "El valor mas grande en el arreglo es: " << *mayor << endl;

    return 0;
}