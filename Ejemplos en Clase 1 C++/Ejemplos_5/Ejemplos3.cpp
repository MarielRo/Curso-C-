/*
  Mariel Rojas Sanchez 
  Fecha creacion: 15/11/2022

  Numeros pares e impares
*/

#include <iostream>
using namespace std;


int main()
{
	int num;
	cout << "\t Digite un numero para verificar si es par, impar o cero\n";
	cin >> num;
	if (num  ==  0)
	{
	cout << "\t El numero ingresado es Cero \n";
	}
	else if (num % 2 == 0)
	{
		cout << "\t El numero ingresado es Par \n";
	}
	else
	{
		cout << "\t El numero ingresado es Impar \n";
	}
	


}
