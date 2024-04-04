/* Instituto Nacional de Aprendizaje
* Mariel Rojas Sanchez
* Fecha creacion: 18 / 11 / 2022
* Fecha Ultima modificacion: 18 / 11 / 2022
1.	Hacer un programa en C++ que lea n números y determine cuál es el mayor,
el menor y el promedio de los números ingresados.

*/

#include <iostream>
using namespace std;


int main() //Inicio 
{
	int n, large=0, small=0, total = 0; //Declaracion de variables
	float number, average; //Con decimales

	cout << "Digite la cantidad de numeros que quiere agregar: ";
	cin >> n;
	if (cin.fail())
	{
		cout << "Dato ingresado Invalido";
	}
	else
	{
		for (int i = 1; i <= n; i++) //Desde 1 hasta el numero ingresado
		{
			cout << "Digite un numero para determinar cual es el mayor, menor y el promedio : ";
			cin >> number;
			if (cin.fail())
			{
				cout << "Dato ingresado Invalido";
			}
			total += number; //Se va sacando la suma de todos los numeros para luego averiguar el promedio
			if (i == 1) 
			{
				large = number; //Se inicializa todos los numeros como el numero ingresado 
				small = number;
			}
			else if (number > large) // Si el nuevo numero es mayor que el que habia anteriormente 
			{
				large = number; // El numero nuevo sera el mayor
			}
			else if (number < small) // Compara los menores
			{
				small = number; // Iguala al numero menor encontrado con la variable menor.

			}
		} //Fin for

		average = total / n; //Promedio = suma de todos los numeros dividido entre la cantidad de numeros
		cout << "El numero mayor ingresado es el: " << large << endl;
		cout << "El numero menor ingresado es el: " << small << endl;
		cout << "El promedio total es: " << average << endl;

		return 0;


	}



}//Fin 
