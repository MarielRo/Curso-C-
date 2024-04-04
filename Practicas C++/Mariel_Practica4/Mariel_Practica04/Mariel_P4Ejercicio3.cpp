/* Instituto Nacional de Aprendizaje
* Mariel Rojas Sanchez
* Fecha creacion: 18 / 11 / 2022
* Fecha Ultima modificacion: 18 / 11 / 2022
. Realice un programa en C++ que se encargue de calcular y mostrar el salario bruto de 10 trabajadores,
para lo cual debe solicitar el nombre del empleado, el salario por hora, el cual debe ser entre 1000 y 3000, y 
las horas semanales trabajadas, las cuales deben estar entre 30 y 50.
Solicite los datos de un empleado, los muestra y luego solicita los datos del siguiente empleado, 
hasta completar la planilla de los 10 colaboradores.


*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int employee;
    double salary, hours, hoursE, grossSalary = 0, valueE = 0;
    string name;

    for (employee = 1; employee <= 10; employee++) {

        cout << "\tEmpleado " << employee << endl;
        cout << "\tDigite su nombre: ";
        getline(cin, name);


        cout << "";
        //Salario por hora
        do
        {
            cout << "\tIngrese el salario por hora, este debe ser entre 1000 y 3000: ";
            cin >> salary;
            if (cin.fail())  //Valida que no se ingrese una letra
            {
                cout << "Dato ingresado incorrecto";
            }
            else if (salary < 0) //Si el salario es mennor a cero
            {
                cout << "Dato ingresado incorrecto";
            }

            if (salary < 1000 || salary > 3000) //Si el numero no esta dentro del rango
            {
                cout << "Error al digitar el salario \n";
                cout << "El salario debe ser entre 1000 y 3000 ";
                cin >> salary;
            }
        } while (salary < 1000 || salary > 3000); //Hasta que el numero se encuentre dentro del rango


        //Horas trabajadas

        do
        {
            cout << "\tIngrese el valor de las horas semanales trabajadas: ";
            cin >> hours;
            if (cin.fail())
            {
                cout << "Dato ingresado incorrecto";
            }

            if (hours < 0) {
                cout << "Dato ingresado incorrecto"; //Si las horas son menores a cero 
            }

            if (hours < 30 || hours > 50) //Si el numero no esta dentro del rango
            {
                cout << "Error al digitar las horas \n";
                cout << "Las horas deben de estar comprendidas entre 30 y 50 horas semanales";
                cin >> hours;
            }
        } while (hours < 30 || hours > 50); //Hasta que el numero se encuentre dentro del rango


        if (hours > 40)
        {
            valueE = salary + (salary * 0.5); //Si la cantidad de horas semanales es mayor a 40, se incrementa en un 50% para las horas extras.
            hoursE = (hours - 40) * valueE;

            grossSalary = (salary * 40) + hoursE;
        }
        else if (hours < 40)
        {
            grossSalary = salary * hours;
        }
        cout << "\tEl salario bruto del empleado " << employee << " es de: " << grossSalary << endl;
        cout << "\n";

        //Se reinician los valores de las variables para que en el siguiente ciclo no se sumen
        salary = 0;
        hours = 0;
        hoursE = 0;
        valueE = 0;
        grossSalary = 0;
    }
    return 0;
}
