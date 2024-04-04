/*
Instituto Nacional de Aprendizaje
Estudiante: Mariel Rojas
Fecha Creacion : 16/11/2022
Fecha Ultima Modificacion: 16/11/2022
Practica03_Ejercicio3
Area y el perímetro de un circulo 
*/

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;


int main()
{
	float radio, perimeter, area;//Variables
	const float PI = 3.1416 ;//Constante PI

	cout << "\n\t Digite el valor del radio de un circulo\n";
	cin >> radio;
	if (cin.fail())
		cout << "Valor digitado incorrecto";

	area = PI * (pow(radio, 2));
	perimeter = 2 * (PI) * (radio);
	cout << "El area del circulo es de: " << setprecision(4) << area << endl;
	cout << "El perimetro del circulo es de: " << setprecision(4) << perimeter << endl;
}
