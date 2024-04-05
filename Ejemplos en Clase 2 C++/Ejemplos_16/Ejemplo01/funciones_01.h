#pragma once
#include <fstream>
#include <iostream>
using namespace std;

void escribirEnArchivo()
{
	// Paso 1 : Declarar un objeto de la clase ofstream 
	// Paso 2 : Abrir el archico (open)
	// Paso 3 : Verificar que no hayan errires en la apertura (Fail)
	// Paso 4 : Escribir en el archivo (asignar contenido en el archivo)
	// Paso 5 : Cerrar correctamente el archivo (close)


	//Paso 1.
	ofstream archivo;

	//Paso 2.
	archivo.open("Mi archivo.txt", ios::out);

	// Paso 3.
	if (archivo.fail())
	{
		cout << "\tHubo un problema al abrir el archivo.\n";
		exit(1);
	}

	//Paso 4.
	archivo << "\tEste es el texto que se va a almacernar en el archivo\n";
	archivo << "\tAutor: Mariel Rojas\n";
	archivo << "\tDerechos Reservados 2022\n";

	//Paso 5.
	archivo.close();
	cout << "\tEl archivo se ha creado y guardado correctamente\n";

}