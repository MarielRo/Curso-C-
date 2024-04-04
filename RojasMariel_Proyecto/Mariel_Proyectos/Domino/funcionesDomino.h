#pragma once

#include "estructurasDomino.h"
#include <iostream>
#include "vector"
#include <iomanip> 
using namespace std;

/// <summary>
/// Funcion que se encarga de imprimir las instrucciones del juego
/// </summary>
void imprimirInstrucciones()
{
	cout << setw(70) << "*********************************************\n";
	cout << setw(70) << " *       BIENVENIDOS AL JUEGO DE DOMINO     *\n";
	cout << setw(70) << "*********************************************\n";
	cout << "\n\n\n\t\tInstrucciones: \n\n";
	cout << "\t1.El jugador que se quede sin fichas es el jugador que gana. \n";
	cout << "\t2.Si nadie puede poner mas fichas, gana el jugador que sus fichas sumen menos puntos\n";
	cout << "\t3.Las fichas solo se pueden colocar si en la mesa hay un un valor igual al de algun lado de la ficha por colocar\n";
	cout << "\t4. Inicia el jugador que tenga la ficha [6|6] \n";

	system("pause");
}


/// <summary>
/// Funcion crea fichas del domino 
/// </summary>
/// <param name="fichas"></param>
void crearFichas(vector<ficha>& fichas)
{
	int indice = 0; //indice se inicialicia en cero
	for (int i = 0; i <= 6; i++)  //En un ciclo de 0 a 6
	{
		for (int j = 0; j <= i; j++) // de o a 6
		{
			fichas[indice].numero1 = i; //Se toman los valores de 0 a 6
			fichas[indice].numero2 = j; //Se toman los valores de 0 a 6
			indice++; //El indice se va aumentando
		}
	}
}


/// <summary>
/// Se revuelven las fichas 
/// </summary>
/// <param name="fichas"></param>
void revolverFichas(vector<ficha>& fichas)
{
	srand(time(NULL)); //Llama a la semilla para poder utilizar el random
	for (int i = 0; i < fichas.size(); i++) //Desde o hasta 28 que son la cantidad de fichas
	{
		int indice = rand() % fichas.size(); //Hace un random de todas las cartas

		swap(fichas[i], fichas[indice]); //aqui se intercambian dos variables entre ellas, para que se revuelvan
	}
}


/// <summary>
/// Reparten fichas
/// </summary>
/// <param name="fichas"></param>
/// <param name="jugador"></param>
void repartirFichas(vector<ficha>& fichas, vector<ficha>& jugador) //Contiene la cantidad de fichas y el jugador
{
	int i = 0,indice; // i = 0 va de o a 6 dichas para que sean 7
	while (i <= 6) //Se le reparten 7 fichas a cada jugador
	{
		indice = rand() % fichas.size(); // Al indice se le aplica el random para que escoga fichas al azar
		jugador.push_back(fichas[indice]); // Las fichas se ingresan de atras del vector, se ingresan al vector jugador
		fichas.erase(fichas.begin() + indice); // Las fichas se borran del vector fichas, por que ya estan en el vector jugador
		i++;
	}
}


/// <summary>
/// Se imprime en pantalla las fichas de cada jugador
/// </summary>
/// <param name="jugador"></param>
void mostrarFichas(vector<ficha>& fichas, vector<ficha>& jugador)
{
	for (int i = 0; i < jugador.size(); i++) // Desde 0 hasta el ma;ano del jugador
	{
		cout << "[" << jugador[i].numero1  << "|" << jugador[i].numero2 << "]" << "\t" ; //Imprime en pantalla 
	}
	cout << "  \n"; //Salto de linea
}


/// <summary>
/// Funcion que se encarga de verificar cual jugador inicia
/// </summary>
/// <param name="fichas"></param>
/// <param name="jugador"></param>
//void verificarInicio(vector<ficha>& fichas, vector<ficha>& jugador)
//{
//	for (int i = 0; i < jugador.size(); i++) // Desde 0 hasta el ma;ano del jugador
//	{
//		if (jugador[1].numero1 == 6 && jugador[1].numero2 == 6)
//		{
//			jugador[i]
//		}
//	}
//
//}
 
//void ingresarFichaTablero(vector<ficha>& fichas, vector<ficha>& jugador)
//{
//la ficha se debe validad antes de ingresar
//}









