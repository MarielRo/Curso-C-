/*
Mariel Rojas
Ejemplo 01 de estructuras clases 13

*/

#include <iostream>
using namespace std;



int main()
{

    //Creamos una estructura con los campos nombre,apellido1,apellido2,edad y deporte
    struct datosPersona
    {
        string nombre;
        string apellido1;
        string apellido2;
        int edad;
        string deporte;
    };

    //Se crea una variable de tipo struct que tiene datos persona
    datosPersona A;


    //Asignarle valores a cada uno de los campos de la variable
    A.nombre = "Mariel";
    A.apellido1 = "Rojas";
    A.apellido2 = "Sanchez";
    A.edad = 22;
    A.deporte = "Futbol";

    //Mostrar en pantalla el contenido de la variable A 
    cout << "\n\n\t ***Contenido de la variable A (Stuct)";
    cout << "\n\tNombre: " << A.nombre;
    cout << "\n\tApellido 1: " << A.apellido1;
    cout << "\n\tApellido 2: " << A.apellido2;
    cout << "\n\tEdad: " << A.edad;
    cout << "\n\tDeporte: " << A.deporte;





    return 0;

}

