// Ejemplo01.cpp :
// 29 / 11 / 2022
//Clase 15 pilas

#include <iostream>
#include <stack>
using namespace std;

int main()
{

    stack<char> pilaCaracteres; 
    //APILAR
    cout << "\tApilar pila\n\t";
    for (int i = 'A'; i <= 'Z'; i++)
    {
        pilaCaracteres.push(i);
        cout << "[" << pilaCaracteres.top() << "]";
    }
    //DESAPILAR
    while (!pilaCaracteres.empty())
    {
        cout << "[" << pilaCaracteres.top();
        pilaCaracteres.pop();

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
