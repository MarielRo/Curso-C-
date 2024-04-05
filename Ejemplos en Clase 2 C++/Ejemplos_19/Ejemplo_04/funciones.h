#pragma once
#include <iostream>
using namespace std;

void funcionReferencia(int& numero)
{
	//Parametro por referencia
	//afecta el numero
	numero = 4000;

}

void funcionPuntero(int *numero)
{
	//Parametro porr puntero
	//afecta el numero
	// Se debe utilizar * para hacer referencia al parametro recibido
	*numero = 5000;

}