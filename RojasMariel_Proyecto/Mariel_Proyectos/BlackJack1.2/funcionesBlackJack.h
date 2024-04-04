#pragma once

#include "estructurasBlackjack.h"
#include<iostream>
#include <Windows.h>
#include <vector>
#include<time.h>
#include<stdio.h>
#include <cstdlib>
#include <iomanip> // Para utilizar el setw
using namespace std;

//struct participante
//{
//	//estructura utilizada para agrupar los jugadores
//	vector<cartas> mano;
//	int numparticipante;
//};

#define color SetConsoleTextAttribute
#define char_esc


/// <summary>
/// Funcion que se encarga de imprimir las instrucciones del juego
/// </summary>
void imprimirInstrucciones()
{
	system("color 0b");  //Se coloca un fondo negro con la letra de color celeste 
	cout << setw(70) << "***************************************\n";
	cout << setw(70) << " *       BIENVENIDOS AL BLACKJACK      *\n";
	cout << setw(70) << "***************************************\n";
	cout << "\n\n\n\t\tInstrucciones: \n\n";
	cout << "\t1.El jugador que logre hacer 21 puntos o sea el que mas se aproxime, es el jugador que gana. \n";
	cout << "\t2.El jugador que se pase de 21 puntos, automaticamente pierde.\n";
	cout << "\t4.Para efectos del programa,la J,Q,K,A, se van a mostar como n\243meros.\n";
	cout << "\t5.El 14 (\"As\") vale por 11 puntos o por 1 punto, como mejor convenga.\n";
	cout << "\t6.El 11,12,13 (J,Q,K) valen puntos 10 puntos.\n";
	cout << "\t7.Si al finalizar la tercer ronda de repartir,aun no hay ganador, el ganador es el que mas se aproxima a 21puntos\n\n";
	system("pause");
}


/// <summary>
/// Funcion que se encarga de imprimir las opciones del menu
/// </summary>
/// <param name="Vector llamado nombres"></param>
/// 
int mostrarMenu() 
{
	int option; //Se declara variable de opcion
	cout << "\tDigite la opci\242n deseada:\n\t ";
	cout << "\t1)  Empezar a jugar. \n\t";
	cout << "\t2)  Salir del programa.\n\t";
	cin >> option; //Se recibe la variable
		if (cin.fail()) //Se valida que no ingrese valores invalidos
			cout << "\tValor ingresado incorrecto.\n\t Digite un n\243mero valido.";
	system("cls"); // Limpia pantalla
	return option; //Se retorna la opcion digitada
}

/// <summary>
/// Crea la baraja de naipe
/// </summary>
/// <param name="naipe"></param>
void crearBaraja(vector<cartas>& naipe)
{
	int indice = 0; //indice se inicialicia en cero
	for (size_t i = 3; i <= 6; i++) // 3 = ♥,  4 = ♦ , 5 = ♣  ,6 = ♠ En codigo ascci
	{
		for (size_t j = 2; j <= 14; j++) //NUMEROS del 2 al 14, no se sustituye el A,J,Q,K 
		{
			naipe[indice].numero = j; //Los valores de la estructura carta(se llama naipe), toma los valores de j, que serian de 1 al 13
			naipe[indice].palo = (char)i; //Los valores de la estructura carta(se llama naipe), toman los valores del palo que esta en codigo ascci
			indice++; //El indice se va aumentando
		}
	}
	cout << "\n"; //Salto de linea
}


///// <summary>
///// Funcion que se encarga de repartir la baraja revuelta
///// </summary>
///// <param name="naipe"></param>
///// <param name="jugador"></param>
//void Repartir(vector<cartas>& naipe, vector<cartas>& jugador)
//{
//	srand(time(NULL)); //Se toma la semilla para utilizar el rand
//	int i = 1, indice; // Variables
//	while (i <= 2) //El iterador es menor o igual a dos, por que son dos cartas que se le reparten a cada jugador
//	{
//		indice = rand() % naipe.size(); //Se hace un aleatorio
//		jugador.push_back(naipe[indice]); //Se le agrega una carta al vector de los jugadores
//		naipe.erase(naipe.begin() + indice); //Se borra la carta del vector, por que ya se le repartio a los jugadores
//		i++;
//	}
//}

/// <summary>
/// Revolver la baraja
/// </summary>
/// <param name="naipe"></param>
void barajaRevuelta(vector<cartas>& naipe)
{
	//Raiz del Random
	srand(time(NULL));

	for (int i = 0; i < naipe.size(); i++) //Desde o hasta 52
	{
		int indice = rand() % naipe.size(); //Hace un random de todas las cartas

		swap(naipe[i], naipe[indice]); //aqui se intercambian dos variables entre ellas, para que se revuelvan
	}

}


/// <summary>
/// reparte las dos cartas inciales
/// </summary>
/// <param name="naipe"></param>
/// <returns></returns>
cartas repartirCartasRevueltas(vector<cartas>& naipe)
{
	//Primer carta
	cartas cartasInicial1 = naipe.front();  //Las cartas iniciales son las que estan al principio del vector  por lo que esa se reparte
	naipe.erase(naipe.begin());  // Y se borra para que no quede en el vector
	//Segunda carta
	cartas cartasInicial2 = naipe.front(); // 
	naipe.erase(naipe.begin());

	return cartasInicial1, cartasInicial2; // Retorna las dos cartas que se reparten al inicio
}


//
//void imprimirCarta(cartas cartasInicial1, cartas cartasInicial2)
//{
//	char corazon = 3; //Se declaran las variables de tipo char, para trabajar con ellas.
//	char diamante = 4;
//	char trebol = 5;
//	char pica = 6;
//
//	if (cartasInicial1.palo == corazon || cartasInicial1.palo == diamante)
//	{
//		system("color 04");
//	}
//	else 
//		system("color 08");
//
//	if (cartasInicial2.palo == corazon || cartasInicial2.palo == diamante)
//	{
//		system("color 04");
//	}
//	else
//		system("color 08");
//	cout << "\n\n";
//}

/// <summary>
/// Valida los valores de las cartas
/// </summary>
/// <param name="iniciales1"></param>
/// <returns></returns>
cartas validarCartasIniciales1(cartas iniciales1)
{
	if (iniciales1.numero == 11 || iniciales1.numero == 12 || iniciales1.numero == 13)
	{
		iniciales1.numero = 10;
	}
	else if (iniciales1.numero == 14)
	{
		iniciales1.numero = 11;
	}
	return iniciales1;
}

//Se valida si en las cartas inciales hay una carta 14, esa carta se iguala a 1 si la suma es mayor a 21
int validarSuma(cartas iniciales1, cartas iniciales2, int suma)
{

	if (iniciales1.numero == 14 && suma > 21)
		suma= 1 + iniciales2.numero;
	else if (iniciales2.numero == 14 && suma > 21)
		suma = 1 + iniciales1.numero;

	return suma;
}


// Valida que si las cartas extra son 14 y la suma es mayor a 21, esa carta se iguale a 1
cartas validaCartaExtra(cartas extras, int suma)
{
	if (extras.numero == 14 && suma > 21)
		extras.numero == 1;
	return extras;
}