#pragma once
using namespace std;
#include <iostream>


int mostrarMenu()
{
	int option; //Se declara variable de opcion
	cout << "\tDigite la opci\242n deseada:\n\t ";
	cout << "\t1) Dividir el n�mero 20 entre el n�mero ingresado. \n\t";
	cout << "\t2) Obtener la ra�z cuadrada del n�mero ingresado.\n\t";
	cout << "\t3) Elevar al cuadrado el n�mero ingresado.\n\t";
	cout << "\t4) Salir.\n\t";
	cin >> option; //Se recibe la variable

	if (cin.fail()) //Se valida que no ingrese valores invalidos
		cout << "\tValor ingresado incorrecto.\n\t Digite un n\243mero valido.";
	system("cls"); // Limpia pantalla
	return option; //Se retorna la opcion digitada

}