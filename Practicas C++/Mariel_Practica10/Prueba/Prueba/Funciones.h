#include <string>
#include <stdlib.h>

int aleatorios(int numeroMax, int numeroMin)
{
	int aleatorio;

	aleatorio = numeroMin + rand() % (numeroMax + 1 - numeroMin);

	return aleatorio;
}

//string Mayuscula(string frase)
//{
//	string mayuscula;
//	for (int i = 0; i < frase.length(); i++)
//	{
//		mayuscula = frase[i] = toupper(frase[i]);
//	}
//	return mayuscula;
//}
//

