/* Instituto Nacional de Aprendijaze 
* Modulo II (Programacion Estructurada)
* Fecha Creacion: 27 / 11 / 2022
* Mariel Daniela Rojas Sanchez.
* Fecha Ultima Modificacion: 9 / 11 / 2022
* Juego BlackJack
*/

#include "funcionesBlackJack.h"
#include <ctype.h>


int main()
{
    // Variables 
    vector<cartas>naipe(52); //Se crea el vector naipes que es de tipo estructura y tiene 52 espacios
	//vector<cartas> jugador1,jugador2,jugador3; // Vector de cartas que tambien contiene los jugadores
	string name1, name2, name3; //Nombre de los jugadores
	cartas cartasIniciales1J1, cartasIniciales2J1;  //Cartas iniciales del Jugador 1
	cartas cartasIniciales1J2, cartasIniciales2J2; //Cartas iniciales del Jugador 2
	cartas cartasIniciales1J3, cartasIniciales2J3; //Cartas iniciales del Jugador 3
	cartas cartasExtra1J1, cartasExtra2J1;  //Cartas extras del Jugador 1 Para la segunda y tercer ronda
	cartas cartasExtra1J2, cartasExtra2J2;  //Cartas extras del Jugador 2 Para la segunda y tercer ronda
	cartas cartasExtra1J3, cartasExtra2J3;  //Cartas extras del Jugador 3 Para la segunda y tercer ronda
	int sumaJugador1, sumaJugador2, sumaJugador3; //Sumatorias de las cartas 
	int menu, option; 
	int respuestaJ1, respuestaJ2, respuestaJ3; //Respuestas para pedir otra carta
	bool perdio1 = false, perdio2 = false, perdio3 = false; //Si pierden
	int n1, n2, n3; //Variables que determinan empates o ganador

	//Funcion que se encarga de imprimir las instrucciones principales del juego. 
	imprimirInstrucciones();
	system("cls");

	do
	{   
		//Funcion que muestra el menu, para jugar o salir
		option = mostrarMenu();
		

		switch (option) //el programa tiene la opcion de seguir jugando o de salir del programa
		{
		case 1:
	
			//Mensaje indicando que el juego ha comenzado
			cout << setw(50) << "++++++++++++++++++++++++\n";
			cout << setw(50) << "+ El juego ha comezado +\n";
			cout << setw(50) << "++++++++++++++++++++++++\n";
			cout << endl;

			//Funcion que se encarga de crear baraja
			crearBaraja(naipe);
			//Baraja se revuelve
			barajaRevuelta(naipe);

			//Se le solicitan los nombres a los trs jugadores
			//Nombres de jugador 1 
			cout << "\n\tDigite el nombre del primer jugador:\n"; 
			cin >> name1;
			//Nombres de jugador 2
			cout << "\n\tDigite el nombre del segundo jugador:\n";
			cin >> name2;
			//Nombres de jugador 3
			cout << "\n\tDigite el nombre del tercer jugador:\n";
			cin >> name3;
			system("cls"); //Se limpia la pantalla para despues de consultar los nombres


			//RONDA INICIAL, SE LE REPARTEN DOS CARTAS A CADA JUGADOR Y SE HACE LA SUMATORIA DE CADA PUNTAJE
		   //-----------------------------------------------------------------------------------------------
		   // ********Jugador 1**********
           //Se le reparte al jugador 1
			cartasIniciales1J1 = repartirCartasRevueltas(naipe); // Se llama la funcion que reparte cartas
			cartasIniciales2J1 = repartirCartasRevueltas(naipe); // Se llama la funcion que reparte cartas
			system("color 0b");
			cout << "Jugador: " << name1 << "\n";
			cout << cartasIniciales1J1.numero << cartasIniciales1J1.palo << "  " << cartasIniciales2J1.numero << cartasIniciales2J1.palo << "\n\n";

			//Valida el valor de la J Q K A
			cartasIniciales1J1 = validarCartasIniciales1(cartasIniciales1J1);
			cartasIniciales2J1 = validarCartasIniciales1(cartasIniciales2J1);

			//Se hace la suma del jugador 1
			sumaJugador1 = cartasIniciales1J1.numero + cartasIniciales2J1.numero;

			// Si hay una carta 14, valida la suma para valer el 14 (A) por 1
			sumaJugador1 = validarSuma(cartasIniciales1J1, cartasIniciales2J1, sumaJugador1);
			cout << name1 << " su puntuacion es de : " << sumaJugador1 << " puntos\n\n";


		   //*******jugador 2*******
		   // Se le reparte al jugador 2
			cartasIniciales1J2 = repartirCartasRevueltas(naipe); // Se llama la funcion que reparte cartas
			cartasIniciales2J2 = repartirCartasRevueltas(naipe);
			cout << "Jugador: " << name2 << "\n";
			//imprimirCarta(cartasIniciales1J2, cartasIniciales2J2); //Muestra los colores de la carta
			cout << cartasIniciales1J2.numero << cartasIniciales1J2.palo << "  " << cartasIniciales2J2.numero << cartasIniciales2J2.palo << "\n\n";
			
			//Valida el valor de la J Q K A
			cartasIniciales1J2 = validarCartasIniciales1(cartasIniciales1J2);
			cartasIniciales2J2 = validarCartasIniciales1(cartasIniciales2J2);
			//Se hace la suma del jugador 1
			sumaJugador2 = cartasIniciales1J2.numero + cartasIniciales2J2.numero;
			// Si hay una carta 14, valida la suma para valer el 14 (A) por 1
			sumaJugador2= validarSuma(cartasIniciales1J2, cartasIniciales2J2, sumaJugador2);
			cout << name2 << " su puntuacion es de : " << sumaJugador2 << " puntos\n\n";

		    //********* Jugador 3*******
			// Se le reparte al jugador 3
			cartasIniciales1J3 = repartirCartasRevueltas(naipe); // Se llama la funcion que reparte cartas
			cartasIniciales2J3 = repartirCartasRevueltas(naipe);
			cout << "Jugador: " << name3 << "\n";
			//imprimirCarta(cartasIniciales1J3, cartasIniciales2J3); //Muestra los colores de la carta
			cout << cartasIniciales1J3.numero << cartasIniciales1J3.palo << "  " << cartasIniciales2J3.numero << cartasIniciales2J3.palo << "\n\n";
			//Valida el valor de la J Q K A
			cartasIniciales1J3 = validarCartasIniciales1(cartasIniciales1J3);
			cartasIniciales2J3 = validarCartasIniciales1(cartasIniciales2J3);
			//Se hace la suma del jugador 1
			sumaJugador3 = cartasIniciales1J3.numero + cartasIniciales2J3.numero;
			// Si hay una carta 14, valida la suma para valer el 14 (A) por 1
			sumaJugador3 = validarSuma(cartasIniciales1J3, cartasIniciales2J3, sumaJugador3);
			cout << name3 << " su puntuacion es de : " << sumaJugador3 << " puntos\n\n";
			
			// Si algun jugador tiene 21 puntos, ese jugador es el ganador
			if (sumaJugador1 == 21) 
			{
				cout << name1 << " ha ganado. Felicidadesss :)\n\n";
				system("pause");
				system("cls");
				break; //Se acaba el juego aqui
			}
			if (sumaJugador2 == 21)
			{
				cout << name2 << " ha ganado. Felicidadesss :)\n\n";
				system("pause");
				system("cls");
				break; //Se acaba el juego aqui
			}
			if (sumaJugador3 == 21)
			{
				cout << name3 << " ha ganado. Felicidadesss :)\n\n";
				system("pause");
				system("cls");
				break; //Se acaba el juego aqui
			}
			//Fin PRIMERA RONDA
			//-----------------------------------------------------------------------------------------------



			/* SEGUNDA RONDA
			----------------------------------------------------------------------------------------------
			*/
			//Se valida si el jugador 2 se paso 21
			//Jugador 1
			if (sumaJugador1 > 21) //Si tiene mas de 21 puntos, se imprime un mensaje indicando que perdio
			{
				perdio1 = true;
				cout << name1 << " perdi\242, se pas\242 de los 21 puntos\n\n"; 

			}
			else if (sumaJugador1 < 21) // Si la suma es menor a 21puntos 
			{
				cout << name1 << " desea otra carta?\n Digite:\n 1.Para s\241: \n 2.Para no: \n"; //Se le pregunta si desea una carta
				cin >> respuestaJ1; //Se lee la respuesta
				if (cin.fail()) //Se validan errores
				{
					cout << "Valor ingresado incorrecto.Solamente puede ingresar el N\1671 \242 el N\1672 \n\n";
					cin >> respuestaJ1;
				}
				else if (respuestaJ1 == 1) //Si la respuesta es 1 Se le repartr una nueva carta
				{
					cartasExtra1J1 = repartirCartasRevueltas(naipe);
					cout << "Jugador: " << name1 << "\n";
					cout << cartasIniciales1J1.numero << cartasIniciales1J1.palo << "  " << cartasIniciales2J1.numero << cartasIniciales2J1.palo << "  " << cartasExtra1J1.numero << cartasExtra1J1.palo << "\n\n";
					cartasExtra1J1 = validarCartasIniciales1(cartasExtra1J1);
					sumaJugador1 = cartasIniciales1J1.numero + cartasIniciales2J1.numero + cartasExtra1J1.numero; //Se hace la suma con la carta extra
					//Si se le agrega un 14, (A) Se coloca = 1
					cartasExtra1J1 = validaCartaExtra(cartasExtra1J1, sumaJugador1);
			
					sumaJugador1 = cartasIniciales1J1.numero + cartasIniciales2J1.numero + cartasExtra1J1.numero; //Sumatoria de puntos con la carta nueva que ahora tiene de valor 1
					cout << name1 << " su puntuacion es de : " << sumaJugador1 << " puntos\n\n";  //Puntuacion Nueva
					if (sumaJugador1 == 21)
					{
						cout << name1 << " ha ganado. Felicidadesss :)\n\n";
						system("pause");
						system("cls");
						break;
					}
					else if (sumaJugador1 > 21)
					{
						perdio1 = true;
						cout << name1 << " perdi\242, se pas\242 de los 21 puntos\n\n";

					}
				}
				else if (respuestaJ1 == 2)
				{
					cout << "Continuas con tus mismas cartas\n\n";
				}

			}

			//Jugador 2
			if (sumaJugador2 > 21)
			{
				perdio2 = true;
				cout << name2 << " perdi\242, se pas\242 de los 21 puntos.\n\n";

			}
			else if (sumaJugador2 < 21)
			{
				cout << name2 << " desea otra carta?\n Digite:\n 1.Para s\241: \n 2.Para no: \n";
				cin >> respuestaJ2;
				if (cin.fail())
				{
					cout << "Valor ingresado incorrecto.Solamente puede ingresar el N\1671 \242 el N\1672 \n\n";
					cin >> respuestaJ1;
				}
				else if (respuestaJ2 == 1) //Si si desea una carta
				{
					cartasExtra1J2 = repartirCartasRevueltas(naipe); //Se le reparte dicha carta
					cout << "Jugador: " << name2 << "\n";
					cout << cartasIniciales1J2.numero << cartasIniciales1J2.palo << "  " << cartasIniciales2J2.numero << cartasIniciales2J2.palo << "  " << cartasExtra1J2.numero << cartasExtra1J2.palo << "\n\n";
					cartasExtra1J2 = validarCartasIniciales1(cartasExtra1J2); //Valida JQK
					sumaJugador2 = cartasIniciales1J2.numero + cartasIniciales2J2.numero + cartasExtra1J2.numero; //Se hace la suma con la carta extra

					//Si se le agrega un 14, (A) Se coloca = 1
					cartasExtra1J2 = validaCartaExtra(cartasExtra1J2, sumaJugador2);

					sumaJugador2 = cartasIniciales1J2.numero + cartasIniciales2J2.numero + cartasExtra1J2.numero;
					cout << name2 << " su puntuacion es de : " << sumaJugador2 << " puntos\n\n"; //Sumatoria con la carta nueva

					//Se valida si jugador 2 gano
					if (sumaJugador2 == 21)
					{
						cout << name2 << " ha ganado. Felicidadesss :)\n\n";
						system("pause");
						break;
					}
					else if (sumaJugador2 > 21)
					{
						perdio2 = true;
						cout << name2 << " perdi\242, se pas\242 de los 21 puntos.\n\n";

					}
				}
				else if (respuestaJ2 == 2)
				{
					cout << "Continuas con tus mismas cartas\n\n";
				}

			}

			//Jugador 3

			if (perdio1 == true && perdio2 == true) //Si los jugadores anteriores perdieron, entonces gana el tercero
			{
				cout << name3 << " ha ganado. Felicidadesss :)\n\n";
				system("pause");
				break;
			}

			if (sumaJugador3 > 21) //Si la suma es mayor a 21
			{
				perdio3 = true;
				cout << name3 << " perdi\242, se pas\242 de los 21 puntos,"; //Pierde

			}
			else if (sumaJugador3 < 21)
			{
				cout << name3 << " desea otra carta?\n Digite:\n 1.Para s\241: \n 2.Para no: \n";
				cin >> respuestaJ3;
				if (cin.fail())
					cout << "Valor ingresado incorrecto.Solamente puede ingresar el N\1671 \242 el N\1672 ";
				else if (respuestaJ3 == 1)
				{
					cartasExtra1J3 = repartirCartasRevueltas(naipe);
					cout << "Jugador: " << name3 << "\n";
					cout << cartasIniciales1J3.numero << cartasIniciales1J3.palo << "  " << cartasIniciales2J3.numero << cartasIniciales2J3.palo << "  " << cartasExtra1J3.numero << cartasExtra1J3.palo << "\n\n";
					cartasExtra1J3 = validarCartasIniciales1(cartasExtra1J3); //vALIDA JQK
					sumaJugador3 = cartasIniciales1J3.numero + cartasIniciales2J3.numero + cartasExtra1J3.numero; //Se hace la suma con la carta extra

					//Si se le agrega un 14, (A) Se coloca = 1
					cartasExtra1J3 = validaCartaExtra(cartasExtra1J3, sumaJugador3);

					sumaJugador3 = cartasIniciales1J3.numero + cartasIniciales2J3.numero + cartasExtra1J3.numero;
					cout << name3 << " su puntuacion es de : " << sumaJugador3 << " puntos\n\n";
					if (sumaJugador3 > 21)
					{
						perdio3 = true;
						cout << name3 << " perdi\242, se pas\242 de los 21 puntos\n";

					}
					else if (sumaJugador3 == 21)
					{
						cout << name3 << " ha ganado. Felicidadesss :)\n\n";
						system("pause");
						break;
					}
				}
				else if (respuestaJ3 == 2)
				{
					cout << "Continuas con tus mismas cartas\n";
				}

			}
			//Se valida si dos jugadores perdieron, si dos perdieron, gana el que no perdio
			if (perdio2 == true && perdio3 == true)
			{
				cout << name1 << " ha ganado. Felicidadesss :)\n\n";
				system("pause");
				break;
			}
			if (perdio1 == true && perdio3 == true)
			{
				cout << name2 << " ha ganado. Felicidadesss :)\n\n";
				system("pause");
				break;
			}

			//Si nungun jugador quiere otra carta entonces quiere decir que se van a quedar como estan y que nunguno logro llegar a 21
			// ni pasarse de 21
			// Por lo que el que este mas cercano a 21 es el ganador
			if (respuestaJ1 == 2 && respuestaJ2 == 2  && respuestaJ3 == 2)
			{
				n1 = 21 - sumaJugador1;
				n2 = 21 - sumaJugador2;
				n3= 21 - sumaJugador3;

				if (n1 == n2 && n1 == n3 && n2 == n3)
				{
					cout << "\nHubo un empate con respecto a los puntos.\nSi hay un jugador con menos cartas que los otros 2, gana dicho jugador";
					break;
				}
				else if (n1 < n2 ) // Si n1 es mayor a n2
				{ 
					if (n1 < n3)  // y menor a n3
					{
						cout << "\nEl ganador fue " << name1 << "\n\n";// n1 es el menor de los 3
						system("pause");
						break;
					}
					else 
					{
						cout << "\nEl ganador fue " << name3 << "\n\n"; // si n1 es menor a n2 pero no a n3, n3 es el menor
						system("pause");
						break;
					}	
				}
				else 
				{
					if (n2 < n3) //Sino, si n2 es menor a n3
					{
						cout << "\nEl ganador fue " << name2 << "\n\n"; // n2 es el menor
						system("pause");
						break;
					}
					else
					{
						cout << "\nEl ganador fue " << name3 << "\n\n"; // n2 es menor a n1, pero no es menor que n3, entonces n3 es el menor
						system("pause");
						break;
					}
						
				}
            } 
			//Fin de la segunda Rondaa
			//-------------------------------------------------------------------------------------------------------------------
			//TERCER Y ULTIMA RONDA
			
			//Jugador 1
			if (sumaJugador1 < 21)
			{
				cout << name1 << " desea otra carta?\n Digite:\n 1.Para s\241: \n 2.Para no: \n";
				cin >> respuestaJ1;
				if (cin.fail())
				{
					cout << "Valor ingresado incorrecto.Solamente puede ingresar el N\1671 \242 el N\1672 \n\n";
					cin >> respuestaJ1;
				}
				else if (respuestaJ1 == 1)
				{
					cartasExtra2J1 = repartirCartasRevueltas(naipe);
					cout << "Jugador: " << name1 << "\n";
					cout << cartasIniciales1J1.numero << cartasIniciales1J1.palo << "  " << cartasIniciales2J1.numero << cartasIniciales2J1.palo << "  " << cartasExtra1J1.numero << cartasExtra1J1.palo 
						<< cartasExtra2J1.numero << cartasExtra2J1.palo << "\n\n";
					cartasExtra2J1 = validarCartasIniciales1(cartasExtra2J1);
					sumaJugador1 = cartasIniciales1J1.numero + cartasIniciales2J1.numero + cartasExtra1J1.numero + cartasExtra2J1.numero; //Se hace la suma con las cartas extras
					//Si se le agrega un 14, (A) Se coloca = 1
					cartasExtra2J1 = validaCartaExtra(cartasExtra2J1, sumaJugador1);

					sumaJugador1 = cartasIniciales1J1.numero + cartasIniciales2J1.numero + cartasExtra1J1.numero + cartasExtra2J1.numero; //Sumatoria de puntos con la carta nueva que ahora tiene de valor 1
					cout << name1 << " su puntuacion es de : " << sumaJugador1 << " puntos\n\n";  //Puntuacion Nueva
					if (sumaJugador1 == 21)
					{
						cout << name1 << " ha ganado. Felicidadesss :)\n\n";
						system("pause");
						break;
					}
					else if (sumaJugador1 > 21)
					{
						perdio1 = true;
						cout << name1 << " perdi\242, se pas\242 de los 21 puntos\n\n";

					}
				}
				else if (respuestaJ1 == 2)
				{
					cout << "Continuas con tus mismas cartas\n\n";
				}

			}


			//Jugador 2
			if (perdio1 == true && perdio3 == true)
			{
				cout << name2 << " ha ganado. Felicidadesss :)\n\n";
				system("pause");
				break;
			}

			if (sumaJugador2 < 21)
			{
				cout << name2 << " desea otra carta?\n Digite:\n 1.Para s\241: \n 2.Para no: \n";
				cin >> respuestaJ2;
				if (cin.fail())
				{
					cout << "Valor ingresado incorrecto.Solamente puede ingresar el N\1671 \242 el N\1672 \n\n";
					cin >> respuestaJ2;
				}
				else if (respuestaJ2 == 1) //Si si desea una carta
				{
					cartasExtra2J2 = repartirCartasRevueltas(naipe); //Se le reparte dicha carta
					cout << "Jugador: " << name2 << "\n";
					cout << cartasIniciales1J2.numero << cartasIniciales1J2.palo << "  " << cartasIniciales2J2.numero << cartasIniciales2J2.palo << "  " << cartasExtra1J2.numero << cartasExtra1J2.palo 
						<< cartasExtra2J2.numero << cartasExtra2J2.palo << "\n\n";
					cartasExtra2J2 = validarCartasIniciales1(cartasExtra2J2); //Valida JQK
					sumaJugador2 = cartasIniciales1J2.numero + cartasIniciales2J2.numero + cartasExtra1J2.numero + cartasExtra2J2.numero; //Se hace la suma con la carta extra

					//Si se le agrega un 14, (A) Se coloca = 1
					cartasExtra2J2 = validaCartaExtra(cartasExtra2J2, sumaJugador2);

					sumaJugador2 = cartasIniciales1J2.numero + cartasIniciales2J2.numero + cartasExtra1J2.numero + cartasExtra2J2.numero;
					cout << name2 << " su puntuacion es de : " << sumaJugador2 << " puntos\n\n"; //Sumatoria con la carta nueva

					//Se valida si jugador 2 gano
					if (sumaJugador2 == 21)
					{
						cout << name2 << " ha ganado. Felicidadesss :)\n\n";
						system("pause");
						break;
					}
					else if (sumaJugador2 > 21)
					{
						perdio2 = true;
						cout << name2 << " perdi\242, se pas\242 de los 21 puntos.\n\n";

					}
				}
				else if (respuestaJ2 == 2)
				{
					cout << "Continuas con tus mismas cartas\n\n";
				}

			}

			//Jugador 3
			if (perdio1 == true && perdio2 == true)
			{
				cout << name3 << " ha ganado. Felicidadesss :)\n\n";
				system("pause");
				break;
			}

			if (sumaJugador3 < 21)
			{
				cout << name3 << " desea otra carta?\n Digite:\n 1.Para s\241: \n 2.Para no: \n";
				cin >> respuestaJ3;
				if (cin.fail())
					cout << "Valor ingresado incorrecto.Solamente puede ingresar el N\1671 \242 el N\1672 ";
				else if (respuestaJ3 == 1)
				{
					cartasExtra2J3 = repartirCartasRevueltas(naipe);
					cout << "Jugador: " << name3 << "\n";
					cout << cartasIniciales1J3.numero << cartasIniciales1J3.palo << "  " << cartasIniciales2J3.numero << cartasIniciales2J3.palo << "  " << cartasExtra1J3.numero << cartasExtra1J3.palo << "  "
						<< cartasExtra2J3.numero << cartasExtra2J3.palo << "\n\n";
					cartasExtra2J3 = validarCartasIniciales1(cartasExtra2J3); //Valida JQK
					sumaJugador3 = cartasIniciales1J3.numero + cartasIniciales2J3.numero + cartasExtra1J3.numero + cartasExtra2J3.numero; //Se hace la suma con la carta extra

					//Si se le agrega un 14, (A) Se coloca = 1
					cartasExtra2J3 = validaCartaExtra(cartasExtra2J3, sumaJugador3);

					sumaJugador3 = cartasIniciales1J3.numero + cartasIniciales2J3.numero + cartasExtra1J3.numero + cartasExtra2J3.numero;
					cout << name3 << " su puntuacion es de : " << sumaJugador3 << " puntos\n\n";
					if (sumaJugador3 > 21)
					{
						perdio3 = true;
						cout << name3 << " perdi\242, se pas\242 de los 21 puntos\n";

					}
					else if (sumaJugador3 == 21)
					{
						cout << name3 << " ha ganado. Felicidadesss :)\n\n";
						system("pause");
						break;
					}
				}
				else if (respuestaJ3 == 2)
				{
					cout << "Continuas con tus mismas cartas\n";
				}
			}


			//Validaciones finales
			
			//Se valida si dos jugadores perdieron, si dos perdieron, gana el que no perdio
			if (perdio2 == true && perdio3 == true) // Si los ultimos dos perdieron, gana el tercero
			{
				cout << name1 << " ha ganado. Felicidadesss :)\n\n";
				system("pause");
				break;
			}

			if (respuestaJ1 == 2 && respuestaJ2 == 2 && respuestaJ3 == 2) //Si nunguno pidio carta
			{
				n1 = 21 - sumaJugador1;
				n2 = 21 - sumaJugador2;
				n3 = 21 - sumaJugador3;

				if (n1 == n2 && n1 == n3 && n2 == n3) //Si todos tienen los mismos puntos
				{
					cout << "\nHubo un empate con respecto a los puntos.\nSi hay un jugador con menos cartas que los otros 2, gana dicho jugador"; //Hubo empate
					break;
				}
				else if (n1 < n2) // Si n1 es mayor a n2
				{
					if (n1 < n3)  // y menor a n3
					{
						cout << "\nEl ganador fue " << name1 << "\n\n";// n1 es el menor de los 3
						system("pause");
						break;
					}
					else
					{
						cout << "\nEl ganador fue " << name3 << "\n\n"; // si n1 es menor a n2 pero no a n3, n3 es el menor
						system("pause");
						break;
					}
				}
				else
				{
					if (n2 < n3) //Sino, si n2 es menor a n3
					{
						cout << "\nEl ganador fue " << name2 << "\n\n"; // n2 es el menor
						system("pause");
						break;
					}
					else
					{
						cout << "\nEl ganador fue " << name3 << "\n\n"; // n2 es menor a n1, pero no es menor que n3, entonces n3 es el menor
						system("pause");
						break;
					}

				}
			}

			cout << "La ultima Ronda ha acabado.\n";
			cout << "El ganador sera la persona que mas se aproximo a 21 puntos\n";
			n1 = 21 - sumaJugador1;
			n2 = 21 - sumaJugador2;
			n3 = 21 - sumaJugador3;

			if (n1 == n2 && n1 == n3 && n2 == n3)
			{
				cout << "\nHubo un empate con respecto a los puntos.\nSi hay un jugador con menos cartas que los otros 2, gana dicho jugador";
				break;
			}
			else if (n1 < n2) // Si n1 es mayor a n2
			{
				if (n1 < n3)  // y menor a n3
				{
					cout << "\nEl ganador fue " << name1 << "\n\n";// n1 es el menor de los 3
					system("pause");
					break;
				}
				else
				{
					cout << "\nEl ganador fue " << name3 << "\n\n"; // si n1 es menor a n2 pero no a n3, n3 es el menor
					system("pause");
					break;
				}
			}
			else
			{
				if (n2 < n3) //Sino, si n2 es menor a n3
				{
					cout << "\nEl ganador fue " << name2 << "\n\n"; // n2 es el menor
					system("pause");
					break;
				}
				else
				{
					cout << "\nEl ganador fue " << name3 << "\n\n"; // n2 es menor a n1, pero no es menor que n3, entonces n3 es el menor
					system("pause");
					break;
				}
			}
			 system("pause");
			 system("cls");
			 option = 2; //Hay un problema con la funcion de la baraja cuando se acaba el juego, no deja volver a incializar
			 break;
		case 2:
			cout << "\t Haz salido del programa.\n\n\n";
			break;
		default:
			cout << "Valor ingresado incorrecto";
			break;
		}
	} while (option != 2);


    return 0;

}
