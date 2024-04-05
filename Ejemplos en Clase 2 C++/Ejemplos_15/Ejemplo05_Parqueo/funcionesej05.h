#pragma once
#include<stack>
#include <string>
#include <iostream>
using namespace std;


int mostrarMenu(int& option)
{
	cout << "\n\tBienvenidos al Parqueo\n\n";
	cout << "\tDigite la opci\242n deseada:\n\t ";
	cout << "\t1)  Ingresar un vehículo (placa, nombre,telefóno): \n\t ";
	cout << "\t2)  Consultar el último vehículo ingresado: \n\t";
	cout << "\t3)  Sacar un vehículo (último vehículo ingresado): \n\t";
	cout << "\t4)  Consultar si hay vehículos en el estacionamiento\n\t";
	cout << "\t5)  Indicar cuántos vehículos hay en el estacionamiento.\n\t";
	cout << "\t6)  Salir del programa.\n\t";
	cin >> option;
	cout << "\n\n";
	system("pause");
	system("cls");
	return option;
}


void ingresarVehiculo(stack<int>&cliente, int &placa) //string name , int telefono
{

	cliente.push(placa);
	//cliente.duenio.push;
	//cliente.telefono.push;
	cout << "\n\n";
	system("pause");
	system("cls");
}

void consultarUltimo(stack<int>& cliente)
{

	if (!cliente.empty()) //Si la cola no esta vacia 
	{
		cout << "\tEl ultimo vehiculo ingresado es el de la placa" << cliente.top() << "\n";
		
	}
	else
		cout << "\tNo hay carros en el parqueo\n\n";

	cout << "\n\n";
	system("pause");
	system("cls");
}




void sacarUltimo(stack<int>& cliente)
{

	if (!cliente.empty()) //Si la cola no esta vacia 
	{
		 cliente.pop();
		 cout << "\tEl ultimo vehiculo con placa  " << cliente.top() << " ha sido retirado del parqueo\n";
	}
	else
		cout << "\tNo hay carros en el parqueo\n\n";
	cout << "\n\n";
	system("pause");
	system("cls");
}


void consultarVehiculos(stack<int>& cliente)
{
	if (!cliente.empty())
	{
		cout << "Si hay clientes clientes en la fila";
	}
	else
		cout << "\tNo hay clientes por atender\n\n";
	system("pause");
	system("cls");
}

void mostrarTamanio(stack<int>& cliente)
{
	if (!cliente.empty())
	{
		cout << " El tama\244o de la fila es de: " << cliente.size() << "\n\n";
	}
	else
		cout << "La fila se encuentra vacia \n\n";
	system("pause");
	system("cls");
}
