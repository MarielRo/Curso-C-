/*Mariel Rojas
* 9 / 12 / 2022
* Clase 19
* Sobrecarga de funciones
*Los par�metros usados por una funci�n pueden declararse con un valor por defecto. 
Un par�metro que ha sido declarado con valor por defecto es opcional a la hora de hacer la llamada a la funci�n,
ya que la funci�n posee un valor, el cual ser� utilizado en caso que no sea especificado en el llamado a la funci�n.

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

