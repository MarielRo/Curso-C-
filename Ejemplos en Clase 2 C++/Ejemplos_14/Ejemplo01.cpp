/*
* Mariel Daniela Roajas 
* Repaso de vectores 
* 


*/

#include <iostream>
#include <array>
#include <vector>
using namespace std;


int main()
{
	// Definir un vector tradicional
	int arregloTradicional[5] = { 1,2,3,4,5 };
	cout << "Impresion del vector tradicional: ";
	//Imprrension de un vector tradicional
	cout << "\n";
	for (int i = 0; i < 5; i++)
	{
		cout << "[" << arregloTradicional[i] << "]";
	}


	//Definir una matriz tradicional
	int matrizTradicional[3][2] = { {1,3},{5,4},{12,6} };
	//Imprension de matriz tradiciona;

	cout << "\n\n";
	cout << "Impresion de matriz tradicional: \n";
	for (int i = 0; i < 3; i++)
	{
		cout << "\n";
		for (int j = 0; j < 2; j++)
		{
			cout << "[" << matrizTradicional[i][j] << "]";
		}
	}
	cout << "\n\n";
	//Definir vector con clase array
	array <int, 5> vectorArray = { 2,4,5,6,7 };

	//Impresion de matriz con clase array
	cout << " Impresion de VECTOR con clase array:\n";
	for (auto& i : vectorArray)
	{
		cout << "[" << i << "]";

	}
	cout << "\n\n";
	//Definir matriz con clase array 
	// array<int,3> arreglo normal, serian columnas
	// array <         > 2 serian filas
	array<array<int, 3>, 2> matrizArray = { 1,3,5,5,4,6 };

	cout << "\nImprension de Matriz con clase array: \n";

	for (int i = 0; i < 2; i++)
	{
		cout << "\n";
		for (int j = 0; j < 3; j++)
		{
			cout << "[" << matrizTradicional[i][j] << "]";
		}

	}
	cout << "\n\n";
	//Definir vector con clase vector
	//vector<int>vector = { 5,8,9,7,10 };
	vector<int>vectorVec(5, 6);
	cout << "Vector con clase vector de 5 elementos con valor 6: \n";

	for (auto& i : vectorVec)
	{
		cout << "[" << i << "]";
	}
	cout << "\n\n";



	//Definir matriz con clase vector
	vector<vector<int>> matrizVectores = { {2,3,4},{5,7,8} };
	cout << "Matriz con clase vector de vectores: " ;
	for (int i = 0; i < 2; i++)
	{
		cout << "\n\n";
		for (int j = 0; j < 3; j++)
		{
			cout << "[" << matrizVectores[i][j] << "]";
		}
	}

	//Definir matriz con clase vector de vectores
	cout << "\n\n";

	vector<vector<int>> matrizVectores2(4, vector<int>(6));
	cout << "Matriz con clase vector de vectores: ";
	for (int i = 0; i < 4; i++)
	{
		cout << "\n\n";
		for (int j = 0; j < 6; j++)
		{
			matrizVectores2[i][j] = 10 + rand() % (90);

			cout << "[" << matrizVectores2[i][j] << "]";
		}

	}

	cout << "\n\n";

	//matriz con nueva fila
	vector<int> vector3(6, 60);

	matrizVectores2.push_back(vector3); //inserta una nueva fila
	matrizVectores2.push_back(vector3); //inserta una nueva fila
	matrizVectores2.push_back(vector3); //inserta una nueva fila
	matrizVectores2.push_back(vector3); //inserta una nueva fila

	cout << "Capacidad de la matriz:  " << matrizVectores2.capacity() << "\n";
	cout << "Capacidad de la matriz:  " << matrizVectores2.size() << "\n";

	cout << "Matriz con nueva fila: \n";
	for (int i = 0; i < matrizVectores2.size(); i++)
	{
		cout << "\n\n";
		for (int j = 0; j < 6; j++)
		{

			cout << "[" << matrizVectores2[i][j] << "]";
		}
	}



}








