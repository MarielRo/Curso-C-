/*
Mariel
fecha Modificacion : 24 / 11 / 2022
Ejemplo de matrices convencionales
Menu que realiza varias opciones.
*/

#include <iostream>
#include <array>
#include "FuncionesEj03.h"



using namespace std;

int main()
{
    int option;
    int arreglo[10] = {}; //Vector tradicional
    int arregloCompleto,menorA, numbers,suma,dupli;
    do
    {
        cout << "\t*********MENU********\n";
        cout << "\tDigite la opcion que desea: ";
        cout << "\n\t1-Mostrar Valor mas Pequeño: \n\t2-Mostrar Suma posciciones Impares: "
            "\n\t3-Mostrar valores pares duplicados: \n\t4-Salir:\n";
        cin >> option;
        if (cin.fail())
            cout << "Valor ingresado incorrecto";
        switch (option)
        {
        case 1:
            arregloCompleto = llenarArreglo(arreglo);

            //Imprime el arreglo 
            for (int i : arreglo)  //Forma corta del for para arrays
            {
                cout << "[" << i << "]";
            }
            menorA = determinarMenor(arreglo);
            cout << "\n\tEl valor menor del arreglo es el: " << menorA << "\n\n";
            system("pause");
            system("cls");
            break;

        case 2:

            arregloCompleto = llenarArreglo(arreglo);

            suma = sumarImpares(arreglo);

            cout << "Arreglo: ";
            //Imprimir arreglo
            for (int i : arreglo)  //Forma corta del for para arrays
            {
                cout << "[" << i << "]";
            }
            cout << "\n\tEl valor de la suma de los elementos impares es de: " << suma << "\n\n";
            system("pause");
            system("cls");
            break;

        case 3:
            arregloCompleto = llenarArreglo(arreglo);
            cout << "Arreglo sin multiplicar valores: ";
            //Imprimir arreglo 
            for (int i : arreglo)  //Forma corta del for para arrays
            {
                cout << "[" << i << "]";
            }
            cout << "Arreglo con valores multiplicaddos: ";
            
            cout << "\n\tEl valor de los elementos pares duplicados es de: ";
            dupli = duplicarPares(arreglo);
            for (int i = 1; i < 11; i++)
            {
                cout << "[" << dupli << "]";
            }

            system("pause");
            system("cls");
            break;

        case 4:
            cout << "\tHaz salido del programa.";
            system("pause");
            system("cls");
            break;

        default:
            break;
        }

    } while (option != 4);

    return 0;
}

