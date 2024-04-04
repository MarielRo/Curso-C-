/*Instituto Nacional de Aprendizaje
* Mariel Daniela Rojas Sanchez
* Fecha Creacion: 26/11/2022
* Fecha de ultima modificacion: 26/11/2022
1. Crear un cuadrado mágico.El programa llamará una función,
que se encuentra en un archivo .h,
que indique si la matriz es un cuadrado mágico o no. 
*/

#include <iostream>
#include "FuncionesP8Ej1.h"
using namespace std;


int main()
{
	int n, orden;
	bool magicoFilas, magicoColumnas;

	cout << "\tBienvenidos al programa del Cuadrado Magico\n";
	cout << "\tEn este programa puedes completar un cuadrado de orden 3x3 o 4x4\n";

	//Se valida que el usuario solo ingrese un valor de orden de la matris correcto
	do
	{
		cout << "\tDigite si quiere que sea de orden 3 o de orden 4: ";
		cin >> n;
		if (cin.fail())
			cout << "\tValor digitado incorrecto.\nDigite un valor valido\n";
		else if (n != 4 && n != 3)
			cout << "Valor fuera de rango, el cuadrado unicamente puede ser de orden 3 o 4\n";
	} while (n != 4 && n != 3);

	int matriz[n][n];

	//Constante magica dependiendo del valor de la matriz  
	int constanteMag = (n * (n * n + 1)) / 2; // 15 

	cout << "\tDigite los valores, para rellenar el cuadrado magico.\n";
	cout << "Recuerde que los valores tienen que ser de 1 al " << n * n << "\n";

	//Se  llena la matriz
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) {
			cout << "[" << i << "][" << j << "]: ";
			cin >> matriz[i][j];
		}
    }
    //Imprimir la matriz 
	cout << "\tCOLUMNAS \n";
	for (int i = 0; i < n; i++)
	{
		cout << "FILAS";
		for (int j = 0; j < n; j++)
		{

			cout << " [" << matriz[i][j] << "]" << " ";
		}
		cout << "\n";
	}

	//Se llaman las funciones que averiguan las sumas de las filas y columnas sean iguales a la constante magicaa 
	magicoFilas = identificarMagicoF(n, constanteMag, matriz);
	magicoColumnas = identificarMagicoC(n, constanteMag, matriz);

	if (magicoFilas == false && magicoColumnas == false ) // Si alguna de las funciones es falsa, entonces no es un cuadrado magico
	{
		cout << "\n\tLa matriz no es un cuadrado magico." << endl;
	}
	else
		cout << "\n\tLa matriz si es un cuadrado magico." << endl;

	return 0;
}
