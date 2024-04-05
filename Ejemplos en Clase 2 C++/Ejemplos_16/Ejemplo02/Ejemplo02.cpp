// Ejemplo02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "funcione_02.h"

int main()
{
    int op = 0;

    do
    {
        op = menu();
        switch (op)
        {
        case 1:
            escribirEnArchivo();
            break;
        case 2:
            leerEnArchivo();
            break;
        case 3:
            modificarArchivo();
            break;
        case 4:
            manipuladoresES();
            break;
        default:
            system("cls");
            op = 5;
            cout << "\n\nGracias por utilizar el programa de manejo de archivos\n\n";
            system("pause");
            break;
        }

    } while (op != 5) ;
    return 0;

}
