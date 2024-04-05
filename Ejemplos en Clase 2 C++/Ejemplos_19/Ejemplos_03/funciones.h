#pragma once

#include <iostream>
using namespace std;

double calcularPrecio(double precioProducto, double impuesto = 13.5, double express = 1500)
{
	//precioProducto es un parametro por valor
	//impuestos y express son parametros que tienen valores por defecto
	//Al invocar la funcion y no enviar (impuestos y expres) se toma los valores por defecto
	double resultado = 0;
	resultado = precioProducto + (precioProducto * (impuesto / 100)) + express;
	return resultado;
}
