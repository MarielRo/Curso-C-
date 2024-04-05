// Ejemplo06.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;


int main()
{
    string nombre = "", apellidos = "", direccion = "";
    cout << "\nEscriba sus dos nombres: ";
    getline(cin, nombre);
    cout << "\nEscriba sus dos apellios: ";
    getline(cin, apellidos);
    cout << "\nEscriba su direccion: ";
    getline(cin, direccion);

    cout << "Nombre: " << nombre << endl;
    cout << "Apellidos: " << apellidos << endl;
    cout << "Nombre: " << direccion << endl;

    return 0;


}
