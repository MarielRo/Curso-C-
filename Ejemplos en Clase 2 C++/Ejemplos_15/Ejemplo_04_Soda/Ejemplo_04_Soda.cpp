/*
* Mariel Rojas
* Fecha creacion : 29 / 11 /2022
* Programa que utilizando colas, simula la fila de una soda.
*/
#include "Funciones.h"

int main()
{
	int option, menu;
	queue<string> filaSoda;
	string name;

	do
	{   //Funcion que muestra el menu
		menu = mostrarMenu(option); 

		switch (option)
		{
		case 1:
			cout << "\t1)	Registrar el ingreso de un cliente.\n";
			cout << "\tIngrese el nombre del cliente: ";
			cin >> name;
			registrarCliente(filaSoda,name);
			break;

		case 2:
			cout << "\t2)  Atender un cliente (sacar de la fila de espera)\n\t";
			atenderCliente(filaSoda);
			break;

		case 3:
			cout << "\t3)  Indicar si hay clientes esperando en la fila\n\t";
			indicarFilaEspera(filaSoda);
			break;


		case 4:
			cout << "\t4)  Mostrar el tamaño de la lista de espera\n\t";
			mostrarTamanio(filaSoda);
			break;

		case 5:
			cout << "\t5)  Mostrar el nombre del siguiente cliente a atender.\n\t";
			cout << "\t El siguiente por atender es: ";
			cout << filaSoda.front() << "\n\n";
			break;

		case 6:
			cout << "Haz salido del programa";
			break;

		default:
			cout << "Valor ingresado incorrecto";
			break;
		}
	} while (option != 6);

	return 0;
}
