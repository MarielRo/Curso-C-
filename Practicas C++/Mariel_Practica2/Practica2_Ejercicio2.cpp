/*
Instituto Nacional de Aprendizaje
Fecha Creacion: 11/13/2022
Estudiante: Mariel Rojas
Fecha Ultima Modificacion: 11/13/2022
Calcular el salario bruto de un empleado, con respecto a las comisiones, y su salario base.
*/

#include <iostream>
using namespace std;

int main() //Inicio 
{
    double salary, sales, grossSalary; //Declaracion de variables 
    
    cout << "\tEste programa calcula tu salario bruto, con respecto a tus comisiones y tu salario base\n"; //Bienvenida 
    cout << "\tDigite su salario base mensual: "; //Solicita el salario base
    cin >> salary ; 
    cout << "\tDigite la el monto de las ventas realizadas de este mes: "; //Solicita las ventas generadas
    cin >> sales;
    cout << "";
    grossSalary = salary + (sales * 0.10); //Calcula el salario base + las comisiones de las ventas
    cout << "\tTu salario bruto este mes es de: "<< grossSalary << endl;

}//Fin 