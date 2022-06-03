#include <iostream>

using namespace std;

class Mamifero{
    public:
        virtual void mover();
        void sonido();

};

void Mamifero::mover(){
    cout << "\nEl mamifero esta en movimiento..." << endl;
}

void Mamifero::sonido(){
    cout << "\nEl mamifero hace ruido..." << endl; 
}

class Cebra: public Mamifero{
    public:
        void mover();
        void sonido();
};

void Cebra::mover(){
    cout << "\nLa cebra esta en movimiento" << endl;
}

void Cebra::sonido(){
    cout << "\nLa Cebra hace ruido..." << endl;
}

int main(){

//    Cebra miCebra;
//    miCebra.mover();

    Mamifero *ptrCebra;
    ptrCebra = new Cebra;

    ptrCebra -> mover();
    ptrCebra -> sonido();
    
    
    return 0;
}