/*Instituto Nacional de Aprendizaje
* Mariel Daniela Rojas Sanchez
* Módulo de progamación estructurada.
* Fecha creacion 11/21/22
* Funciones apartee .h
*/


#include <iostream>
#include "Funciones.h"

using namespace std;

int main()
{
    int num, respuesta;
    cout << "Digite un numero para calcularle su factorial";
    cin >> num;
    respuesta = factorial(num);
    cout << "El factorial de " << num << " es: " << endl;
    system("pause");

    return 0;
}

