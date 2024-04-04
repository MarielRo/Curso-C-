/*
Instituto Nacional de Aprendizaje
Estudiante: Mariel Rojas
Fecha Creacion : 16/11/2022
Fecha Ultima Modificacion: 16/11/2022
Practica03_Ejercicio3
Conversiones Informaticas de KB, MB y GB.
*/

#include <iostream>
using namespace std;
int main()
{
	double number, baseUnit, unitConvert, newnum;//Variables

	cout << "\tDigite el tamaño del archivo: "; //Tamaño
	cin >> number;
	cout << "\tDigite la opcion de la unidad de medida del archivo: \n 1)KB \n 2)MB\n 3)GB" << endl;//Unidad de medida del archivo 
	cin >> baseUnit;
	cout << "\tDigite la opcion de la unidad de medida que quiere convertir: \n 1)KB \n 2)MB\n 3)GB\n" << endl; //Unidad de medida deseada
	cin >> unitConvert;

	if (baseUnit == 1 && unitConvert == 2) // KB a MB
	{
	 newnum = (number / 1024);  
	 cout << "\tLa conversion del tama;o del archivo es: " << newnum << "MB\n";
	}
	else if (baseUnit == 1 && unitConvert == 3)  // KB a GB
	{
	 newnum = (number / 1024 / 1024);
	 cout << "\tLa conversion del tamaño del archivo es de: " << newnum << "GB\n";
	}
	else if (baseUnit == 2 && unitConvert == 1)  //MB a KB
	{
	 newnum =(number * 1024);
	 cout << "\tLa conversion del tamaño del archivo es de: " << newnum << "KB\n";
	}
	else if (baseUnit == 2 && unitConvert == 3) // MB a GB
	{
	 newnum = (number / 1024);
	 cout << "\tLa conversion del tamaño del archivo es de: " << newnum << "GB\n";
	}
	else if (baseUnit == 3 && unitConvert == 1) // GB a KB
	{
	 newnum = (number * 1024 * 1024);
	 cout << "\tLa conversion del tamaño del archivo es de: " << newnum << "KB\n";
	}
	else if (baseUnit == 3 && unitConvert == 2) // GB a MB
	{
	 newnum = (number * 1024);
	 cout << "\tLa conversion del tamaño del archivo es de: " << newnum << "MB\n";
	}
	else 
	{
	 cout << "Conversion no valida";
	}
					

}

