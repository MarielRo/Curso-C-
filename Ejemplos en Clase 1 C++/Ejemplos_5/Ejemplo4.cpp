/*Instituto Nacional de Aprendizaje
* Mariel Daniela Rojas Sanchez
* Fecha creacion: 15/11/2022
* Tercer Práctica, Ejercicio1
*/

#include <iostream>
using namespace std;

int main()
{
	float note1,note2,note3, prom;

	//Evalua que el usuario no digite letras o un numero invalido.

	cout << "\tDigite su nota del primer examen: ";
	cin >> note1;
	cout << "\tDigite su nota del segundo examen: ";
	cin >> note2;
	cout << "\tDigite su nota del tercer examen: ";
	cin >> note3;

	prom = (note1 + note2 + note3) / 3;


	//Hace las verificaciones para comprobar si reprobo o aprobo
	if (prom < 60) {
		cout << "\tREPROBADO" << endl;
	}
	else if (prom >= 90) {
		cout << "\tAPROBADO CON HONORES" << endl;
	}
	else if (prom > 60 || prom < 69) {
		cout << "\tAPLAZADO" << endl;
	}
	else if (prom > 70 || prom < 89) {
		cout << "\tAPROBADO " << endl;
	}
	

}