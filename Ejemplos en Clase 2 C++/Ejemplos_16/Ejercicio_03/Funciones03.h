#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <time.h>


using namespace std;

//Variable global
string nombreArchivo;


int menu()
{
	int option = 0;
	system("cls");
	cout << "\n\nManejo de archivos - Seleccione una opcion: ";
	cout << "\n\t1-Crear un archivo";
	cout << "\n\t2-Ver informacion del archivo";
	cout << "\n\t5-Salir";
	cin >> option;
	cin.ignore();
	return option;

}


void crearMatriz1(int &matriz)
{
	srand(time(NULL));
	for (int i = 0; i < 10; i++) //Filas
	{
		cout << "\n\n";
		for (int j = 0; j < 5; j++) //Columnas
		{
			matriz[i][j] = 1 + rand() % (101 - 1);
			if (i % 2 == 0 || j % 2 == 0)
			{
				matriz[i][j];
			}
			cout << "[" << matriz[i][j] << "]";
		}
		cout << "\n\n";
	}
}

void crearMatriz2(int& matriz2)
{
	srand(time(NULL));
	for (int i = 0; i < 10; i++) //Filas
	{
		cout << "\n\n";
		for (int j = 0; j < 5; j++) //Columnas
		{
			matriz2[i][j] = 10 + rand() % (100 - 10);
			if (i % 2 == 0 || j % 2 == 0)
			{
				matriz2[i][j];
			}
			cout << "[" << matriz2[i][j] << "]";
		}
		cout << "\n\n";
	}
}



void guardarArchivoMatriz(int& matriz)
{

	// Paso 1 : Declarar un objeto de la clase ofstream 
	// Paso 2 : Abrir el archico (open  ios::out)
	// Paso 3 : Verificar que no hayan errires en la apertura (Fail)
	// Paso 4 : Escribir en el archivo (asignar contenido en el archivo)
	// Paso 5 : Cerrar correctamente el archivo (close)

	string nombre;

	//Paso 1.
	ofstream archivo;


	cout << "\tDigite en nombre que le quiere dar al archivo.Finalice con la extension (.txt) ";
	getline(cin, nombreArchivo);

	//Paso 2.
	archivo.open(nombreArchivo.c_str(), ios::out);

	// Paso 3.
	if (archivo.fail())
	{
		cout << "\tHubo un problema al abrir el archivo.\n";
		exit(1);
	}

	//Paso 4.


	archivo << "\tMatriz 10x5 con los primeros 50 numeros pares \n";
	archivo << matriz;
	

	cout << "\t Digite su nombre: ";
	getline(cin, nombre);
	archivo <<  nombre;


	//Paso 5.
	archivo.close();
	cout << "\tEl archivo se ha creado y guardado correctamente\n";

}


void modificarArchivo()
{

	// Paso 1 : Declarar un objeto de la clase ofstream 
	// Paso 2 : Abrir el archico (open  ios::app)
	// Paso 3 : Verificar que no hayan errires en la apertura (Fail)
	// Paso 4 : agregar texto en el archivo (asignar contenido en el archivo)
	// Paso 5 : Cerrar correctamente el archivo (close)


	//Paso 1.
	ofstream archivo;

	//Paso 2.
	archivo.open(nombreArchivo, ios::app); //Modificar

	// Paso 3.
	if (archivo.fail())
	{
		cout << "\tHubo un problema al abrir el archivo.\n";
		exit(1);
	}

	//Paso 4.
	cout << "\tIngrese el texto que desea agregar en el archivo.Escriba X para salir: \n";
	getline(cin, texto, 'X');


	//Paso 5.
	archivo.close();
	system("pause");

}
