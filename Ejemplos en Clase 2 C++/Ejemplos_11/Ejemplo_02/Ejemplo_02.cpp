/*
Mariel
fecha Modificacion : 24 / 11 / 2022
Ejemplo de matrices convencionales
Muestre el arreglo antes y después de ordenarse llamando a la función de mostrar en pantalla
*/

#include <iostream>
#include <array>
#include "FuncionesEj02.h"
using namespace std;


int main()
{
    array<int, 12>arreglo;
	int numbers;
	for (int i = 0; i < arreglo.size(); i++)
	{
		cout << "Digite el valor " << i << " del arreglo:  ";
		cin >> numbers;
		arreglo[i] = numbers;
	}
	cout << "\n\nArreglo sin Ordenar: ";
	int imprime = imprimirArray(arreglo);

	cout << "\n\nArreglo Ordenado: ";
	int imprimeOrdenado = ordenarArray(arreglo);

    return 0;
}
