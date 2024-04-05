// Ejemplo03.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 29 / 11 / 2022
//Clase 15 colas priority

#include <iostream>
#include <queue>
using namespace std;



void colaUno()
{
	//Priority ordena de mayor a menor
	cout << "Ingresan los numeros";
	priority_queue<int, deque<int>> numeros;
	numeros.push(150);
	numeros.push(55);
	numeros.push(14);
	numeros.push(5000);
	numeros.push(1);
	numeros.push(300);
	while (!numeros.empty())
	{
		cout << "[" << numeros.top() << "]"<< endl;
		numeros.pop();
	}
	cout << "\n\n";

}

void colaDos()
{
	cout << "Ingresan los numeros";
	//Priority ordena de mayor a menor
	priority_queue<int, deque<int>, greater<int> > numeros2;


	numeros2.push(150);
	numeros2.push(55);
	numeros2.push(11);
	numeros2.push(500);
	numeros2.push(1);
	numeros2.push(600);


	while (!numeros2.empty())
	{
		cout << "[" << numeros2.top() << "]" << endl;
		numeros2.pop();
	}
	cout << "\n\n";
}





int main()
{
	cout << "\n\tVaciar la cola del elemento MAYOR al MENOR\n";
	colaUno();
		cout << "\n\tVaciar la cola del elemento  MENOR al MAYOR\n";
		colaDos();

}
