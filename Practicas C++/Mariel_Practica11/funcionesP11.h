#pragma once
#include <stdlib.h>
#include "estructurasP11.h"
#include <vector>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>

#define color SetConsoleTextAttribute
#define char_esc



/// <summary>
/// Funcion que se encarga de imprimir las opciones del menu
/// </summary>
/// <param name="Vector llamado nombres"></param>
int mostrarMenu(int& option)
{
	cout << "\n\tBARAJA DE NAIPE\t\n\t";
	cout << "Seleccione una opci\242n: \n";
	cout << "\t1-Crear Baraja\n\t";
	cout << "2-Mostrar el naipe revuelto \n\t";
	cout << "3-Mostrar una cartas\n\t";
	cout << "4-Mostrar dos cartas\n\t";
	cout << "5-Salir\n\t";
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
void crearBaraja(vector<cartas>&naipe)
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


void imprimeBarajaRevuelta(vector<cartas>& naipe)
{
	int indice = 0;
	for (size_t i = 3; i <= 6; i++) // 3 = ♥,  4 = ♦ , 5 = ♣  ,6 = ♠ En codigo ascci  PALOS //Se recorrden las filas, que llevan los palos
	{
		cout << "\n"; //Se da un salto de linea para que se vea acomodado
		for (size_t j = 1; j <= 13; j++) //NUMEROS del 1 al 13, no se sustituye el A,J,Q,K, se recorren todos los numeros del 1 al 13
		{
			indice = rand() % naipe.size();
			cout << "[ " << naipe[indice].numero << naipe[indice].palo << " ]  "; //Se imprime el valor del numero y del palo
			indice++;
		}
	}
	cout << "\n";
	system("pause");
	system("cls");
}


void imprimirUnaCarta(vector<cartas>& naipe)
{
	int indice = 0;
	srand(time(NULL));
	indice = rand() % naipe.size();
	cout << "CARTA:\n";
	//Color de fondo y de letra
	HANDLE colort = GetStdHandle(STD_OUTPUT_HANDLE);
	color(colort, 240); //Se utiliza esto 
	cout << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << "\n";
	cout << char(186) << naipe[indice].numero << "      " << char(186)<< "\n";
	cout << char(186) << "       " << char(186) << "\n";
	cout << char(186) << "   " <<  naipe[indice].palo << "   " << char(186) << "\n";
	cout << char(186) << "       " << char(186) << "\n";
	cout << char(186) << "      " << naipe[indice].numero  << char(186) << "\n";
	cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << "\n";

	system("pause");
	system("cls");
}



void imprimirDosCarta(vector<cartas>& naipe)
{
	int indice = 0;
	srand(time(NULL));
	indice = rand() % naipe.size();
	cout << "CARTA:\n";
	//Color de fondo y de letra
	HANDLE colort = GetStdHandle(STD_OUTPUT_HANDLE);
	color(colort, 240); //Se utiliza esto 
	cout << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << "\t" << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << "\n";
	cout << char(186) << naipe[indice].numero << "      " << char(186) << "\t" << char(186) << naipe[indice+1].numero << "      " << char(186) << "\n";
	cout << char(186) << "       " << char(186) << "\t" << char(186)  << "       " << char(186) << "\n";
	cout << char(186) << "   " << naipe[indice].palo << "   " << char(186) <<"\t" << char(186) << "   " << naipe[indice+1].palo << "   " << char(186) << "\n";
	cout << char(186) << "       " << char(186) << "\t" << char(186) << "       " << char(186) << "\n";
	cout << char(186) << "      " << naipe[indice].numero << char(186)<< "\t" << char(186) << "      " << naipe[indice+1].numero << char(186) << "\n";
	cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << "\t" << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << "\n";

	system("pause");
	system("cls");
}



