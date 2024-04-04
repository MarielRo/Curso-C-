/* Instituto Nacional de Aprendizaje
* Mariel Rojas Sanchez
* Fecha creacion: 18 / 11 / 2022
* Fecha Ultima modificacion: 18 / 11 / 2022
2.	Hacer un programa en C++ que solicite al usuario ingresar un número entre 5 y 20 (cantN),
el cual representará la cantidad de números que se van a mostrar en pantalla como salida.
Permita al usuario escoger entre una de las siguientes opciones:
1)	Escriba “cantN” números pares de forma descendente a partir del 100.
2)	Escriba los “cantN” primeros múltiplos del 7.
3)	Muestre el resultado de sumar los “cantN” números consecutivos a partir del 5
4)	Salir
nor y el promedio de los números ingresados.

*/

#include <iostream>
#include <stdlib.h> //Libreria contiene la funcion de limpiar pantalla
using namespace std;

int main()
{
  int cantN, option, mult,sum=0;//Varibles
  do
  {
	  cout << "Digite un numero del 5 al 20: ";
	  cin >> cantN;
	  if (cin.fail()) //Valida que no ingrese letras
	  {
		  cout << "Error al digitar el numero\n";
	  }

	  if (cantN < 5 || cantN > 20) //Si el numero no esta dentro del rango
	  {
		  cout << "Error al digitar el numero,el  numero debe de estar entre 5 y 20\n";
		  cout << "Digite un numero del 5 al 20: ";
		  cin >> cantN;
	  }
  } while (cantN < 5 || cantN > 20); //Hasta que el numero se encuentre dentro del rango

  system("cls");

  cout << "Digite la opcion que desea: \n";
  cout << "1)Escribir " << cantN << " numeros pares de forma descendente a partir del 100.\n";
  cout << "2)Escribir los " << cantN << " primeros multiplos del 7.\n";
  cout << "3)Muestre el resultado de sumar los " << cantN << " numeros consecutivos a partir del 5.\n";
  cout << "4)Salir\n";
  cin >> option;

  if (cin.fail())
  {
	  cout << "Error al digitar el numero\n";
  }
  switch (option)
  {
  case 1:
	  cout << "Los numeros pares de forma descendente del 100 al " << cantN << " son: \n";

	  for (int i = 100; i > cantN-1; i--) //Desde el 100 hasta cantN descendentemente
	  {
		  if (i % 2 == 0) //SI es par 
		  {
			  cout << i << ", "; // Se imprime en pantalla
		  }
	  }
	  cout << ""; 
	  break;
  case 2:
	  cout << "Los primeros " << cantN << " multiplos del 7 son: \n"; 
	  for (int i = 1; i <= cantN; i++) // Desde 1 hasta el numero ingresado + 1
	  {
		  mult = i * 7;
		  cout << mult << ", ";
	  }
	  break;
  case 3:
	  cout << "La suma consecutiva del 1 hasta el " << cantN << " es de: ";
	  for (int i = 1; i <= cantN; i++) 
	  {
		  sum += i;
	  }
	  cout << sum << endl;
  case 4:
	  cout << "Haz salido de programa.";
  default:
	  cout << "Valor digitado invalido";
	  break;
  }
  return 0;
}

