/*
Instituto Nacional de Aprendizaje
Fecha Creacion: 11/13/2022
Estudiante: Mariel Rojas
Fecha Ultima Modificacion: 11/13/2022
Determinar la cantidad de segundos, de las horas, minutos y segundos ingresados por el usuario 
*/

#include <iostream>
using namespace std;

int main() //Inicio
{
    float hours, minutes, seconds,totalSeconds;
    cout << "\tEste programa determina la cantidad de segundos en una hora especifica dada.\n"; //Bienvenida
    cout << "";
    cout << "\tDigite la hora: "; //Solicita la hora
    cin >> hours;
    cout << "\tDigite los minutos: "; //Solicita minutos
    cin >> minutes;
    cout << "\tDigite los segundos: "; //Solicita segundos
    cin >> seconds;
    totalSeconds = (hours * 3600) + (minutes * 60) + seconds; //Averigua el total de segundos
    cout <<"\t" << hours << " Hora, " << minutes << " minutos, " << seconds << " segundos, equivalen a " << totalSeconds << " segundos. " << endl; //Imprime el resultado
} //Fin 

