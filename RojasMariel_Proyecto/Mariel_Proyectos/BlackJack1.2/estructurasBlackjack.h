#pragma once
#include<string>
using namespace std;

//Estrucutra la cual va a estar conformada por las cartas de naipe, que contienen su respectivo numero y palo.
struct cartas
{
	int numero; //La estructura va a tener numeros del 2 AL 10 y luego la J,Q,K,A
	char palo = {}; // va a tener 4 diferentes palos, corazones, dimantes, trebols y picas.

};

