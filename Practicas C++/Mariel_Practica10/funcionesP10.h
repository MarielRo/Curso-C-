#pragma once
#include "estructuras.h"
#include <vector>


/// <summary>
/// Funcion que se encarga de imprimir las opciones del menu
/// </summary>
/// <param name="Vector llamado nombres"></param>
int mostrarMenu(int &option)
{
	cout << "\n\tBARAJA DE NAIPE\t\n\t";
	cout << "Seleccione una opci\242n: \n";
	cout << "\t1-Crear Baraja\n\t";
	cout << "2-Mostrar Baraja en Lin\202\n\t";
	cout << "3-Mostrar Baraja en Columnas\n\t";
	cout << "4-Salir\n\t";
	cin >> option;
	if (cin.fail())
	cout << "Valor ingresado incorrecto";
	system("cls");
	return option;
}


/// <summary>
/// Crea la baraja de naipe
/// </summary>
/// <param name="naipe"></param>
void crearBaraja(vector<cartas> &naipe)
{
	int indice = 0; //indice se inicialicia en cero
	for (size_t i = 3; i <= 6; i++) // 3 = ♥,  4 = ♦ , 5 = ♣  ,6 = ♠ En codigo ascci
	{
		for (size_t j = 1; j <= 13; j++) //NUMEROS del 1 al 13, no se sustituye el A,J,Q,K 
		{
			naipe[indice].numero = j; //Los valores de la estructura carta(se llama naipe), toma los valores de j, que serian de 1 al 13
			naipe[indice].palo = (char)i; //Los valores de la estructura carta(se llama naipe), toman los valores del palo que esta en codigo ascci
			indice++; //El indice se va aumentando
		}
	}
	cout << "\n"; //Salto de linea
	system("pause");
	system("cls");
}


/// <summary>
/// Se imprime la baraja de naipe de manera vertical
/// </summary>
/// <param name="naipe"></param>
void imprimeBarajaVertical(vector<cartas>& naipe)
{
	int indice=0;
	for (size_t i = 3; i <= 6; i++) // 3 = ♥,  4 = ♦ , 5 = ♣  ,6 = ♠ En codigo ascci  PALOS //Se recorrden las filas, que llevan los palos
	{
		cout << "\n"; //Se da un salto de linea para que se vea acomodado
		for (size_t j = 1; j <= 13; j++) //NUMEROS del 1 al 13, no se sustituye el A,J,Q,K, se recorren todos los numeros del 1 al 13
		{
			cout  << "[ " << naipe[indice].numero << naipe[indice].palo << " ]  "; //Se imprime el valor del numero y del palo
			indice++;
		}
	}
	cout << "\n";
	system("pause");
	system("cls");
}

/// <summary>
/// Se imprime la bajara de manera horizontal
/// </summary>
/// <param name="naipe"></param>
void imprimeBarajaHorizontal(vector<cartas>& naipe)
{
	int indice = 0;
	// Le di vuelta a los cicloss
	for (size_t j = 1; j <= 13; j++) //NUMEROS del 1 al 13, no se sustituye el A,J,Q,K
	{
		cout << "\n";
		for (size_t i = 3; i <= 6; i++) // 3 = ♥,  4 = ♦ , 5 = ♣  ,6 = ♠ En codigo ascci  PALOS
		{
			cout << " [ " << naipe[indice].numero << naipe[indice].palo << " ]"; //Se imprime el valor del numero y del palo
			indice++;
		}
	}
	cout << "\n";
	system("pause");
	system("cls");
}

