/*
Instituto Nacional de Aprendizaje
Fecha Creacion: 11/13/2022
Estudiante: Mariel Rojas 
Fecha Ultima Modificacion: 11/13/2022
Determinar el area en metros cuadrados de un terreno rectangular con medidas dadas en pies. 
*/

#include <iostream>
using namespace std;

int main() //Inicio
{
	double front, deep,area;
	cout << "\tEste programa determina el area en metros cuadrados de un terreno rectangular\n\n"; //Bienvenida al programa
	cout << "\tDigite la medida en pies del frente del terreno: "; //Solicita el frente del terreno
	cin >> front;
	cout << "\tDigite la medida en pies del fondo del terreno: "; //Solicita el fondo del terreno
	cin >> deep; 
	area = (front * deep) / 3.281; // Calcula el area en metros cuadrados. Frente* fondo es el area en pies, se divide en 3.28 para pasar a metros
	cout << "\tEl area del terreno en metros cuadrados es de: " << area << "m2" << endl; // Resultado del area en metros cuadrados
	cin.get(); //Espera una tecla para finalizar el programa 
} //Fin 


