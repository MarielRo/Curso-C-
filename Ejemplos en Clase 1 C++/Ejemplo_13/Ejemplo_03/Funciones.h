#pragma once
#include<iostream>
#include "DefinicionTipos.h"

void llenarArreglo(vehiculo pArreglo[])
{

	for (int i = 0; i < 5; i++)
	{
		cout << "\n\tIngrese la marca del vehiculo: ";
		cin >> pArreglo[i].marca;

		cout << "\n\tIngrese la placa del vehiculo: ";
		cin >> pArreglo[i].placa;

		cout << "\n\tIngrese el tipo de combustiple del vehiculo: ";
		cin >> pArreglo[i].combustible;

		cout << "\n\tIngrese el a\244o del vehiculo del vehiculo: ";
		cin >> pArreglo[i].anio;
	}
}


void mostrarRegistro(vehiculo pVehiculo[])
{
	for (int i = 0; i < 5; i++)
	{
		cout << "\n\n\t ***Contenido de la variable A (Stuct)";
		cout << "\n\tMarca:\t\t " << pVehiculo[i].marca;
		cout << "\n\tPlaca:\t\t " << pVehiculo[i].placa;
		cout << "\n\tCombustible:\t\t " << pVehiculo[i].combustible;
		cout << "\n\tA\244:\t\t " << pVehiculo[i].anio;
	}
	cout << "\n\n";
	system("pause");
}




