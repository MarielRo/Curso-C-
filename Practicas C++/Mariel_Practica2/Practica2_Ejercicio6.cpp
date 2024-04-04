/*
Instituto Nacional de Aprendizaje
Fecha Creacion: 14/11/2022
Estudiante: Mariel Rojas
Fecha Ultima Modificacion: 14/11/2022
Determinar cuál es el monto de aguinaldo que le corresponde a un trabajador con respecto a 12 salarios mensuales.
*/

#include <iostream>
using namespace std;

int main() //Inicio
{
	double s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12,aguinaldo; //Variables 

	cout << "\tEste programa determina el monto aproximado de tu aguinaldo\n"; //Bienvenida
	cout << "";
	cout << "Digite su salario Mensual del mes de Diciembre del año pasado: "; //Solicitan los 12 salarios
	cin >> s1;
	cout << "Digite su salario Mensual del mes de Enero: ";
	cin >> s2;
	cout << "Digite su salario Mensual del mes de Febrero: ";
	cin >> s3;
	cout << "Digite su salario Mensual del mes de Marzo: ";
	cin >> s4;
	cout << "Digite su salario Mensual del mes de Abril: ";
	cin >> s5;
	cout << "Digite su salario Mensual del mes de Mayo: ";
	cin >> s6;
	cout << "Digite su salario Mensual del mes de Junio: ";
	cin >> s7;
	cout << "Digite su salario Mensual del mes de Julio: ";
	cin >> s8;
	cout << "Digite su salario Mensual del mes de Agosto: ";
	cin >> s9;
	cout << "Digite su salario Mensual del mes de Septiembre: ";
	cin >> s10;
	cout << "Digite su salario Mensual del mes de Octubre: ";
	cin >> s11;
	cout << "Digite su salario Mensual del mes de Noviembre: "; //													
	cin >> s12;

	aguinaldo = (s1 + s2 + s3 + s4 + s5 + s6 + s7 + s8 + s9 + s10 + s11 + s12) / 12; //Se suman la cantidad de salarios y se dividen entre 12
	cout << "El aguinaldo correspoindiente es de " << aguinaldo << " Colones aproximadamente\n"; //Imprime el monto del aguianldo correspondiente.
} // Fin
