#pragma once
#include <iostream>

using namespace std;


//Se crea una funcion que calcula el cargo que tienen los automoviles dependiendo de de las horas estacionadas
double calculateCharge(double hour) {
	double charge;
	if (hour <= 3) { // tres horas o menos se cobra 2000
		charge = 2000;
	}
	else if (hour >= 3 && hour <= 18) { // mas de tres horas se cobra 500 adicionales 
		charge = hour - 3;  // se cobran las horas que se pasan de 3
		charge = (charge * 500) + 2000;
	}
	else if (hour >= 19) { // No se puede cobrar mas de $10000
		charge = 10000; // mas de 24 horas se cobra maximo $ 10000
	}
	return charge;

}

