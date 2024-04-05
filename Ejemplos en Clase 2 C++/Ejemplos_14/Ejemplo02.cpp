/*
* Mariel Daniela Roajas
* Colores
*/

#include <iostream>
#include <Windows.h>
using namespace std;
#define color SetConsoleTextAttribute
#define char_esc





int main()
{

    //Color de fondo y de letra
    system("color fa");
    cout << "\n\t Colores de las letras:\n ";
    system("pause");

    system("color 1E");
    cout << "\n\t Colores de las letras:\n ";
    system("pause");

    system("color 5A");
    cout << "\n\t Colores de las letras:\n ";
    system("pause");

    system("color 7B");
    cout << "\n\t Colores de las letras:\n ";
    system("pause");

    system("color fE");
    cout << "\n\t Colores de las letras:\n ";
    system("pause");




    // Seccion o una partee que yo imprimo 
    HANDLE colort = GetStdHandle(STD_OUTPUT_HANDLE);
    color(colort, 240); //Se utiliza esto 
    cout << "Colores Frase 1\n\n";

    color(colort, 244);
    cout << "Colores Frase 2\n\n";

    color(colort, 3);
    cout << "Colores Frase 3\n\n";

    system("pause");

    for (int i = 0; i < 255; i++)
    {
        color(colort, i);
        cout << "Colores Frase" << i << "\n\n";
    }










}

