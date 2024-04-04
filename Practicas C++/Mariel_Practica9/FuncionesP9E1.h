#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

/// <summary>
/// Funcion que se encarga de imprimir las opciones del menu
/// </summary>
/// <param name="Vector llamado nombres"></param>
int mostrarMenu(int &option)
{
	cout << "\n\tBienvenidos al Menu\n\n";
	cout << "\tDigite la opci\242n deseada:\n ";
	cout << "\t1-Ingresar Nombres\n\t2-Mostrar Nombres\n\t3-Ordenar Nombres\n\t4-Buscar Nombre\n\t";
	cout << "5-Eliminar Primer Elemento\n\t6-Eliminar Ultimo Elemento\n\t7-Salir:\n\t ";
	cin >> option;
	system("cls");
	return option; 
}

/// <summary>
/// Funcion que se encarga de llenar el vector con nombres
/// </summary>
/// <param name="Vector llamado nombres"></param>
void indicarCantidad(vector<string>&nombres)
{
	int size;
	string name;
	cout << "\tIndique la cantidad de nombres que desea agregar al vector: \n";
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		cout << "\tDigite el nombre:\n\t";
		cin >> name;
		nombres.insert(nombres.end(), name);
	}
}


/// <summary>
/// Funcion que se encarga de mostrar el vector
/// </summary>
/// <param name="Vector llamado nombres"></param>
void mostrarNombres(vector<string>&nombres)
{
	for (auto i : nombres) // con auto no hay que especificar el tipo, ya que igual lo iguala a 1
	{
		cout << "[" << i << "]";
	}
}

/// <summary>
/// Funcion que se encarga de ordenar el vector
/// </summary>
/// <param name="Vector llamado nombres"></param>
void ordenarVector(vector<string>& nombres)
{
	sort(nombres.begin(), nombres.end()); //Se ordena el vector 
}


/// <summary>
/// Funcion que se encarga de buscar un nombre en el vector 
/// </summary>
/// <param name="Vector llamado nombres y y el nombre a buscar"></param>
bool buscarNombre(vector<string>& nombres, string nombreBuscar)
{
	bool encontrado;
	sort(nombres.begin(), nombres.end()); //primero se ordena el vector para despues realizar la busqueda
	encontrado = binary_search(nombres.begin(), nombres.end(), nombreBuscar);
	if (encontrado)
		encontrado = true;

	return encontrado;

}

/// <summary>
/// Funcion que se encarga de eliminar el primer elemento de un vector
/// </summary>
/// <param name="Vector llamado nombres"></param>
void eliminarPrimero(vector<string>& nombres)
{
	nombres.erase(nombres.begin());
}


/// <summary>
/// Funcion que se encarga de eliminar el ultimo elemento de un vector
/// </summary>
/// <param name="nombres"></param>
void eliminarUltimo(vector<string>& nombres)
{
	int tamArreglo = nombres.size();
	nombres.erase(nombres.begin() + tamArreglo-1);
}

