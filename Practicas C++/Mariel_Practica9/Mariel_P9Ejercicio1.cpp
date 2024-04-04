/*
Instituto Nacional de Aprendijaze 
Mariel Daniela Rojas Sanchez.
Fecha Creacion: 27 / 11 / 2022
Fecha Ultima Modificacion : 28 / 11 / 2022
Crear un ejercicio con diferentes funciones, utilizando vectores.
*/

#include <iostream>
#include <vector>
#include<string>
#include "FuncionesP9E1.h"
using namespace std;


int main()
{
	int option, menu;
	string nombreBuscar;
	bool encontrado;
	vector<string>nombres(0);

	do
	{
		menu = mostrarMenu(option); //Funcion que muestra el menu

		switch (option)
		{
		case 1:
			cout << "\n\tHaz elegido la opcion de ingresar los de nombres del Vector.\n";
			indicarCantidad(nombres); //Llama la funcion que inserta los nombres al vector
			break;

		case 2:
			cout << "\n\tHaz elegido la opcion de mostrar la cantidad de nombres del vector.\n";
			mostrarNombres(nombres); //Llama a la funcion que muestra los nombres
			break;
		case 3:
			cout << "\n\tHaz elegido la opcion de ordenar los nombres del vector.\n";
			cout << "\tEl vector ordenado es: ";
			ordenarVector(nombres); //Llama a la funcion que ordena el vector
			mostrarNombres(nombres); //Llama a la funcion que muestra los nombres
			cout << "\n";
			break;

		case 4:
			cout << "\n\tHaz elegido la opcion de buscar un nombre en el vector.\n";
			cout << "\tDigite el nombre que desea buscar en el Vector: \n";
			cin >> nombreBuscar;
			encontrado = buscarNombre(nombres, nombreBuscar); // Llama a la funcion que busca un nombre en la funcion
			if (encontrado == true)
				cout << "\tEl nombre si se encuentra en el vector.\n";
			else if (encontrado == false)
				cout << "\tEl nombre no se encuentra en el vector.\n";
			break;

		case 5:
			cout << "\n\tHaz elegido la opcion de eliminar el nombre de la primera posicion.\n";
			eliminarPrimero(nombres); //LLama a la funcion que elimina al primer elemento  del vector
			mostrarNombres(nombres); //Llama a la funcion que muestra los nombres
			break;

		case 6:
			cout << "\n\tHaz elegido la opcion de eliminar el nombre de la ultima posicion.\n";
			eliminarUltimo(nombres); //LLama a la funcion que elimina al ultimo elemento  del vector
			mostrarNombres(nombres); //Llama a la funcion que muestra los nombres
			break;

		case 7:
			cout << "\n\tHaz salido del programa\n";

		default:
			cout << "Valor ingresado incorrecto";
			break;
		}
	} while (option != 7);

    return 0;
}
