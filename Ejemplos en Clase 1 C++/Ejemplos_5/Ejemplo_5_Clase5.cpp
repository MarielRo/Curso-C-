/*
Estudiante :Mariel Rojas
fecha creacion: 14/11/2022
Fecha de modificacion:14/11/2022
*/
#include <iostream>
using namespace std;


int main()
{
    int a = 5, b = 10, resp;
    cout << "\tInstruccion de salida\n";

    if (a > 9) {
        cout << "\t El  numero mayor es " << a << endl;
        resp = a + b;
        cout << "\t El valor de la suma es " << resp << endl;
    }
    else
    {
        cout << "El numero mayor es " << b << endl;
        resp = b-a;
        cout << "\t El valor de la resta es " << resp << endl;
    }
    cout << "\tOtra instruccion de salida\n";
}

