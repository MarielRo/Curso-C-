#pragma once
#pragma once
#include <iostream>

using namespace std;

string esPanvocalica(string word)
{
	string panvocalica;
	int a = 0, e = 0, i = 0, o = 0, u = 0;//contadores

	for (int x = 0; x < word.size(); x++)
	{
		switch (word[x])
		{
		case 'a':
			a++;
			break;
		case 'e':
			e++;
			break;
		case 'i':
			i++;
			break;
		case 'o':
			o++;
			break;

		case 'u':
			u++;
			break;

		default:
			break;
		}
	}

	if (a >= 1 && e >= 1 && i >= 1 && o >= 1 && u >= 1)
	{
		cout << "\n\tLa palabra ingresada SI es Panvocalica";
	}
	else if (a < 1 || e < 1 || i < 1 || o < 1 || u < 1) //este if esta de mas, pero no me sirvio sin el 
	{
		cout << "\tn\tLa palabra ingresada NO es Panvocalica";
	}


	return panvocalica;
}