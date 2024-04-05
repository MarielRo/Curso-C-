/*
Mariel Rojas
Ejemplo 02 de estructuras clases 13
*/
#include "Funciones_E02.h"


int main()
{
	datosPersona persona1,persona2;
	persona1 = ingresarDatosEnRegistro("Luna", "Orozco", "Rojas", 0, "Dormir");
	mostrarRegistro(persona1);
	persona2 = ingresarDatosEnRegistro("Mariel", "Rojas", "Sanchez", 22, "Ciclismo");
	mostrarRegistro(persona2);


	return 0;
}

