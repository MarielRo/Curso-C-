// Ejemplo01.cpp :
// 29 / 11 / 2022
//Clase 15 
//COLAS

#include <iostream>
#include <queue>
using namespace std;


int main()
{

    cout << "\tProceso de llenar la cola\n\n";

    queue<string> filaBanco;
    filaBanco.push("Mariel");
    cout << filaBanco.back() << " - ";
    
    filaBanco.push("Luna");
    cout << filaBanco.back() << " - ";
    filaBanco.push( "Vero");

    cout << filaBanco.back() << " - \n";
    while (!filaBanco.empty())
    {
        cout << "\tSale" << "[" << filaBanco.front() << "]\n";
        filaBanco.pop();
    }
    cout << "\n\n";
    return 0;
}
