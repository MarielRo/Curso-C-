/*
Instituto Nacional de Aprendizaje
Fecha Creacion: 11/14/2022
Estudiante: Mariel Rojas
Fecha Ultima Modificacion: 11/1342022
Determinar la cantidad de bits,bytes, Kilobytes,Gigabytes que hay en los Megabytes
*/

#include <iostream>
using namespace std;

int main() //Inicio
{
    double mb, bits, byte, kb, gb;
    cout << "\tConversiones de MB a Bits,Bytes,KiloBytes,GigaBytes\n"; //Bienvenida al programa 
    cout << "";
    cout << "\tIntroduce la cantidad de MB que desea convertir : "; //Solicita la cantidad de MB
    cin >> mb;
    gb = mb / 1024; //Conversion de MB a GB
    kb = mb * 1024; // Conversion de MB a KB
    byte = kb * 1024; //Conversion de Mb a Bytes
    bits = mb * 8000000; //Conversion de MB a Bites
    cout << "";
    cout <<"\t" << mb << " MB equivalen a:\n\t " << bits << " Bits\n\t " << byte << " Bytes\n\t " << kb << " Kilobytes\n\t " << gb << " Gigabytes" << endl;

} //Fin