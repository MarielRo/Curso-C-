/*
Mariel Rojas Sanchez
Fecha creacion: 23/11/2022
Fecha ultima modificacion: 24/11/2022
Criba de eratostenes, averigua numeros primoss
*/
#include <iostream>
using namespace std;


int main()
{
	int i,a;
	bool primos[100] = {true}; //Arreglo que va verificando si es primo o no, si es primo, todos empienzan con truee

	//La lista se inicializa en truee del 0 al 100
	for ( i = 0; i < 100; i++)
	{
		primos[i] = true;
	}


	for (i = 2; i < 100; i++) //Se ignora el 0 y 1, se inicia con el subindice 2,  
	{
		for (a = 2; (i * a) < 100; a++) // i*2,i*3,i*4..i*100 for externo = i , interno = 2
		{
			primos[i * a] = false; //Se asigna false a todos los elementos que son multiplos del 2,3,4,5,6,7...100
		}
	}

	//se imprimen unicamente los numeros que si son primos
	cout << "\n\tNumeros primos del 1 al 100, segun la criba de eratostenes: \n\t";
	for (i = 2; i < 100; i++)
	{
		if (primos[i])
			cout << i << ",";
	}

	cout << endl;
	system("pause");
	return 0;

}