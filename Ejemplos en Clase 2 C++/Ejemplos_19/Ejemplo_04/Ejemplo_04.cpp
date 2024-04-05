/*Mariel Rojas
* 9 / 12 / 2022
* Clase 19
* Sobrecarga de funciones
 Parametros por referencia y por puntero
*
*/

#include "funciones.h"

int main()
{
    int num2 = 200; //Definir variable
    int* PunteroNum2 = &num2; // Se crea el puntero a la variable anterior

    // num2 = 200
    cout << "\n\tAntes del llamado      :" << num2;
    //Se le llama a la funcion con un parametro por referencia
    funcionReferencia(num2);
    cout << "\n\tDespues del llamado por referencia: " << num2;


    //Puntero

    cout << "\n\tAntes del llamado      :" << *PunteroNum2;
    //Se le llama a la funcion con un parametro tipo puntero
    funcionPuntero(PunteroNum2);
    cout << "\n\tDespues del llamado por referencia: " << *PunteroNum2;





}

