#include <iostream>
#include <string>

using namespace std;

//En estas funciones el usuario digita un numero y este numero sera las carta escogida, ya sea si fue el jugador
//Que usa las fichas negras o las blancas.
string EscogerCartasBlancas(int card) {
	string cardB;
	switch (card)
	{
	case 1:
		cardB = "+B";
			break;
	case 2:
		cardB= "xB";
			break;
	case 3:
		cardB= "oB";
			break;
	case 4:
		cardB = "cB";
		break;
	default:
		cardB = to_string(card);
		break;
	}
	return cardB;
}

string EscogerCartasNegras(int card) {
	string cardN;
	switch (card)
	{
	case 1:
		cardN = "+N";
		break;
	case 2:
		cardN = "xN";
		break;
	case 3:
		cardN = "oN";
		break;
	case 4:
		cardN = "cB";
		break;
	default:
		cardN = to_string(card);
		break;
	}
	return cardN;

}