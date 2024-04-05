#pragma once
#include <array>
#include <iostream>
#include <algorithm> // para usar la funcion de ordenar 
using namespace std;


int imprimirArray(array<int,12> arreglo) 
{
	int imprimir = arreglo[0];
	for (int i = 0; i < arreglo.size(); i++) //For de manera extensa 
	{
		cout << "[" << arreglo[i] << "]";
	}

	return imprimir;
}


int ordenarArray(array<int, 12> arreglo)
{
	int imprime = arreglo[0];
	sort(arreglo.begin(), arreglo.end());
	for (int i : arreglo)  //Forma corta del for para arrays para cada elemento “i” contenido dentro del arreglo, muestre cada elemento
	{
		cout << "[" << i << "]";
	}
	return imprime;
}