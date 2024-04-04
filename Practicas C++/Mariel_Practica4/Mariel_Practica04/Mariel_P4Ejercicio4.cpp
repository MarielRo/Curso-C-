/*Instituto Nacional de Aprendizaje
* Mariel Daniela Rojas Sanchez
* Módulo de progamación estructurada.
* Escriba un programa que pregunte al usuario un puntaje, y muestre como resultado la cantidad de 
combinaciones de dados con las que se puede obtener ese puntaje.
Permita al usuario jugar cuantas veces lo desee. 
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int i,puntuacion,combinaciones,suma;
	char salir = 'N';

	do
	{ 
		cout << "Digite la puntuacion del 2 al 12 al lanzar los dos dados";
		cin >> puntuacion;
		if (cin.fail())  //Valida que no se ingrese una letra
		{
			cout << "Dato ingresado incorrecto";
		}
		else if (puntuacion < 2 && puntuacion > 12) //Si el salario es mennor a cero
		{
			cout << "Dato ingresado incorrecto, la puntuacion no se encuentra dentro del rango";
		}
		else
		{
			for (int i = 1; i < 6; i++)
			{
				for ( int j = 6; j >= 1; j--)
				{
					suma = j + i;
					if (suma = combinaciones)
					{
						cout << j << i << "=" << combinaciones;
					}
				}
			}
		}
		cout << "Desea salir? \n Digite S, si desea salir, o N para continuar";
		cin >> salir;

	} while (toupper(salir) == 'S');

	return 0;

}
