#pragma once
#include <iostream>
using namespace std;

//Creamos una estructura con los campos nombre,apellido1,apellido2,edad y deporte
struct datosPersona
{
        string nombre;
        string apellido1;
        string apellido2;
        int edad;
        string deporte;
};

datosPersona  ingresarDatosEnRegistro(string pNombre, string pApellido1,
    string pApellido2, int pEdad, string pDeporte)
{
    datosPersona Registro;
    Registro.nombre = pNombre;
    Registro.apellido1 = pApellido1;
    Registro.apellido2 = pApellido2;
    Registro.edad = pEdad;
    Registro.deporte = pDeporte;


    return Registro; //Retorna datosPersona
}

void mostrarRegistro(datosPersona parametroDP)
{
    cout << "\n\n\t ***Contenido de la variable A (Stuct)";
    cout << "\n\tNombre: " << parametroDP.nombre;
    cout << "\n\tApellido 1: " << parametroDP.apellido1;
    cout << "\n\tApellido 2: " << parametroDP.apellido2;
    cout << "\n\tEdad: " << parametroDP.edad;
    cout << "\n\tDeporte: " << parametroDP.deporte;
    cout << "\n\n";

    system("pause");

}
