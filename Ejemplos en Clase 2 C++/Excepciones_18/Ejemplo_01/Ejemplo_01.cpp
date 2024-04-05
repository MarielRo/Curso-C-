/*  08/12/2022
* Mariel Rojas
* Manejo de exepciones

*/

#include <iostream>
using namespace std;


int main()
{
    int dividendo = 0, divisor = 0, resultado;

    try
    {
        cout << "\n\tEscriba el dividendo: ";
        cin >> dividendo;
        cout << "\n\tEscriba el dividsor: ";
        cin >> divisor;
        if (divisor == 0)
        {
            throw 12;
        }
        else
        {
            resultado = dividendo / divisor;
            cout << "El resultado de la division es " << resultado;
        }
    }
    catch (int e)
    {
        cout << "\n\tSe ha producido un error.Se introdujo cero como divisior\n\n";
        cout << "\nEl numero de la excepcion es " << e << "\n\n";

    }
    
    system("pause");
    return 0;
}

