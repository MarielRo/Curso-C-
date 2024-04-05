#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//Variable global
string nombreArchivo;


void escribirEnArchivo()
{

	// Paso 1 : Declarar un objeto de la clase ofstream 
	// Paso 2 : Abrir el archico (open  ios::out)
	// Paso 3 : Verificar que no hayan errires en la apertura (Fail)
	// Paso 4 : Escribir en el archivo (asignar contenido en el archivo)
	// Paso 5 : Cerrar correctamente el archivo (close)

	string textoUsuario;

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
	cout << "\tIngrese el texto que desea guardar en el archivo: \n";
	getline(cin, textoUsuario, 'X');

	archivo << textoUsuario;

	//Paso 5.
	archivo.close();
	cout << "\tEl archivo se ha creado y guardado correctamente\n";

}

void leerEnArchivo()
{

	// Paso 1 : Declarar un objeto de la clase ifstream 
	// Paso 2 : Abrir el archico (open ios::int)
	// Paso 3 : Verificar que no hayan errires en la apertura (Fail)
	// Paso 4 : leer el archivo 
	// Paso 5 : Cerrar correctamente el archivo (close)

	string texto;
	// Paso 1 
	ifstream archivo;

	// Paso 2
	archivo.open(nombreArchivo);

	// Paso 3
	if (archivo.fail())
	{
		cout << "\tHubo un problema al abrir el archivo.\n";
		exit(1);
	}

	// Paso 4 
	while (!archivo.eof())
	{
		getline(archivo, texto);
		cout << "\n\n" << texto << "\n\n";
	}

	//Paso 5.
	archivo.close();
	cout << "\tEl archivo leido correctamente\n";
	system("pause");


}

void modificarArchivo()
{

	// Paso 1 : Declarar un objeto de la clase ofstream 
	// Paso 2 : Abrir el archico (open  ios::app)
	// Paso 3 : Verificar que no hayan errires en la apertura (Fail)
	// Paso 4 : agregar texto en el archivo (asignar contenido en el archivo)
	// Paso 5 : Cerrar correctamente el archivo (close)

	string texto;

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

void manipuladoresES()
{
	int numero;
	//Paso 1
	ofstream archivo;
	//Paso 2
	archivo.open(nombreArchivo, ios::app);

	//Paso 3
	if (archivo.fail())
	{
		cout << "Hubo un problema al abrir el archivo";
		exit(1);

	}
	cout << "Ingrese un numero: ";
	cin >> numero;

	archivo << "\n\t ------Modificadores ------- \n";
	archivo << "El numero base diez es: " << numero << endl;

	archivo << "El numero en octal es: ";
	archivo << resetiosflags(ios::dec);
	archivo << setiosflags(ios::oct);
	archivo << numero << "\n";

	archivo << "El numero en hexadecimal es: ";
	archivo << resetiosflags(ios::oct);
	archivo << setiosflags(ios::hex);
	archivo << numero << "\n";

	archivo << "La base actual del numero es: ";
	archivo << setiosflags(ios::showbase);
	archivo << numero << "\n";

	archivo << "Convirtiendo a Mayusculas: ";
	archivo << setiosflags(ios::uppercase);
	archivo << numero << "\n";


}


int menu()
{
	int option = 0;
	system("cls");
	cout << "\n\nManejo de archivos - Seleccione una opcion: ";
	cout << "\n\t1-Crear un archivo y agregar texto";
	cout << "\n\t2-Ver informacion del archivo";
	cout << "\n\t3-Modificar Informacion";
	cout << "\n\t4-Manipuladores";
	cout << "\n\t5-Salir";
	cin >> option;
	cin.ignore();
	return option;

}