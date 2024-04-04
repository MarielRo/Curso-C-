/*
Mariel Rojas Sanchez
Fecha creacion: 23/11/2022
Fecha ultima modificacion: 24/11/2022
Determinar si una palabra es panvocalica o no.
*/


//Librerias
#include <iostream>
#include <string>
#include "FuncionEj_5.h"
using namespace std;

//Inicio
int main()
{
    string word;
    string panvocalica;
    cout << "\n\tEste programa averigua si una palabra es Panvocalica o no\n\n";
    cout << "\tDigite una palabra:";
    cin >> word;

    panvocalica = esPanvocalica(word); //Llama a la funcion que averigua si es panvocalica o no
}

