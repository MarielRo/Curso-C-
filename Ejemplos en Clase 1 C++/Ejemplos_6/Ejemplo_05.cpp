// Ejemplo_05 
// Clase 06
// Mariel Rojas 
// Fecha Creacion: 15/11/2022
//

#include <iostream>
using namespace std;


int main()
{
	int numbers;
	string contPositivos, contNegativos;


	do
	{
		cout << "\tIngrese varios valores, termine con 0:\n\t";
		cin >> numbers;

		if (numbers > 0)
		{
			contPositivos += "*";
		}
		if (numbers < 0)
		{
			contNegativos += "*";
		}
	} while (numbers!=0);

	cout << "Positivos: " << contPositivos << endl;
	cout << "Negativos: " << contNegativos << endl;




}

