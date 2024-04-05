/*Mariel Rojas
* 9 / 12 / 2022
* Clase 19
* Sobrecarga de funciones
*Los parámetros usados por una función pueden declararse con un valor por defecto. 
Un parámetro que ha sido declarado con valor por defecto es opcional a la hora de hacer la llamada a la función,
ya que la función posee un valor, el cual será utilizado en caso que no sea especificado en el llamado a la función.

*
*/

#include "funciones.h"

int main()
{
    //Se pueden modificar los valores 
    double precioFinal = 0;
    //PrecioFinal = calculaPrecio();
    precioFinal = calcularPrecio(10000); //Parametro por valor, no es necesario poner los otros solo es indispensaable poner el parametro por valor
    cout << "\n\t Precio final Combo de 10000 es: " << precioFinal << "\n\t";
    precioFinal = calcularPrecio(10000, 20.5); // 2 parametros
    cout << "\n\tCon un impuuesto de 20.5: " << precioFinal << "\n\t";
    precioFinal = calcularPrecio(10000, 20.5, 5000); //tres parametros
    cout << "\n\tCon un impuuesto de 20.5 y 5000 de express: " << precioFinal << "\n\t";
    cout << "\n\t";
    system("pause");
    return 0;
}

