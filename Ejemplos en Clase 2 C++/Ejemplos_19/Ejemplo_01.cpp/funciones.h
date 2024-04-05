#pragma once
#include <iostream>
using namespace std;

int menu()
{
	int option = 0;
	system("cls");
	cout << "\n\n\t---Sobrecarga Funciones---\n";
	cout << "\n\t1- Sumar dos n\243meros";
	cout << "\n\t2- Sumar tres n\243meros";
	cout << "\n\t3- Sumar cuatro n\243meros";
	cout << "\n\t4-Salir";
	cin >> option;
	return option;

}

//Unicamente hace dos sumas
int sumar(int num1, int num2) 
{
	int resultado;
	resultado = num1 + num2;
	return resultado;
}

//Hace tres sumas 
int sumar(int num1, int num2,int num3)
{
	int resultado;
	resultado = num1 + num2 + num3;
	return resultado;
}

//Hace cuatro sumas 
int sumar(int num1, int num2, int num3,int num4)
{
	int resultado;
	resultado = num1 + num2 + num3 + num4;
	return resultado;
}