// Ejercicio01_ImpresionCartas.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "funcionesP11.h"


using namespace std;





int main()
{
	int menu, option;
	vector<cartas>naipe(52); //Se crea el vector naipes que es de tipo estructura y tiene 52 espacios
	
 

    cout << "No imprima aqui diferente";
	cout << char(201) << "\n";
	do
	{
		menu = mostrarMenu(option);//Funcion que se encarga de imprimir las opciones del menu
		system("cls");
		switch (option)
		{
		case 1:
			cout << "\n\t Se crea el mazo del naipe\n\t";
			crearBaraja(naipe); //Llama a la funcion que crea la baraja
			break;

		case 2:
			cout << "Se imprime el mazo del naipe revuelto\n";
			imprimeBarajaRevuelta(naipe);
			break; 
		case 3:
			cout << "Imprime una sola carta:\n ";
			imprimirUnaCarta(naipe);
			break;
		case 4:
			cout << "Imprime dos cartas: \n";
			imprimirDosCarta(naipe);
			break;
		case 5:
			cout << "Haz salido del programa";

		default:
			cout << "Valor digitado incorrecto";
			break;
		}
	} while (option != 5);

	return 0;


}
