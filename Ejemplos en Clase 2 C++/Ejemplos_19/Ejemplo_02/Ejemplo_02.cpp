/*Mariel Rojas
* 9 / 12 / 2022
* Clase 19
* Sobrecarga de funciones 
* Un par�metro que ha sido declarado como constante 
significa que la funci�n no podr� cambiar el valor del mismo 
(sin importar si dicho par�metro se recibe por valor o por referencia).

* 
*/

#include "funciones.h"

int main()
{
    int miNumero = 12;
    cout << "\n\tResultado duplicar 12 es: " << duplicar(miNumero) << "\n\n";
    return 0;
}

