// Ejemplo04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
    double num1 = 1234567890.18555251554;
    int num2 = 1710;
    cout << "\n El valor de la variable num1 es: " << num1;
    cout << "\n El valor de la variable num1 usando fixed es: " << fixed << num1;

    // Se sigue aplicando el fixed de aqui en adelante 
    cout << "\n El valor de la variable num1 con un decimal: " <<setprecision(1) << num1;
    cout << "\n El valor de la variable num1 con 3 decimal: " << setprecision(3) << num1;

    cout << "\n El valor de la variable num2 en decimal es: " << dec << num2;
    cout << "\n El valor de la variable num2 en hexadecima es: " << hex << num2;
    cout << "\n El valor de la variable num2 en decimal es: " << oct << num2;

    return 0;

}
