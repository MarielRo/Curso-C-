// Ejemplo_02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> miArreglo(10);
    int numero;
	try
	{
		numero = miArreglo.at(17);

	}
	catch (exception& e)
	{
		cout << "\n\tSe ha producido un error.\n\n";
		cerr << e.what() << "\n\n";


	}
    return 0;
}

