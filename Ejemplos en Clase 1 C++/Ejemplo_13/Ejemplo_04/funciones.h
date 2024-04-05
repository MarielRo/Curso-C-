#pragma once
#include<iostream>
#include <string>
#include "definicionTipos.h"

void llenarArreglo(EstructuraSalario pArreglos[])
{

	for (int i = 0; i < 2; i++)
	{
		cout << "\n\tIngrese su Nombre Completo: ";
		getline(cin, pArreglos[i].nombreCompleto);

		cout << "\n\tIngrese su salario por hora: ";
		cin >> pArreglos[i].SalarioPorHora;

		cout << "\n\tIngrese la cantidad de horas laboradas: ";
		cin >> pArreglos[i].CantHorasLab;

		cout << "\n\tIngrese la cantidad de horas extra laboradas: ";
		cin >> pArreglos[i].CantHorasExtraLab;
		cin.ignore();
	}
}

void calcularSalarioTotal(EstructuraSalario pArreglos[]) 
{
	for (int i = 0; i < 2; i++)
	{

		pArreglos[i].SalarioTotal = ((pArreglos[i].SalarioPorHora) * (pArreglos[i].CantHorasLab))
			+ ((pArreglos[i].SalarioPorHora * 1.5) * (pArreglos[i].CantHorasExtraLab));
	}
}

void mostrarRegistro(EstructuraSalario pArreglo[])
{
	for (int i = 0; i < 2; i++)
	{
		cout << "\n\n\t ***Salario de cada uno de los trabajadores";
		cout << "\n\tNombre Completo:\t\t " << pArreglo[i].nombreCompleto;
		cout << "\n\tSalario por Hora:\t\t " << pArreglo[i].SalarioPorHora;
		cout << "\n\tCantidad de horas laboradas:\t " << pArreglo[i].CantHorasLab;
		cout << "\n\tCantidad de horas extra laboradas:\t " << pArreglo[i].CantHorasExtraLab;
		cout << "\n\tSalario total:\t\t " << pArreglo[i].SalarioTotal;
	}
	cout << "\n\n";
	system("pause");
}




