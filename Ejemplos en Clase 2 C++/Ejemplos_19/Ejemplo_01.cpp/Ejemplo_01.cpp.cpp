/*Mariel Rojas 
* 9 / 12 / 2022
* Clase 19
* Sobrecarga de funciones : Capacidad de tener dos o mas funciones con el mismo nombre pero funcionalidad diferente
* Ejercicio con varias funciones que se encargan de realizar una suma
*/

#include <iostream>
#include "funciones.h"

int main()
{
    int option = 0, numero1, numero2, numero3, numero4;
	do
	{
		option = menu();

		switch (option)
		{
		case 1 :
			cout << "\n\tEscriba el n\243mero 1:\t"; 
			cin >> numero1;
			cout << "\n\tEscriba el n\243mero 2:\t";
			cin >> numero2;
			cout << "\n\tEl resultado de la suma es:  " << sumar(numero1, numero2);
			break;

		case 2:
			cout << "\n\tEscriba el n\243mero 1:\t";
			cin >> numero1;
			cout << "\n\tEscriba el n\243mero 2:\t";
			cin >> numero2;
			cout << "\n\tEscriba el n\243mero 3:\t";
			cin >> numero3;
			cout << "\n\tEl resultado de la suma es:  " << sumar(numero1, numero2,numero3);
			break;

		case 3:
			cout << "\n\tEscriba el n\243mero 1:\t";
			cin >> numero1;
			cout << "\n\tEscriba el n\243mero 2:\t";
			cin >> numero2;
			cout << "\n\tEscriba el n\243mero 3:\t";
			cin >> numero3;
			cout << "\n\tEscriba el n\243mero 4:\t";
			cin >> numero4;
			cout << "\n\tEl resultado de la suma es:  " << sumar(numero1, numero2, numero3,numero4);
			break;

		default:
			system("cls");
			option = 4;
			cout << "\n\n\tGracias por utilizar el sistema\n\n\t";
			break;
		}

		cout << "\n\n\t";
		system("pause");
	} while (option !=4);

	return 0;

}
