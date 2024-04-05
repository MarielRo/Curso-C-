// Ejemplo_03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
	int i = 1, cantPares = 0;


	while (i <= 20)
	{
		if ((i % 2) == 0)
		{
			cantPares++;
			cout << "Numeros par: " << i << endl;
		}
		i++;
	}

	cout << "\n Cantidad de total de numeros pares: " << cantPares <<  endl;
	return 0;


}
