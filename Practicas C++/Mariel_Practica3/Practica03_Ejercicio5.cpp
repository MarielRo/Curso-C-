/*
Mariel Rojas Sanchez
Fecha creacion : 16 / 11 / 2022
Fecha Ultima Modificacion : 17 / 11 / 2022
Planilla Basica
*/
#include <iostream>
#include <string>
using namespace std;


int main()
{
	string name;
	double baseSalary, hoursE, hoursD, hourO, priceExtra,
		priceDouble, salarioBruto, salarioNeto, deducciones,kilometros,years,
		incentivosYears = 0,incentivosKm = 0,incentivosExtra = 0,incentivosDouble=0,renta=0,capitalizacion = 0,compromiso =0,deduTotales;
	cout << "\t----------------------\n";
	cout << "\t  Planilla Intermedia\n";
	cout << "\t----------------------\n";

	cout << "\tDigite su Nombre y su Primer Apellido: ";
	getline(cin, name); //Lee un texto hasta que se presiona enter
	cout << "\tDigite su salario Base Mensual: ";
	cin >> baseSalary;
	cout << "\tDigite la cantidad de Horas extra Trabajadas durante este mes: ";
	cin >> hoursE;
	cout << "\tDigite la cantidad de Horas Dobles Trabajadas durante este mes: ";
	cin >> hoursD;
	cout << "\tDigite la cantidad de anos que lleva laborando en esta empresa: ";
	cin >>years;
	cout << "\tDigite la cantidad de Kilometos de su casa de habitación al lugar de trabajo: ";
	cin >> kilometros;


	// Monto de una Hora Ordinaria 
	hourO = baseSalary / 192;

	// Monto de una Hora extra
	priceExtra = (hourO * 1.5) * hoursE; //Monto de horas extra
	 
	// Monto de una Hora doble
	priceDouble = (hourO * 2) * hoursD; //Monto horas dobles

	//***********************************************************
	//Incentivos 

	//Años
	if (years>5)
	{
		incentivosYears = (years) * 2000;
	}
	
	//Kilometros 
	if (years > 5)
	{
		incentivosKm = 50000;
	}

	// Incentivo horas extra
	if (hoursE > 10)
	{
		incentivosExtra = 15000;
	}
	
	// Incentivo horas Dobles
	if (hoursD > 10)
	{
		incentivosDouble = (hoursD - 10) * 5000;
	}
	


	//Salario Bruto
	cout << "\tMonto Horas Extra: " << priceExtra << endl;
	cout << "\tMonto Horas Dobles: " << priceDouble << endl;
	cout << "\tIncentivo por traslado : " << incentivosKm << endl;
	cout << "\tIncentivo por trabajar mas de 10 Horas Extras: " << incentivosExtra << endl;
	cout << "\tIncentivo por trabajar mas de 10 Horas Dobles: " << incentivosDouble << endl <<"\n";

	salarioBruto = baseSalary + priceExtra  + priceDouble + incentivosKm + incentivosExtra + incentivosDouble;



	//***********************************************************
	// Deducciones
	// 
	//(CCSS: 9.25%) + (Pensiones e IVM : 5.25 %) + (Bco Popular : 0.50 %) 
	// 9.25+5.25+0.50 = 15%
	deducciones = salarioBruto * 0.15;
	
	//Impuesto renta
	if (salarioBruto>500000)
	{
		renta = (salarioBruto - 500000) * 0.10;
	}

	//Capitalizacion
	if (years < 10)
	{
		capitalizacion = 0.03;
	}


	//Falta Compromiso
	if (hoursE == 0 && hoursD == 0)
	{
		compromiso = 1000;
	}

	//Salario Neto
	salarioNeto = salarioBruto - deducciones - renta - capitalizacion - compromiso;
	deduTotales = deducciones + renta + capitalizacion + compromiso;


	cout << "\tTRABAJADOR \t   SALARIO MENSUAL\t   SALARIO BRUTO\t  DEDUCCIONES\t SALARIO NETO \n\t";
	cout << name << "\t\t" << baseSalary << "\t\t   " << salarioBruto << "\t\t   " << deduTotales << "\t   " << salarioNeto << "\n\n";


	cout << "\tTienes un incentivo anual de: " << incentivosYears << "\n\n" ;



	//************************************************************
















}
