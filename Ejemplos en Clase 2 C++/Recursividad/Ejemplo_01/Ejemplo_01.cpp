/* Mariel Rojas
* 09 / 12 / 2022
* Recursividad
* Una función es recursiva cuando se llama a sí misma
No todas la funciones pueden llamarse a si mismas, 
sino que deben estar diseñadas especialmente para que sean recursivas, 
de otro modo podrían conducir a bucles infinitos, o a que el programa termine inadecuada
*/

#include <iostream>
using namespace std;



 //FUNCION RECURSIVA:
int factorial(int n)
{
    //CASO BASE : (condicion de parada)
    if (n == 1)
    {
        return 1; 
    }
    // CASO ITERATIVO: (Se vuelve a llamar a si misma la funcion)
    else if (n > 1)
    {
        return n * factorial(n - 1);
    }
}

int main()
{
    system("cls");
    int elNumero = 0;
    cout << "\n\tEscriba un n\243mero para conocer el factorial\n\t";
    cin >> elNumero;
    cout << "\tEl factorial de " << elNumero << " es: " << factorial(elNumero) << "\n\n"; //Llama la fucion 
    return 0;
}

