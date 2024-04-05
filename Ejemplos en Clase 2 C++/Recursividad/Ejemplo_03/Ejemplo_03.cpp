/* Mariel Rojas
* 09 / 12 / 2022
* Recursividad
 Programar un algoritmo recursivo que permita invertir un número.  Ejemplo: Entrada: 123 Salida: 321
*/

#include <iostream>
using namespace std;


//Funcion que invierte un numero




int invertirNumero(int numero,int numInverso)
{
	if (numero > 0)
		return invertirNumero(numero / 10, numero % 10 + numInverso * 10);
	else
		return numInverso;
}



int main()
{
	system("cls");
	int numero, invertido;
	int numeroInvertido;

	do
	{
		cout << "\n\tEscriba un n\243mero para observarlo invertido: \n\t";
		cin >> numero;
		if (numero < 0)
		{
			cout << "Ingrese un numero entero positivo";
		}

	} while (numero<0); //Se pone lo que uno ocupa

	cout << "\tEl " << numero << " invertido es: " << invertirNumero(numero, 0) << "\n\n"; //Llama la fucion 
	return 0;
}

