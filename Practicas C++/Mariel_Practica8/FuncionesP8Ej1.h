#pragma once
#include <iostream>
using namespace std;

bool identificarMagicoF(int n,int constanteMag ,int matriz)
{
    bool magico = true;
    int i = 0;
    while (i < n && magico == true) {
        int suma = 0;

        for (int j = 0; j < n; j++) {
            suma += matriz[i][j];
        }
        if (suma != constanteMag) 
            magico = false;
        i++;
    }
    return magico;

}

bool identificarMagicoC(int n, int constanteMag, int matriz)
{
    bool magico = true;
    int j = 0;
    while (j < n && magico == true) {
        int suma = 0;
        for (int i = 0; i < n; i++) {
            suma += matriz[i][j];
        }
        if (suma != constanteMag) 
            magico = false;
        j++;
    }
    return magico;

}