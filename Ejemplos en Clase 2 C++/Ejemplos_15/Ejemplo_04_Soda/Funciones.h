#pragma once
#include <iostream>
#include <queue>
using namespace std;



/// <summary>
/// Funcion que se encarga de imprimir las opciones del menu
/// </summary>
/// <param name="Vector llamado nombres"></param>
int mostrarMenu(int& option)
{
	cout << "\n\tBienvenidos a la soda \"Coma todo por 1000\"\n\n";
	cout << "\tDigite la opci\242n deseada:\n\t ";
	cout << "\t1)  Registrar el ingreso de un cliente.\n\t";
	cout << "\t2)  Atender un cliente (sacar de la fila de espera)\n\t";
	cout << "\t3)  Indicar si hay clientes esperando en la fila\n\t";
	cout << "\t4)  Mostrar el tamaño de la lista de espera\n\t";
	cout << "\t5)  Mostrar el nombre del siguiente cliente a atender.\n\t";
	cout << "\t6)  Salir del programa.\n\t";
	cin >> option;

	system("cls");
	return option;
}

/// <summary>
/// Funcion que inserta un nombre en la Cola
/// </summary>
/// <param name=" cola llamada filaSoda"></param>
/// <param name="nombre"></param>
void registrarCliente(queue<string> &filaSoda, string nombre)
{
	filaSoda.push(nombre);

	system("pause");
	system("cls");
}

void atenderCliente(queue<string> &filaSoda)
{

	if (!filaSoda.empty()) //Si la cola no esta vacia 
	{
		cout << "\t" << filaSoda.front() << "ha sido atendid@ \n";
		filaSoda.pop();
	}
	else
		cout << "\tNo hay clientes por atender\n\n";
	system("pause");
	system("cls");
}	


void indicarFilaEspera(queue<string> &filaSoda) 
{
	if (!filaSoda.empty())
	{
		cout << "Si hay clientes clientes en la fila";
	}
	else
		cout << "\tNo hay clientes por atender\n\n";
	system("pause");
	system("cls");
}

void mostrarTamanio(queue<string> &filaSoda)
{
	if (!filaSoda.empty())
	{
		cout << " El tama\244o de la fila es de: " << filaSoda.size() << "\n\n";
	}
	else
		cout << "La fila se encuentra vacia \n\n";
	system("pause");
	system("cls");
}

void mostrarSiguiente(queue<string> &filaSoda)
{
	cout << filaSoda.front() << "\n\n";
	system("pause");
	system("cls");
}