/*
Consigna:

Dados 50 números enteros, informar el promedio de los mayores que 100 y la
suma de los menores que –10.

*/

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");

    int A, B, C, D;
    B = 0;
    C = 0;
    D = 0;


    for (int i = 1; i <= 50; i++){
        cout << "Ingrese el numero N°" << i << ": ";
        cin >> A;

        if (A > 100){
            B += A;
            C++;
        }
        else if (A < (-10)){
            D += A;
        }
    }

    cout << "El promedio de los mayores a 100 es " << B/C << endl;
    cout << "La suma de los menores que -10 es " << D << endl;

    system("pause");
    return 0;
}