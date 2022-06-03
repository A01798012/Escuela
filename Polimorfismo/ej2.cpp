#include <iostream>

#include <string>

using std::string;
using namespace std;

class Deportista{
    public:
        Deportista(string, int);
        virtual void mostrar();
    private:
        string nombre;
        int edad;
};

Deportista::Deportista(string _nombre, int _edad){
    nombre = _nombre;
    edad = _edad;
}

void Deportista::mostrar(){
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
}

class Atleta: public Deportista{
    public:
        Atleta(string, int, float);
        void mostrar();
    private:
        float ranking;
};

Atleta::Atleta(string _nombre, int _edad, float _ranking): Deportista(_nombre, _edad){
    ranking = _ranking;
}

void Atleta::mostrar(){
    Deportista::mostrar();
    cout << "Ranking: " << ranking << endl;
}

class Boxeador: public Deportista{
    public:
        Boxeador(string, int, string);
        void mostrar();
    private:
        string categoria;

};

Boxeador::Boxeador(string _nombre, int _edad, string _categoria): Deportista(_nombre, _edad){
    categoria = _categoria;
}

void Boxeador::mostrar(){
    Deportista::mostrar();
    cout << "Categoria: " << categoria << endl;
}


int main(){
    Deportista *vector[3];

    vector[0] = new Atleta("Flemon", 22, 9.95);
    vector[1] = new Boxeador("Jesus", 44, "Welter");

    vector[0] -> mostrar();
    vector[1] -> mostrar();

    return 0;
}