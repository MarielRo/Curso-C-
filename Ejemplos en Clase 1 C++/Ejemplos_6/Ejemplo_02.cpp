/*
INA
Estudiante:Mariel Rojas
Fecha Modificacion: 15/11/2022

Calculadora

*/

#include <iostream>
#include <math.h>
using namespace std;


int main()
{
	int option;
	int number1, number2,result;
	cout << "\tCalculadora Basica\n";
	cout << "\t Digite la opcion deseada: \n \t[1].SUMAR \n \t[2].RESTAR \n \t[3].MULTIPLICAR \n \t[4].DIVIDIR \n \t[5].ELEVAR \n \t[6].SALIR \n";
	cin >> option ;
	



	switch (option)
	{
	case 1:
		cout << "\tOpcion de Sumar \n";
		cout << "\tDigite el primer numero: ";
		cin >> number1;
		cout << "\tDigite el segundo numero: ";
		cin >> number2;
		if (number1 > 0 && number1 < 101 && number2 > 0 && number2 < 101)
		{
			result = number1 + number2;
			cout << "\tEl resultado de la suma es de: " << result;
		}
	
		break;
	case 2:
		cout << "\tOpcion de Restar\n";
		cout << "\tDigite el primer numero: ";
		cin >> number1;
		cout << "\tDigite el segundo numero: ";
		cin >> number2;
		if (number1 > 0 && number1 < 101 && number2 > 0 && number2 < 101)
		{
			result = number1 - number2;
			cout << "\tEl resultado de la resta es de: " << result;
		}
		break;


	case 3:
		cout << "\tOpcion de Mutiplicar\n";
		cout << "\tDigite el primer numero: ";
		cin >> number1;
		cout << "\tDigite el segundo numero: ";
		cin >> number2;
		if (number1 > 0 && number1 < 101 && number2 > 0 && number2 < 101)
		{
			result = number1 * number2;
			cout << "\tEl resultado de la multiplicacion es de: " << result;
		}
		
		break;
	case 4:
		cout << "\tOpcion de Dividir\n";
		cout << "\tDigite el primer numero: ";
		cin >> number1;
		cout << "\tDigite el segundo numero: ";
		cin >> number2;
		if (number1 > 0 && number1 < 101 && number2 > 0 && number2 < 101)
		result = number1 / number2;
		cout << "\tEl resultado de la Division es de: " << result;
		break;
	case 5:
		cout << "\tOpcion de Elevar\n";
		cout << "\tDigite el primer numero: ";
		cin >> number1;
		cout << "\tDigite el segundo numero: ";
		cin >> number2;
		if (number1 > 0 && number1 < 101 && number2 > 0 && number2 < 101)
		result = pow(number1, number2);
		cout << "\tEl resultado de la elevacion es de: " << result;
		break;
	case 6:
		cout << "\tHaz Salido del programa";
		break;
	default:
		cout << "\tNumero ingresado Invalido";
		break;
	}
	return 0;

}

