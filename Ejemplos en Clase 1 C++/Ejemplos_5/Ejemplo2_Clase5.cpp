/*
Estudiante:Mariel Rojas 
Fecha creacion:11/14/2022
*/

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "\t Ingrese un numero: ";
    cin >> num;
    if (num < 0) 
    {
        cout << "\t El numero es negativo ";
    }
    else if (num >=0 && num <=10)
    {
        cout << "\t El numero se encuentra entre 0 y 10 ";
    }
    else if (num >= 11 && num <= 20)
    {
        cout << "\t El numero se encuentra entre 11 y 20 ";
    }
    else
    {
        cout << "\t El numero es mayor a 20";
    }

    return 0;

}

