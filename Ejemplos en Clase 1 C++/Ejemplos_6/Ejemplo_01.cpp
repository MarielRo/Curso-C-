/*
INA
Estudiante:Mariel Rojas
Fecha Modificacion: 15/11/2022

Dias de la semana

*/

#include <iostream>
using namespace std;


int main()
{
	int days;
	cout << "\t Digite el dia de la semana que quiere observar\n";
	cin >> days;

	switch (days)
	{
	case 1:
		cout << "Hoy es LUNES";
		break;
	case 2:
		cout << "Hoy es MARTES";
		break;
	case 3:
		cout << "Hoy es MIERCOLES";
		break;
	case 4:
		cout << "Hoy es JUEVES";
		break;
	case 5:
		cout << "Hoy es VIERNES";
		break;
	case 6:
		cout << "Hoy es SABADO";
		break;
	case 7:
		cout << "Hoy es DOMINGO";
		break;
	default:
		cout << "Numero ingresado Invalido";
		break;
	}
	return 0;
}



