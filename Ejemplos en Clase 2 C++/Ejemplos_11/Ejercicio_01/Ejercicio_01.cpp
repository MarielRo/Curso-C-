/*
Mariel
fecha Modificacion: 24/11/2022
Ejemplo de matrices convencionales 
*/




#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main()
{
    //declaracion de una magtriz de tipo convencional de 3filas por dos columnas
    int mTradicional[3][2] = { {1,2}, {11,12},{21,22} };

    //Declaracion de una matriz de 3filas x 2 columnas utilizando la clase array
    array<array<int,2>, 3> mConArray = {}; //vector de vectores  3x2 va primero las columnas




    cout << "Matriz de tipo convencional: ";

    for (int i = 0; i < 3; i++)
    {
        cout << "FILA" << i << "\t";
            for (int j = 0; j < 2; j++)
            {
                cout << "\t|\n" << mTradicional[i][j] << "\t";
            }
            cout << "\t|\n";
    }

    cout << "Matriz de tipo Array: ";

    for (int i = 0; i < 3; i++)
    {
        cout << "FILA" << i << "\t";
        for (int j = 0; j < 2; j++)
        {
            cout << "\t|\n" << mConArray[i][j] << "\t";
        }
        cout << "\t|\n";
    }
        return 0;



}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
