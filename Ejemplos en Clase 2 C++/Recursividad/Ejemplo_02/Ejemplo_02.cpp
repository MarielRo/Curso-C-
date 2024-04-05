/* Mariel Rojas
* 09 / 12 / 2022
* Recursividad
*Programar un algoritmo recursivo que permita hacer la división por restas sucesivas. 
* consiste en restar del número mayor el menor,
si sigue siendo mayor se resta otra vez y así hasta que sea menor que el menor inicial.
Se debe llevar la cuenta de cuántas resta se hacen y ese número de restas posibles será el cociente.
Ejemplo: 1324 *- 312 = 1012  (1)
1012 - 312 = 700             (2)
700 - 312 = 388              (3)
388 - 312 = 76               (4) 76 es menor a 312 entonces se para

*/

#include <iostream>
using namespace std;
double NumeroRestas(int& numeroMayor, int numeroMenor)
{
    double resultado;
    if (numeroMayor < numeroMenor) // Si el numero es mnenor, ya no continua haciendose
    {
        resultado = 0;
    }
    else //si el numero es mayor al numero que divide
    {
        numeroMayor += -numeroMenor;
        resultado = NumeroRestas(numeroMayor, numeroMenor) + 1; // Se llama ella misma
    }
}

int main()
{
    int num1, num2, resultado;
    cout << "Escriba el numero mayor" << endl;
    cin >> num1;
    cout << "Escriba el numero menor" << endl;
    cin >> num2;

    if (num2 > num1)
    {
        cout << "El numero 1 debe ser mayor que el numero 2" << endl;
        system("pause");
    }
    else
    {
        resultado = NumeroRestas(num1, num2);
        cout << "Restas posibles es " << resultado << endl;
        cout << "Lo que sobra es: " << num1 << endl;

    }
    return 0;

}
