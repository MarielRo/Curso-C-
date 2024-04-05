/*Instituto Nacional de Aprendizaje
* Mariel Daniela Rojas Sanchez
Fecha Creacion: /16/11/2022
Fecha ultima modificacion: 16/11/2022
//
*/

#include <iostream>
using namespace std;

int main()
{
	int numberF;
	double factorial = 1;
	cout << "\tCalculo del factorial\n";

		cout << "\tIngrese un numero del 0 al 10 para calcularle su factorial: ";
		cin >> numberF;
		if (cin.fail()) //Valida que unicamente se ingresen numeros
		{
			cout << "Numero ingresado invalido";
		}
		else if (numberF = 0)
		{
			cout << "\tEl factorial del " << numberF << " es de: " << 1 << "\n";
		}
		else if (numberF > 0 && numberF <= 10)
		{
			for (int i = 1; i <= numberF; i++) //Va desde 1 hasta el numero ingresado
			{
				factorial *= i; // N!= N * N-1  * N-2 * N-3    5!=1*2*3*4*5 = 120 //Considerar si el numero ingresado 
			}
			cout << "\tEl factorial del " << numberF << " es de: " << factorial << "\n";
		}
		else
		{
			cout << "\tNumero ingresado fuera de rango\n";
			cout << "\tIngrese un numero dentro del 0 al 10: ";
			cin >> numberF;
		}
		return 0;
}
