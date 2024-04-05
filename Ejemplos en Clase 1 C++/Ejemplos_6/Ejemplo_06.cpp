// Ejemplo_06 
// Clase 06
// Mariel Rojas 
// Fecha Creacion: 15/11/2022
// Valores impares
//

#include <iostream>
using namespace std;


int main()
{
	int number,i,sum=0;

			do
			{
				cout << "\tIngrese un valor entero, impar comprendido entre 1 y 19: "; //Solicita un numero
				cin >> number;

				if (cin.fail()) //Determina que no se ingresen letras 
				{
					cout << "\tError al ingresar el valor\n";
				}
				else if (number > 1 && number < 19 && number % 2 > 0) // numero mayor a 1, menor a 19 y impar 
				{
					for (i = 1; i < number+1; i++) //Ciclo de 1 hasta el numero ingresado
					{
						if (i % 2 > 0) // Si de 1 al numero ingresado, hay un numero impar
						{
							sum += i; // Se suma el numero que es impar, mas la sumatoria anterior
						}
					}
					cout << "\tLa sumatoria de 1 hasta " << number << " es: " << sum << endl;
					sum = 0; //Se reinicia la sumatoria para que cuando vuelva a preguntar no se lleve la suma anterior
				}
				else
				{
				 cout << "\tNumero ingresado incorrecto. \n\tIngrese un numero valido: " ; //Si no es impar, es mayor a 1 y menor a 19, se imprime mensaje de error
				 cin >> number;
				}
					


			} while (number > 1 && number < 19 && number % 2 > 0); //Se repide hasta que se digite un numero valido

		return 0;

}

