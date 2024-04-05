// Ejemplo_04.cpp
//Clase 13, funciones, estructuras
#include "funciones.h"



int main()
{

    //Se declara un arreglo de 5 elementos de tipo vehiculo que vehiculo es de tipo strunc
    EstructuraSalario totalSalarios[5];
    llenarArreglo(totalSalarios);
    calcularSalarioTotal(totalSalarios);
    mostrarRegistro(totalSalarios);

    return 0;
}
