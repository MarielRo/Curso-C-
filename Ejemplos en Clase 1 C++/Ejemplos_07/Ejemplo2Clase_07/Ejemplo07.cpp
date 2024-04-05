/* Ejemplo07
Mariel Rojas 
Clase 07
fecha Creaciom: 17/11/2022
*/ 


#include <iostream>
#include <string>
#include <iomanip>

using namespace std;


int main()
{
    string nombreComp, direccion, departamento;
    float precioHora, horasTrabajadas, salarioBruto;
    cout << "\nEscriba su nombre completo: ";
    getline(cin, nombreComp);
    cout << "\nEscriba su direccion: ";
    getline(cin, direccion);
    cout << "\nEscriba el departamendo donde pertenece: ";
    getline(cin, departamento);


    cout << "Digite las horas trabajadas: ";
    cin >> horasTrabajadas;
    if (cin.fail())
    {
        cout << "Valor digitado incorrecto";
    }
    else if (horasTrabajadas < 100 && horasTrabajadas > 200)
    {
        cout << "Las horas trabajadas se encuentran fuera de rango";
    }

    cout << "Digite el precio por hora: ";
    cin >> precioHora;

    if (cin.fail())
    {
        cout << "Valor digitado incorrecto\n";
    }
    else if (precioHora < 10000)
    {
        cout << "Error, el precio por hora no puede ser menor a 1000\n";
    }
    salarioBruto = precioHora * horasTrabajadas;

    cout << setw(25) << "Nombre:\t" << setw(25) << "Direccion\t" << setw(25) << "Departamento\t" << setw(25) << "Salario Bruto\t\n" <<  endl;
    cout << setw(25) << nombreComp << setw(25) << direccion << setw(25) << departamento << setw(25) << fixed << setprecision(2) << salarioBruto << endl;




    return 0;
}
