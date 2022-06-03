#include <iostream>

using namespace std;

class Fecha{
    private:
        int month;
        int day;
        int year;
    public:
        Fecha(int _month,int _day,int _year);
        void setMonth(int _month);
        void setDay(int _day);
        void setYear(int _year);
        void mostrarFecha();
};

Fecha::Fecha(int _month, int _day, int _year){
    if (_month >= 1 & _month <= 12){
       month = _month;
    } else{
        month = 1;
    }
    day = _day;
    year = _year;
}

void Fecha::setMonth(int _month){
    if (_month >= 1 & _month <= 12){
       month = _month;
    } else{
        month = 1;
    }
}

void Fecha::setDay(int _day){
    day = _day;
}

void Fecha::setYear(int _year){
    year = _year;
}

void Fecha::mostrarFecha(){
    cout << month << "/" << day << "/" << year << endl;
}

int main(){

    Fecha f1(12, 21, 2022);
    Fecha f2(-1, 21, 2022);
    Fecha f3(15, 21, 2022);
    Fecha f4(1, 21, 2022);



    f1.mostrarFecha();
    f2.mostrarFecha();
    f3.mostrarFecha();
    f4.mostrarFecha();

    f2.setMonth(5);
    f2.setYear(2049);
    f2.setDay(15);
    f4.setMonth(10);
    cout << "------------" << endl;
    f1.mostrarFecha();
    f2.mostrarFecha();
    f3.mostrarFecha();
    f4.mostrarFecha();


    return 0;
}
