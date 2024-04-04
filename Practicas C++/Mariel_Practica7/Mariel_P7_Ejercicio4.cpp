/*
Mariel Rojas Sanchez
Fecha creacion: 23/11/2022
Fecha ultima modificacion: 24/11/2022
Escriba un programa que calcule el monto que hay que pagar segun las horas de un estacionamiento
*/


//Biblioteca  
#include <iostream>
#include <vector>
#include "Funciones_Ej4.h"

using namespace std;


//Inicio 
int main()
{

    struct Client //Estructura de un cliente que contiene las horas que estuvo estacionado y el monto que va a tener que pagar
    {
        double hour;
        double charge;
    };

    //Variables
    int many = 10; //Cantidad de clientes
    int i = 0;
    double hours = 0; //
    double charges = 0;// funcion 
    vector<Client>data(many);

    while (i < many )
    {
        cout << "Digite las horas que estuvo estacionado : ";
        cin >> data[i].hour; //Se guarda en el vector, los valores de las horas 

        data[i].charge = calculateCharge(data[i].hour); //Guarda en el vector, con la estructura de cargo, las horas que tiene cada cliene

        hours = hours + data[i].hour; //Hours lleva la cuenta del total de horas de los 10 clientes

        charges = charges + data[i].charge; // Charges lleva la cuenta del total de cargos de los 10 clientes

        i = i + 1;
    }

    //Imprime todos los datos importantes
    cout << "\t\n Automovil " << "\t" << "Horas" << "\t\t" << "Cargo" << endl;
    for (i = 0; i < many; i++)
    {
        cout << " " << i + 1 << "\t\t  " << data[i].hour << "\t\t  " << data[i].charge << endl;
    }

    //Se imprime el total de las horas y los cargos
    cout << "TOTAL: " << "\t\t " << hours << "\t\t  " << charges << endl;

    return 0;
}