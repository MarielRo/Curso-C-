/*Instituto Nacional de Aprendizaje
* Mariel Daniela Rojas Sanchez.
* Módulo de Progamación Estructurada.
* Primer proyecto "Juego Mijnlieff.
* 26/09/2022
*/
#include <iostream>
#include <string>
#include <iomanip>
#include "Validations.h"
#include <stdlib.h>
#include "Card.h"
#include "Points.h"

using namespace std;

int main()
{
	//Declaracion de Variables
	int option, turn, move1,move2, winer = 0;
	string player1, player2, valid1, card;
	int row, column;


	//Inicializa la matriz
	string matriz[4][4];
	string matrizFull[4][4];

	//Inicio 

	//Bienvenida al juego 
	cout << "\t Bienvenido al juego de Mijnlieff\n";
	cout << "\n" << endl;
	//Se imprimen en pantalla algunas indicaciones importantes
	cout << "\t Instrucciones:\n";
	cout << "\t -Unicamente pueden jugar dos personas\n";
	cout << "\t -Cada jugador cuenta con 8 fichas, 2 de cruz, 2 de equiz, 2 circulos abiertos, 2 circulos cerrados\n";
	cout << "\t -El jugador con mas puntos es el ganador\n" << endl;

	//Se solicitan los nombres de los jugadores 
	cout << "\n";
	cout << "Ingrese el nombre del Jugador 1: ";
	getline(cin, player1);
	cout << "\n";
	cout << "Ingrese el nombre del Jugador 2: ";
	getline(cin, player2);
	cout << "\n";




	//Se solicita que digite 1 para comenzar
	cout << "Digite :  1) Para comenzar a jugar \n\t  2)Para salir ";
	cin >> option;


	if (option == 1)
	{
		//Imprime la matriz vacia para que el jugador comience a jugar
		cout << "\t Tablero de juego: " << endl;
		for (int i = 0; i < 4; i++) //Filas
		{
			cout << "\t\t";
			for (int j = 0; j < 4; j++) //Columnas
			{
				matriz[i][j] = ' ';
				cout << "[ ]" << matriz[i][j]; //Imprime la matriz vacia
			}
			cout << "\n";
		}

		//Imprime las fichas a utilizar
		cout << "\t Fichas " << endl;
		cout << "\t  1) + \n\t  2) x  \n\t  3) o \n\t  4) c \n";

		turn = 1 + rand() % (3 - 1);
		if (turn == 1)
		{
			cout << "\tComienza el jugador 1 " << "(" << player1 << ")" << " con las fichas Blancas" << endl;
			//Primera posicion 
			cout << "Recuerde que la primera jugada, debe ser en una esquina\n";
			do
			{
				//Ingresar esto a una funcion
				cout << "Ingrese la fila Inicial:"; //Fila 
				cin >> row;
				cout << "\n";
				cout << "Ingrese la columna Inicial:"; //Columnas 
				cin >> column;
				cout << "\n";

				if ((row != 0) && (column != 0)) //Si fila es diferente de 0 y la columna es diferente de 0 
				{
					cout << "Cordenadas no validas, la primer jugada debe de ser en una esquina\n";
				}
				else if ((row != 0) && (column != 3)) //Si fila es diferente de 0 y la columna es diferente de 3
				{
					cout << "Cordenadas no validas, la primer jugada debe de ser en una esquina\n";
				}
				else if ((row != 3) && (column != 0)) //Si fila es diferente de 3 y la columna es diferente de 0 
				{
					cout << "Cordenadas no validas, la primer jugada debe de ser en una esquina\n";
				}
				else if ((row != 3) && (column != 3)) //Si fila es diferente de 3 y la columna es diferente de 3
				{
					cout << "Cordenadas no validas, la primer jugada debe de ser en una esquina\n";
				}
				else
				{
					cout << "Ingrese la ficha que desea poner en esa posicion \n";
					cin >> card;
					//EscogerCartasBlancas((int) card)

				}
			} while (((row != 0) && (column != 0)) || ((row != 0) && (column != 3)) || ((row != 3) && (column != 0))
				|| ((row != 3) && (column != 3)));
			move1 = turn; //Se va a guardar el turno anterior para saber quien va en las iguiente jugada
		}
		else
		{
			cout << "\tComienza el jugador 2 " << "(" << player2 << ")" << " con las fichas Blancas" << endl;
			//Primera posicion 
			do
			{
				cout << "Ingrese la fila Inicial:"; //Fila 
				cin >> row;
				cout << "\n";
				cout << "Ingrese la columna Inicial:"; //Columnas 
				cin >> column;
				cout << "\n";

				if ((row != 0) || (column != 0))
				{
					cout << "Cordenadas no validas, la primer jugada debe de ser en una esquina\n";
				}
				else if ((row != 0) || (column != 3))
				{
					cout << "Cordenadas no validas, la primer jugada debe de ser en una esquina\n";
				}
				else if ((row != 3) || (column != 0))
				{
					cout << "Cordenadas no validas, la primer jugada debe de ser en una esquina\n";
				}
				else if ((row != 3) || (column != 3))
				{
					cout << "Cordenadas no validas, la primer jugada debe de ser en una esquina\n";
				}
				else
				{
					cout << "Ingrese la ficha que desea poner en esa posicion \n";
					cin >> card;
					//EscogerCartasBlancas((int) card) 

				}


			} while (((row != 0) && (column != 0)) || ((row != 0) && (column != 3)) || ((row != 3) && (column != 0))
				|| ((row != 3) && (column != 3)));

			

			move1 = turn; //Se va a guardar el turno anterior para saber quien va en las siguientes jugadas
		}
			cout << "\n";




		
	}
	else
	{
		cout << " Numero ingresado invalido ,Haz salido del juego";
	}

}

