// Ejemplo_04 Clase 06
// Mariel Rojas
// Fecha Modificcion: 15/11/2022

#include <iostream>
using namespace std;


int main()
{
	int num1, num2, suma;
	char continuar = 'N';
	do
	{
		cout << "\tEscriba el primer numero: ";
		cin >> num1;
		cout << "\tEscriba el segundo numero: ";
		cin >> num2;
		suma = num1 + num2;
		cout << "\tLa suma es: \t\t\t" << suma << endl;
		cout << "\tDesea realizar otra suma?  (S / N)";
		cin >> continuar;
	} while (toupper(continuar) == 'S');

	return 0;
}


