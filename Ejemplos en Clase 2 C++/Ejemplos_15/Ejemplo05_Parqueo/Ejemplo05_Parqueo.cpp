/*
* Mariel Rojas
* Fecha creacion : 29 / 11 /2022
* Programa que utilizando pilas, simula un parqueo.
*/
#include"funcionesej05.h"


int main()
{


	int menu, option, placa, cell;
	string name;
	stack<int>cliente;

	do
	{   //Funcion que muestra el menu
		menu = mostrarMenu(option);



		switch (option)
		{
		case 1:
			cout << "\t1)	Registrar el ingreso de un cliente.\n";
			cout << "\tDigite el numero de placa del vehiculo: \n";
			cin >> placa;
			/*cout << "Digite su nombre: ";
			cin.ignore();
			getline(cin, name);
			cout << "\tDigite su numero de relefono: \n";
			cin >> cell;*/
			ingresarVehiculo(cliente, placa); //name, cell

				break;

		case 2:
			cout << "\t2) Consultar el último vehículo ingresado \n\t";
			consultarUltimo(cliente);

			break;

		case 3:
			cout << "\t3) Sacar un vehículo (último vehículo ingresado)\n\t";
			sacarUltimo(cliente);
			break;


		case 4:
			
			cout << "4)	Consultar si hay vehículos en el estacionamiento\n\t";
			consultarVehiculos(cliente);
			break;

		case 5:
			cout << "\t5) Indicar cuántos vehículos hay en el estacionamiento.\n\t";

			mostrarTamanio(cliente);
			break;

		case 6:
			cout << "Haz salido del programa";
			break;

		default:
			cout << "Valor ingresado incorrecto";
			break;
		}

		


		
	} while (option != 6);
	return 0;
}