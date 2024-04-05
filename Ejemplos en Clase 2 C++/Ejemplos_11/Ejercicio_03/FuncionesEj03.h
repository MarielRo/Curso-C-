#pragma once
#include <array>
#include <iostream>
#include <algorithm> // para usar la funcion de ordenar 
using namespace std;



int llenarArreglo(int arreglo[])
{
	int arregloLleno,numbers;
	//Llena el arreglo
	for (int i = 1; i < 11; i++)
	{
		cout << "Digite el valor " << i << " del arreglo:  ";
		cin >> numbers;
		arreglo[i] = numbers;
		arregloLleno = arreglo[i];
	}
		return arregloLleno;
}


int determinarMenor(int arreglo[]) 
{
	int menor = arreglo[1];
	for (int i = 1; i < 11; i++)
	{
		if (arreglo[i] < menor)
			menor = arreglo[i];
	}
	return menor;

}

int sumarImpares(int arreglo[])
{
	int sumaImpar = 0;
	for (int i = 1; i < 11; i++)
	{
		if (arreglo[i] % 2 != 0 )
			sumaImpar += arreglo[i];
	}
	return sumaImpar;

}


int duplicarPares(int arreglo[])
{
	int arregloDupli;
	for (int i = 1; i < 11; i++)
	{
		if (arreglo[i] % 2 == 0)
		{
			arreglo[i] == arreglo[i] * 2;
		}
		else
			arreglo[i] == arreglo[i];
	}

	return arregloDupli;
}

