/*
 Instituto Nacional de Aprendizaje
 Fecha Creacion: 14/11/2022
 Estudiante: Mariel Rojas
 Fecha Ultima Modificacion: 14/11/2022
 Determinar cuántos postes son necesarios para cercar el terreno rectangular
*/

#include <iostream>
using namespace std;


int main() //Inicio
{
	double large, wide,stake; //Variables
	cout << "\nEste programa determina cuantos postes son necesarios para cercar un terreno rectangular\n"; //Bienvenida
	cout << "";
	cout << "\tDigite la medida del ancho del terrero: "; // Solicita la medida del ancho
	cin >> wide;
	large = 2 * wide;
	stake = (2 * (large * wide)) / 2; // Obtiene el perimetro dividido entre 2 para obtener la cantidad de postes necesarios
	cout << "\tLa cantidad de Postes necesarios para cercar el terreno son: " << stake << endl;
} //Fin 

