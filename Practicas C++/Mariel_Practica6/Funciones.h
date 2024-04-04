#pragma once
#include <iostream>

using namespace std; //Siempre es necesario


//Funcion que se encarga de obtener el numero mayor de dos numeros, o verificar si son iguales
int NumeroMayor(int numero1, int numero2)
{

	if (numero1 = numero2)
	{
	     cout << "Los numeros son iguales" << "\n";
	}
	else if (numero1 > numero2)
	{
		cout << " El numero mayor es el:" << numero1 << "\n";
	}
	else if (numero1 < numero2)
	{
		cout << " El numero mayor es el:" << numero2 << "\n";
	}
	return 0;
	
}

int ObtenerPromedio(int nota1,int nota2,int nota3)
{
	int promedio;
	promedio = (nota1 + nota2 + nota3) / 3;

	return promedio;
}

int ObtenerSumatoria(int numSuma)
{
	int sumatoria = 0;

	for (int i = 10; i <= numSuma; i++)
	{
		sumatoria += i;
	}
	return sumatoria;
}


int AumentoSalarial(int salario, int years)
{
	int aumento;
	if (years > 5)
	{
		aumento = salario * 0.06;
		salario += aumento; //Salario mas aumento 
		cout << "El salario se ha recibido un aumento, el nuevo salario es de: " << salario << "\n\n";
	}
	else
	{
		salario = salario;
		cout << "El salario se mantiene en: " << salario << "\n\n";
	}
	return salario;

}