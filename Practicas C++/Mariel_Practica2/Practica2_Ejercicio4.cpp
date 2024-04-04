/*
Instituto Nacional de Aprendizaje
Fecha Creacion: 11/13/2022
Estudiante: Mariel Rojas
Fecha Ultima Modificacion: 11/13/2022
Determinar la cantidad de horas que hay en los segundos dados. 
*/

#include <iostream>
using namespace std;

int main() //Inicio
{
    int  totalSeconds, hours, minutes,minutes2,seconds ;

    cout << "\tEste programa determina la cantidad de horas que hay en los segundos digitados.\n"; //Bienvenida
    cout << "\tDigite los segundos: "; //Solicita segundos
    cin >> totalSeconds;
    hours = totalSeconds / 3600 ; //Parte entera de las horas
    minutes= totalSeconds % 3600; //Residuo de las horas que serian los minutos
    minutes2 = minutes / 60; //Minutos 
    seconds = minutes % 60; // Segundos 

   cout << "\t" << totalSeconds << " segundos, equivalen a  " << hours << " Hora, " << minutes2 << " minutos y " << seconds << " segundos " << endl; //Imprime el resultado
} //Fin 

