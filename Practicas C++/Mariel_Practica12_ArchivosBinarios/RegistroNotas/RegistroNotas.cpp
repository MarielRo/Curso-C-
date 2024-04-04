/*Mariel Daniela Rojas Sanchez
* Fecha creacion: 06/ 12 / 22
*/

#include "funciones.h"

int main()
{
	string vNombre;
	int op = 0;


	do
	{
		op = menu();

		switch (op)
		{
		case 1:
			crearArchivo();
			cout << "\n\t *** Archivo creado correctamente ***\n\n";
			system("pause");
			break;
		case 2:
			system("cls");
			agregarRegistro();
			cout << "\n\t *** Datos agregados correctamente ***\n\n";
			system("pause");
			break;
		case 3:
			system("cls");
			mostrarRegistro();
			system("pause");
			break;
		case 4:
			system("cls");
			cout << "\n\t El archivo tiene " << tamanioArchivo() << "registros\n";
			system("pause");
			break;
		case 5:
			system("cls");
			cout << "\n\t *** Digite el nombre a buscar: ***";
			cin >> vNombre;
			buscarRegistroyMostrar(vNombre);
			cout << "\n\n";
			system("pause");
			break; 

		default:
			system("cls");
			op == 6;
			cout << "\n\t Gracias por utilizar el programa de archivos binarios";
			system("pause");
			break;
		}
	} while (op != 6);
    return 0;
}
