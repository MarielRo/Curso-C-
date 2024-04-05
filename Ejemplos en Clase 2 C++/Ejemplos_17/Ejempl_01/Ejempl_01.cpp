// Ejempl_01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "funciones.h"

int main()
{
	string vNombre;
	int op = 0;


	do
	{
		op = menu();

		switch (op)
		{
		case 1:
			guardarEstudiante();
			cout << "\n\t *** Datos almacenados correctamente ***";
			system("pause");
			break;
		case 2:
			system("cls");
			agregarEstudiantes();
			cout << "\n\t *** Datos agregados correctamente ***";
			system("pause");
			break;
		case 3:
			system("cls");
			leerRegistro();
			system("pause");
			break;
		case 4:
			system("cls");
			cout << "\n\t El archivo tiene " << tamanioArchivo() << "registros\n";
			system("pause");
			break;
		case 5:
			system("cls");
			cout << "\n\t *** Digite el nombre a buscar: ***";
			cin >> vNombre;
			buscarRegistroyMostrar(vNombre);
			cout << "\n\n";
			system("pause");
			break;

		default:
			system("cls");
			op == 6;
			cout << "\n\t Gracias por utilizar el programa de archivos binarios";
			system("pause");
			break;
		}
	} while (op != 6);
	return 0;
}

