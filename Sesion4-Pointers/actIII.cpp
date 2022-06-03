#include <iostream>
#include <string>

using namespace std;

int main(){


    char str[]="Hola Mundo";
    char* pc=str;

    cout << str[0] << " " << *pc << " " << *(pc + 5) << endl;
    pc = pc + 2;
    cout << *pc << " " << *(pc + 5) << " " << *(pc + 6) << endl;


    return 0;
}