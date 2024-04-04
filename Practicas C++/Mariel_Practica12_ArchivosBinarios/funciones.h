#pragma once
#include "estructuras.h"
#include <iostream>
#include <fstream>

int menu()
{
	int op = 0;
	system("cls");
	cout << "\n\t*** Manejo de Archivos Binarios ***";
	cout << "\n\t1.Crear archivo de notas: ";
	cout << "\n\t2.Agregar un nuevo registro: ";
	cout << "\n\t3.Mostrar todos los registros: ";
	cout << "\n\t4.Cantidad de registros en el archivo: ";
	cout << "\n\t5.Buscar datos de estudiante por medio del nombre: ";
	cout << "\n\t6.Salir: ";
	cin >> op;
	cin.ignore();

	return op;
}



void crearArchivo()
{
	Estudiante Estudiantes;

	ofstream vEscribir;
	vEscribir.open("prueba.dat", ios::out | ios::binary); // Como se va a crear entonces se utiliza el out
	vEscribir.close();
}



void agregarRegistro()
{
	char respuesta = 'N';
	Estudiante Estudiantes; //Variable para almacenar los datos de un alumno, tipo struct

	 ofstream vEscribir ("prueba.dat", ios::app | ios::binary); // Como se va a crear entonces se utiliza el out

	do
	{
		system("cls");
		cout << "\n\tDigite el nombre del estudiante: ";
		cin >> Estudiantes.nombre;
		cout << "\n\tDigite el apellido : ";
		cin >> Estudiantes.apellido;
		cout << "\n\tDigite la nota 1 del estudiante, la nota debe ser entre 0 y 100: ";
		cin >> Estudiantes.nota1;
		if (cin.fail())
			cout << "\tValor ingresado incorrecto";
		else if (Estudiantes.nota1 < 0 || Estudiantes.nota1 > 100)
		{
			cout << "\tValor de la nota fuera de rango";
			cout << "\tDigite nuevamente la nota 1 con rango entre 0 y 100";
			cin >> Estudiantes.nota1;
		}
		
		cout << "\n\tDigite la nota 2 del estudiante: ";
		cin >> Estudiantes.nota2;
		if (cin.fail())
			cout << "\tValor ingresado incorrecto";
		else if (Estudiantes.nota2 < 0 || Estudiantes.nota2 > 100)
		{
			cout << "\tValor de la nota fuera de rango";
			cout << "\tDigite nuevamente la nota 2 con rango entre 0 y 100";
			cin >> Estudiantes.nota2;
		}

		cout << "\n\tDigite la nota 3 del estudiante: ";
		cin >> Estudiantes.nota3;
		if (cin.fail())
			cout << "\tValor ingresado incorrecto";
		else if (Estudiantes.nota3 < 0 || Estudiantes.nota3 > 100)
		{
			cout << "\tValor de la nota fuera de rango";
			cout << "\tDigite nuevamente la nota 3 con rango entre 0 y 100";
			cin >> Estudiantes.nota3;
		}

		Estudiantes.promedioFinal = (((Estudiantes.nota1*25)/100)+ ((Estudiantes.nota2 * 35) / 100)+ ((Estudiantes.nota3 * 40) / 100)) ;

		if (Estudiantes.promedioFinal >= 70)
		{
			Estudiantes.estado = "Aprobado";
		}
		else if (Estudiantes.promedioFinal >= 50 && Estudiantes.promedioFinal <= 69)
		{
			Estudiantes.estado = "Aplazado";
		}
		else 
		{
			Estudiantes.estado = "Reprobado";
		}

		vEscribir.write((char*)&Estudiantes, sizeof(Estudiante)); ///CASTING PUNTERO * DIRRECION DE MEMORIA Y MANDARLE EL TAMA;O DEL REGISTRTO
		cout << "\n\tDesea Agregar otro estudiante? (S/N) ";
		cin >> respuesta;
	} while (toupper(respuesta == 'S') && vEscribir.good());


	cout << "\n\n";
	vEscribir.close();


}


void mostrarRegistro()
{//Crear variable de tipo resgisto que es una estructura
	Estudiante Estudiantes;
	// crear objeto tipo ifstream (lectura)
	ifstream vLeer("prueba.dat", ios::in | ios::binary);

	//leer primer registro 
	vLeer.read((char*)&Estudiantes, sizeof(Estudiante));

	//Si no hay problemas en lectura que lo muestre
	while (!vLeer.eof() && !vLeer.fail()) //Mientras no sea el fin del archivo y no haya ningun error mostrar
	{
		cout << "\n\tNombre:\t\t" << Estudiantes.nombre;
		cout << "\n\tApellido:\t" << Estudiantes.apellido;
		cout << "\n\tNota 1:\t\t" << Estudiantes.nota1;
		cout << "\n\tNota 2:\t\t" << Estudiantes.nota2;
		cout << "\n\tNota 3:\t\t" << Estudiantes.nota3;
		cout << "\n\tPromedio Final:\t" << Estudiantes.promedioFinal;
		cout << "\n\tEstado :\t\t" << Estudiantes.estado;
		//leer siguiente registro
		vLeer.read((char*)&Estudiantes, sizeof(Estudiante)); //No se pone esta instruccion entonces se encicla por que solo se muestra el primer registro
	}
	//cerrar
	vLeer.close();

}

int tamanioArchivo()
{
	int tamanio;
	ifstream vLeer("prueba.dat", ios::in | ios::binary);
	vLeer.seekg(0, vLeer.end);
	tamanio = vLeer.tellg() / sizeof(Estudiante);
	vLeer.close();
	return tamanio;

}

void buscarRegistroyMostrar(string pNombre)
{
	Estudiante Estudiantes;
	ifstream vLeer("prueba.dat", ios::in | ios::binary);
	vLeer.read((char*)&Estudiantes, sizeof(Estudiante));
	while (!vLeer.eof() && !vLeer.fail()) //Mientras no sea el fin del archivo y no haya ningun error mostrar
	{
		if (Estudiantes.nombre == pNombre)
		{
			cout << "\n\tNombre:\t\t" << Estudiantes.nombre;
			cout << "\n\tApellido:\t" << Estudiantes.apellido;
			cout << "\n\tNota 1:\t\t" << Estudiantes.nota1;
			cout << "\n\tNota 2:\t\t" << Estudiantes.nota2;
			cout << "\n\tNota 3:\t\t" << Estudiantes.nota3;
			cout << "\n\tPromedio Final:\t" << Estudiantes.promedioFinal;
			cout << "\n\tEstado :\t\t" << Estudiantes.estado;
		}
		//leer siguiente registro
		vLeer.read((char*)&Estudiantes, sizeof(Estudiante)); //No se pone esta instruccion entonces se encicla por que solo se muestra el primer registro
	}
	vLeer.close();

}