/*
Mariel Rojas
02 Dic 2022
Ejercicio 03, matrices y archivos

*/
#include "Funciones03.h"


int main()
{
    int op = 0;

    do
    {
        op = menu();
        switch (op)
        {
        case 1:
            guardarArchivoMatriz();
            break;
        case 2:
           
            break;
        default:
            system("cls");
            op = 5;
            cout << "\n\nGracias por utilizar el programa de manejo de archivos\n\n";
            system("pause");
            break;
        }

    } while (op != 2);
    return 0;
}
