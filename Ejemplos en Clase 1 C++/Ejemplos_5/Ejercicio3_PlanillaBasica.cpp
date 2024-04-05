/*
Mariel Rojas Sanchez 
Fecha creacion:11/11/2022
Planilla Basica

*/
#include <iostream>
#include <string>
using namespace std;


int main()
{
	string name;
	double baseSalary,hoursE,hoursD,hourO,priceExtra,priceDouble,salarioBruto,salarioNeto,deducciones;
	cout << "\t----------------------\n";
	cout << "\t  Planilla Basica\n";
	cout << "\t----------------------\n";

	cout << "\tDigite su Nombre y su Primer Apellido: ";
	getline(cin, name); //Lee un texto hasta que se presiona enter
	cout << "\tDigite su salario Base Mensual: ";
	cin >> baseSalary;
	cout << "\tDigite la cantidad de Horas extra Trabajadas durante este mes: ";
	cin >> hoursE;
	cout << "\tDigite la cantidad de Horas Dobles Trabajadas durante este mes: ";
	cin >> hoursD;

	// Monto de una Hora Ordinaria 
	hourO = baseSalary / 192;

	// Monto de una Hora extra
	priceExtra = hourO * 1.5;

	// Monto de una Hora doble
	priceDouble = hourO * 2;

	//Salario Bruto
	salarioBruto = baseSalary + (priceExtra*hoursE) + (priceDouble*hoursD);

	// Deducciones 10 %
	deducciones = salarioBruto * 0.10;

	//Salario Neto
	salarioNeto = salarioBruto - deducciones;

	cout << "\tTRABAJADOR \t   SALARIO MENSUAL\t  HORAS EXTRA\t  HORAS DOBLES\t  SALARIO BRUTO\t\t DEDUCCIONES\t\t SALARIO NETO \n\t";
	cout << name <<"\t\t"<< baseSalary << "\t\t\t" << hoursE << "\t\t" << hoursD << "\t     " 
		<< salarioBruto << "\t\t  " << deducciones << "\t\t    " << salarioNeto << endl;




}
