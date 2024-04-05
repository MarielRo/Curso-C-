/*Instituto Nacional de Aprendizaje
* Mariel Daniela Rojas Sanchez
* Módulo de progamación estructurada.
* Fecha creacion 11/21/22
* Funcion con retorno y parametros
*/


#include <iostream>
using namespace std;
int funcionSuma(int num1, int num2); //Firma de prototipo


int main()
{
	int a = 10, b = 20, result;
	result = funcionSuma(a, b);
	cout << "El resultado de la suma es: "<< result << endl ;

	return 0;

}

int funcionSuma(int num1, int num2)
{
	return num1 + num2;

}