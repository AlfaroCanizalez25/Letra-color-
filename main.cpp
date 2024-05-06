#include <iostream>
using namespace std;

int main () {
    char letra;
    cout << "ingrese una letra mayuscula: ";
    cin >> letra;

    switch (letra){
        case 'R' : cout << "Es el color Rojo"; break;
        case 'Y' : cout << "Es el color Amarillo"; break;
        case 'B' : cout << "Es el color Azul"; break;
        case 'W' : cout << "Es el color Blanco"; break; 
        case 'K' : cout << "Es el color Negro "; break; 
        case 'C' : cout << "Es el color Cyan"; break; 
        case 'G' : cout << "Es el color Verde"; break;
        default : cout <<"No existe un color asociado a la letra ingresada."; break;    

    }
    }