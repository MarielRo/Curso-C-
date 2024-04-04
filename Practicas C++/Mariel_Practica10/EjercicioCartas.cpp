/*Instituto Nacional de Aprendizaje
Mariel Rojas
Fecha creacion: 29 / 11 / 2022
Práctica Evaluada # 10 C++ (STRUCT)
Fecha Ultima Modificacion: 29/ 11 / 2022
*/

#include"funcionesP10.h"
int main()
{
	int option,menu;
	vector<cartas>naipe(52); //Se crea el vector naipes que es de tipo estructura y tiene 52 espacios

	do
	{
		menu = mostrarMenu(option);//Funcion que se encarga de imprimir las opciones del menu
		system("cls");
		switch (option)
		{
		case 1:
			cout << "\n\t Se crea el mazo del naipe\n\t";
			crearBaraja(naipe); //Llama a la funcion que crea la baraja
			break;

		case 2:
			cout << "Baraja en L\241neaa: ";
			imprimeBarajaVertical(naipe); //Llama a funcion que imprime la baraja de forma vertical
			break;

		case 3:
			cout << "Baraja en Columnas: \n";
			imprimeBarajaHorizontal(naipe); //Llama a funcion que imprime la baraja de forma horizontal
			break;

		case 4:
			cout << "Haz salido del programa";

		default:
			cout << "Valor digitado incorrecto";
			break;
		}
	} while (option !=4);

    return 0;
}
