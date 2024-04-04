/*
Mariel Rojas Sanchez 
Fecha creacion: 23/11/2022
Fecha ultima modificacion: 24/11/2022
Escriba un programa  que lea un conjunto de 10 ventas semanales
y que determine cuántos vendedores recibieron salarios en cada uno de los siguientes rangos:
a.	100.000 a 299.999
b.	300.000 a 499.999
c.	500.000 a 699.999
d.	700.000 a 899.999
e.	Iguales o mayores a 900.000
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	//struct Seller //Vendedor 
	//{
	//	//string name; //Nombre del empleado
	//	double amount; //Monto ventas realizadas
	//};

	//Variables
	int i, a, b;
	//Seller number[11]; //Ventas realizadas
	int salary[11], manyS[11], many[11] = { 0 }; //Salario total// salario menores a 90000// salarios mayores a 90000
	float ventas;

	for (i = 1; i <= 10; i++)
	{
		//Nombre
		cout << "\n\tVendedor: " << i << endl;
		//	Monto vendido
		cout << "\n\t Ingrese el monto vendido del vendedor durante esta semana: " << endl;
		cin >> ventas; //Se mete cada uno de los montos vendidos en el struct de las ventas
		salary[i] = (ventas * 0.05) + 100000; // guarda en el vector salario, los salarios de cada vendedor,incluyendo la comision
		cout << "\n\t El salario del vendedor " << i << " es de : " << salary[i] << "\n" << endl;
		manyS[i] = salary[i] / 100000; // Guarda en un vector la cantidad de salarios divididos entre 100000, que vendrian siendo los salarios menores  a 1000000

	}

	//
	for (a = 1; a <= 10; a++) //Desde el  1 hasta 10
	{
		if (manyS[a] < 10)    // si el vector con salarios menores a 90000 es mmenor a 10 que serian 10000
			many[manyS[a]]++; // Se contabiliza cuantos salarios sson menores a 900000
		else
			many[10]++;  //se contabiliza cunatos son mayores
	}

	for (b = 1; b < 9; b++) // desde 1 que seria 100000, hasta 9 que vendria siendo 899.999
	{
		cout << endl << "Hay " << many[b] << " empleados que cobran entre " << (b * 100000) << " y " << ((b + 1) * 100000) - 1 << endl;
	}

	cout << endl << "Hay " << many[(10)] << " empleados que cobran 900000 o mas." << endl << endl << endl;

	return 0;
}

