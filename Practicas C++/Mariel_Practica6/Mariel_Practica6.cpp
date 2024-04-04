/*
  Mariel Rojas Sanchez
  Fecha creacion: 22/11/22
  Fecha de ultima Modificacion: 22/11/22
  Crear un menu con 5 opciones diferentes, como obtener el numero mayot, 
  obtener promedio,obtener sumatoria, calcular aumento salarial
  y por ultimo la opcion de salir
*/

#include <iostream>
#include <string>
#include <stdlib.h>
#include "Funciones.h"
using namespace std;

int main()
{
	//Variables Necesarias
	int opcion, numero1, numero2,mayor,nota1,nota2,nota3,promedio,numeroSuma,suma,salarioBase,years,aumento;
	
	do
	{
		//Opciones del menu
		cout << "\n\t****Menu*****\n\n";
		cout << "\t Digite: \n\t 1-Numero Mayor\n\t 2-Promedio\n\t 3-Sumatoria\n\t 4-Aumento Salarial\n\t 5-Salir\n\n ";
		cin >> opcion;
		if (cin.fail()) //Validar que no se digiten letras
			cout << "Valor digitado incorrecto";

		switch (opcion)
		{
		case 1:
			cout << "\tHaz digitado la opcion de averiguar el numero mayor\n ";
		    cout << "\n\tDigite el primer numero: ";
			cin >> numero1;
			cout << "\n\tDigite el segundo numero: ";
			cin >> numero2;
			mayor = NumeroMayor(numero1, numero2);
			system("pause");
			system("cls");
			break;

		case 2:
		    cout << "\n\tHaz Digitado la opcion para observar el promedio";
			//Nota 1 Valida que la nota este en el rango de 0 a 100
			do
			{
				cout << "\n\tDigite la nota 1: ";
				cin >> nota1;
				if (cin.fail()) //Validar que no se digiten letras
					cout << "\tValor digitado incorrecto";
				else if (nota1 < 0 || nota1 > 100)
					cout << "\tLa nota 1 se encuentra fuera de rango. \nDigite el valor de la nota mayor a 0 y menor a 100";
			} while (nota1 < 0 || nota1 > 100);
			//Nota 2 Valida que la nota este en el rango de 0 a 100
			do
			{
				cout << "\n\tDigite la nota 2: ";
				cin >> nota2;
				if (cin.fail()) //Validar que no se digiten letras
					cout << "\tValor digitado incorrecto";
				else if (nota2 < 0 || nota2 > 100)
					cout << "\tLa nota 2 se encuentra fuera de rango..\n Digite el valor de la nota mayor a 0 y menor a 100";
			} while (nota2 < 0 || nota2 > 100);

			//Nota 3 //Valida que la nota este en el rango de 0 a 100
			do
			{
				cout << "\n\tDigite la nota 3: ";
				cin >> nota3;
				if (cin.fail()) //Validar que no se digiten letras
					cout << "\tValor digitado incorrecto";
				else if (nota3 < 0 || nota3 > 100)
					cout << "\tLa nota 3 se encuentra fuera de rango.\n Digite el valor de la nota mayor a 0 y menor a 100";
			} while (nota3 < 0 || nota3 > 100);

			promedio = ObtenerPromedio(nota1, nota2, nota3); //Llama a la funcion del promedio
			cout << "\n\tEl promedio de las tres notas es: " <<promedio << "\n\n";
			system("pause");
			system("cls");
			break;

		 case 3:
			 cout << "\\t Digitado la opcion para obtener la sumatoria";
			 do
			 {
				 cout << "\n\tDigite un numero mayor o igual a 10: ";
				 cin >> numeroSuma;
				 if (cin.fail()) //Validar que no se digiten letras
					 cout << "\tValor digitado incorrecto";
				 else if (numeroSuma < 10 )
					 cout << "\tEl numero debe ser mayor o igual a 10.\n Digite un valor igual o mayor a 10";
			 } while (numeroSuma < 10);

			 suma = ObtenerSumatoria(numeroSuma);
			 cout << "\n\tLa sumatoria del 10 al " << numeroSuma << " es de: " << suma << "\n\n";
			 system("pause");
			 system("cls");
				break;
		case 4:
			cout << "\\t Digitado la opcion para calcular su aumento salarial";
			cout << "\n\tDigite su salario base: ";
			cin >> salarioBase;
			if (cin.fail()) //Validar que no se digiten letras
				cout << "\tValor digitado incorrecto";
			cout << "\n\tDigite los años trabajados: ";
			cin >> years;
			if (cin.fail()) //Validar que no se digiten letras
				cout << "\tValor digitado incorrecto";
			aumento = AumentoSalarial(salarioBase,years);
			system("pause");
			system("cls");
			break;
		case 5:
			cout << "Haz salido del programa";
			break;

		default:
			cout << "Numero ingresado incorrecto";
			break;
		}

	} while (opcion != 5); //Hasta que desee salir





}
