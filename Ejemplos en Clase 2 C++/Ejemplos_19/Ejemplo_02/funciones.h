#pragma once
#include <iostream>
using namespace std;

int duplicar(const int numero) // No se puede incrementar el numero porque el parametro se paso como constante
{
	int resultado = 0;
	resultado = numero * 2;

	return resultado;
	
}