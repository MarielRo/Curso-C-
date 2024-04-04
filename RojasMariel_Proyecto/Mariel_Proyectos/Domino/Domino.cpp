/* Instituto Nacional de Aprendijaze
* Modulo II (Programacion Estructurada)
* Fecha Creacion: 4 / 12 / 2022
* Mariel Daniela Rojas Sanchez.
* Fecha Ultima Modificacion: 9 / 11 / 2022
* Juego BlackJack
*/


#include "funcionesDomino.h"
#include <string>
#include <algorithm>

int main()
{
	string name1, name2, name3, name4;
	ficha fichas1;
	vector <ficha> fichas(28); //Vector que va a contener las fichas
	vector <ficha> tablero; //Vector que va a contener las fichas que los jugadores ingresan (tablero)
	vector <ficha> jugador1; //Vector de jugadores
	vector <ficha> jugador2;
	vector <ficha> jugador3;
	vector <ficha> jugador4; 
	ficha numero1, numero2;
	ficha A, B, C, D;


	bool encontrado;
    imprimirInstrucciones(); //Se llama la funcion que imprime las instrucciones del Juego.
    system("cls"); //Se limpia la pantalla 

	//Mensaje indicando que el juego ha comenzado
	cout << setw(50) << "++++++++++++++++++++++++\n";
	cout << setw(50) << "+ El juego ha comezado +\n";
	cout << setw(50) << "++++++++++++++++++++++++\n";
	cout << endl;

	//Se le solicitan los nombres a los cuatro jugadores
	//Nombres de jugador 1 
	cout << "\n\tDigite el nombre del primer jugador:\n";
	cin >> name1;
	//Nombres de jugador 2
	cout << "\n\tDigite el nombre del segundo jugador:\n";
	cin >> name2;
	//Nombres de jugador 3
	cout << "\n\tDigite el nombre del tercer jugador:\n";
	cin >> name3;
	//Nombres de jugador 4
	cout << "\n\tDigite el nombre del cuarto jugador:\n";
	cin >> name4;
	system("cls"); //Se limpia la pantalla para despues de consultar los nombres

	crearFichas(fichas); //Funcion que se encarga de crear las fichas
	revolverFichas(fichas); //Funcion que se encarga de revolver las fichas
	repartirFichas(fichas, jugador1); //Se llama la funcion que reparte al jugador 1
	repartirFichas(fichas, jugador2); // Se llama la funcion que reparte al jugador 2
	repartirFichas(fichas, jugador3); // Se llama la funcion que reparte al jugador 3
	repartirFichas(fichas, jugador4); // Se llama la funcion que reparte al jugador 4

	//Imprime las fichas de cada jugador
	cout << "Jugador: " << name1 << "\n\t\t";
	mostrarFichas(fichas,jugador1);
	cout << "\n";

	cout << "Jugador: " << name2 << "\n\t\t";
	mostrarFichas(fichas,jugador2);
	cout << "\n";

	cout << "Jugador: " << name3 << "\n\t\t";
	mostrarFichas(fichas,jugador3);
	cout << "\n";

	cout << "Jugador: " << name4 << "\n\t\t";
	mostrarFichas(fichas,jugador4);
	cout << "\n";

	//Se valida que inicie el jugador que saco [6|6]

	cout << "Inicia el jugador " << jugador1


















    return 0;
}

