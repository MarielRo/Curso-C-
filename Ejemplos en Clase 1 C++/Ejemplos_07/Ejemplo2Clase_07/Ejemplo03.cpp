// Ejemplo03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
    cout << "\n\n\n\n";
    cout << "\t\a Alerta de Campana\n";
    cout << "\t\b Retroceso\n";
    cout << "\n\n Nueva Linea\n";
    cout << "\t\t Tabulador \n";
    cout << "\n\t\Diagonal invertida \n";
    cout << "\t\?Interrgogacion \n";
    cout << "\t\'Apostrofe\n";
    cout << "\t\"comillas\"\n";
    cout << "\n\n\n\n";

    // Tabuladores 
    cout << "\tA\tTexto1\t\t\tmensaje1" << endl;
    cout << "\tB\tTexto2\t\t\tmensaje2" << endl;

    //Caracteres de escape 
    cout << "Este mensaje contiene \"Comillas\" y \'Apostrofe\'," << endl;
    cout << "incluso un signo de pregunta \? y una diagonal inversa \\";

}

