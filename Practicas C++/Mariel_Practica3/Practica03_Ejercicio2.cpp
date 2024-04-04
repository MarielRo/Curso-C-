/*
Instituto Nacional de Aprendizaje
Estudiante: Mariel Rojas
Fecha Creacion : 16/11/2022
Fecha Ultima Modificacion: 16/11/2022
Practica03_Ejercicio2
Estado de aprobacion de un curso (Aprobado,Reprobado,Aplazado)
*/


#include <iostream>

#include <iomanip>
using namespace std;

int main()
{
	int note, absence;

	//Evalua que el usuario no digite letras o un numero invalido.

	cout << "\tDigite su nota final del curso: ";
	cin >> note;
	if (cin.fail()) {
		cout << " ERROR - Debe ser un número" << endl;
	}
	else if (note > 100 || note <= 0) {
		cout << " ERROR - La nota debe ser un valor mayor o igual a cero y menor a 100" << endl;
	}

	//Valida si las ausencias se digitaron de manera correcta.
	cout << "\tDigite las ausencias que tuvo durante el curso: ";
	cin >> absence;
	if (cin.fail()) {
		cout << " ERROR - Debe ser un número" << endl;
	}
	else if (absence < 0) {
		cout << " ERROR - Las ausencias deben ser mayor o igual a 0 " << endl;
	}

	//Hace las verificaciones para comprobar si reprobo o aprobo
	if (absence >= 2 || note < 60) {
		cout << "\tREPROBADO" << endl;
	}
	else if (absence < 2 && note >= 70) {
		cout << "\tAPROBADO " << endl;
	}
	else if (absence < 2 && note > 60 || note < 69) {
		cout << "\tAPLAZADO" << endl;
	}


}
