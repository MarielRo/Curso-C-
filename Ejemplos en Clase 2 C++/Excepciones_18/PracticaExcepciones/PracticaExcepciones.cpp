// PracticaExcepciones
// 08 / 12 / 2022
//Mariel Rojas Sanchez
//Programa que se encarga del manejo de algunos errores



#include "funciones.h"
#include <cmath>



int main()
{
    int numeroEntero, menu,division,raiz,elevar;


	
	try
	{
		cout << "\tDigite un Numero entero: ";
		cin >> numeroEntero;
		if (cin.fail()) // Si se ingresa una letra
		{ 
		throw 3; //Ex 3
		}
		else if (numeroEntero == 0) // Si se divide por cero
		{
			throw 1;
		}
		else if (numeroEntero < 0) // Si se saca la raiz a un numero negativo
		{
			throw 2;
		}
		
		else
		{
			menu = mostrarMenu(); //Menu

			switch (menu)
			{
			case 1:
				division = numeroEntero / 20;
				cout << "La division de 20 entre " << numeroEntero << " es igual a: " << division << "\n\n";
				break;

			case 2:
				raiz = sqrt(numeroEntero);
				cout << "La raiz cuadrada de " << numeroEntero << " es " << raiz << "\n\n";
				break;
			case 3:
				elevar = pow(numeroEntero, 2);
				cout << "El numero " << numeroEntero << " elevado al cuadrado es " << elevar << "\n\n";
				break;
			case 4:
				cout << "Haz salido del programa";
			default:
				break;
			}
		}
	}
	catch (int ex)
	{
		if (ex == 1) cout << "\nError a Dividir un numero por cero\n\n";
		else if (ex == 2) cout << "\nError al sacar la raiz cuadrada de un numero negativo\n\n";
		else if (ex == 3) cout << "\nEl dato ingresado no es un numero\n\n";
	}
    return 0;

}

