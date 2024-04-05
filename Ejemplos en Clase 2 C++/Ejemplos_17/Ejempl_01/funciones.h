#pragma once
#include "estructuras.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;


int menu()
{
	int op = 0;
	system("cls");
	cout << "\n\t*** Manejo de Archivos Binarios ***";
	cout << "\n\t1.Crear archivo de estudiantes: ";
	cout << "\n\t2.Agregar estudiantes: ";
	cout << "\n\t3.Mostrar lista de estudiantes: ";
	cout << "\n\t4.Cantidad de estudiantes en el archivo: ";
	cout << "\n\t5.Buscar estudiante por nombre: ";
	cout << "\n\t6.Salir: ";
	cin >> op;
	cin.ignore();

	return op;

}

void guardarEstudiante()
{
	char respuesta = 'N';
	Registro Alumno; //Variable para almacenar los datos de un alumno, tipo struct

	ofstream vEscribir;
	vEscribir.open("prueba.bat", ios::out |ios :: binary); // Como se va a crear entonces se utiliza el out

	do
	{
		system("cls");
		cout << "\n\tDigite el nombre del estudiante: ";
		cin >> Alumno.nombre;
		cout << "\n\tDigite la edad del estudiante: ";
		cin >> Alumno.edad;
		cout << "\n\tDigite la altura del estudiante: ";
		cin >> Alumno.altura;
		vEscribir.write((char*)&Alumno, sizeof(Registro)); ///CASTING PUNTERO * DIRRECION DE MEMORIA Y MANDARLE EL TAMA;O DEL REGISTRTO
		cout << "\n\tDesea Agregar otro estudiante? (S/N) ";
		cin >> respuesta;
	} while (toupper(respuesta == 'S')&& vEscribir.good());
	vEscribir.close();


}

void leerRegistro()
{//Crear variable de tipo resgisto que es una estructura
	Registro Alumno;
	// crear objeto tipo ifstream (lectura)
	ifstream vLeer("prueba.dat", ios::in | ios::binary);
	cout << "\n\tNombre\t\tEdad\t\tAltura";

	//leer primer registro 
	vLeer.read((char*)&Alumno, sizeof(Registro));

	//Si no hay problemas en lectura que lo muestre
	while (!vLeer.eof() && !vLeer.fail()) //Mientras no sea el fin del archivo y no haya ningun error mostrar
	{
		cout << "\n\tNombre:\t" << Alumno.nombre;
		cout << "\n\tNEdad:\t" << Alumno.edad;
		cout << "\n\tAltura:\t" << Alumno.altura;
		//leer siguiente registro
		vLeer.read((char*)&Alumno, sizeof(Registro)); //No se pone esta instruccion entonces se encicla por que solo se muestra el primer registro
	}
	//cerrar
	vLeer.close();

}

//Agregando no eliminando
void agregarEstudiantes()
{
	char respuesta = 'S';
	Registro Alumno;

	//Abrir archivo para modificarlo
	ofstream vEscribir("prueba.dat", ios::app | ios::binary);

	do
	{
		system("cls");
		cout << "\n\tDigite los datos a modificar:";
		cout << "\n\tDigite el nombre del estudiante: ";
		cin >> Alumno.nombre;
		cout << "\n\tDigite la edad del estudiante: ";
		cin >> Alumno.edad;
		cout << "\n\tDigite la altura del estudiante: ";
		cin >> Alumno.altura;
		vEscribir.write((char*)&Alumno, sizeof(Registro)); ///CASTING PUNTERO * DIRRECION DE MEMORIA Y MANDARLE EL TAMA;O DEL REGISTRTO
		cout << "\n\tDesea Agregar otro estudiante? (S/N) ";
		cin >> respuesta;
	} while (toupper(respuesta == 'S') && vEscribir.good());
	vEscribir.close();

}

int tamanioArchivo()
{
	int tamanio;
	ifstream vLeer("prueba.dat", ios::in | ios::binary);
	vLeer.seekg(0,vLeer.end);
	tamanio = vLeer.tellg() / sizeof(Registro);
	vLeer.close();
	return tamanio;

}

void buscarRegistroyMostrar(string pNombre)
{
	Registro Alumno;
	ifstream vLeer("prueba.dat", ios::in | ios::binary);
	vLeer.read((char*)&Alumno, sizeof(Registro));
	while (!vLeer.eof() && !vLeer.fail()) //Mientras no sea el fin del archivo y no haya ningun error mostrar
	{
		if (Alumno.nombre == pNombre)
		{
			cout << "***Estudiante encontrado***";
			cout << "\n\tNombre:\t" << Alumno.nombre;
			cout << "\n\tNEdad:\t" << Alumno.edad;
			cout << "\n\tAltura:\t" << Alumno.altura;
		}
		//leer siguiente registro
		vLeer.read((char*)&Alumno, sizeof(Registro)); //No se pone esta instruccion entonces se encicla por que solo se muestra el primer registro
	}
	vLeer.close();

}