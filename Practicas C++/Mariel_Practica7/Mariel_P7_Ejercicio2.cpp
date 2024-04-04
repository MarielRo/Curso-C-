/*
Mariel Rojas Sanchez
Fecha creacion: 23/11/2022
Fecha ultima modificacion: 24/11/2022
2.	Almacenar en un arreglo 10 números ingresados por el usuario, cada uno de los cuales debe estar entre 10 y 100.
A medida que se lea cada número, debe validarlo y almacenarlo en el arreglo 
sólo si no es el doble de un número previamente ingresado.
Después de llenar el arreglo debe mostrar los números almacenados.
*/
#include <iostream>
using namespace std;

int main()
{
	int arreglo[10];
	int number;
	arreglo[0] = 0; //Primera vuelta 
	
	
	for (int i = 0; i < 10; i++)
	{
		do
		{
			cout << "\n\tIngrese un numero entre 10 y 100: ";
			cin >> number;
			if (cin.fail())
				cout << "\tNumero ingresado invalido\n";
			else if (number < 10 || number > 100)
				cout << "\n\tNumero fuera de rango. \n\tIngrese un numero entre 10 y 100: ";
			//Primera vuelta siempre se guarda
			if (arreglo[0])
			{
				arreglo[0] = number;

				if (number = arreglo[i] * 2) //Segunda vuelta si hay que validar
				{
					cout << "\n\tNumero ingresado invalido, no puede ingresar numeros que sean el doble de numeros previamente ingresados.\n";
				}
				else
				{
					arreglo[i] = number;
				}
			}
			

		} while (number < 10 || number > 100); //|| number = (arreglo[i] * 2));

	}
	for (int i = 0; i < 10; i++)
	{
		cout << "[" << arreglo[i] << "] ";
	}
	
	system("pause");
	return 0;

}

