/* 
Consigna:

Dado un triángulo representado por sus lados L1, L2, L3, determinar e imprimir
una leyenda según sea: equilátero, isósceles o escálenos.

*/

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");

    float A, B, C;
    cout << "Ingrese 3 lados de un triangulo" << endl;
    cin >> A;
    cin >> B;
    cin >> C;

    if ((A == B) && (B == C)){
        cout << "Su triangulo es equilatero" << endl;
    }
    else if (A == B || A == C || B == C) {
        cout << "Su triangulo es isoceles" << endl;
    }
    else {
        cout << "Su triangulo es escaleno" << endl;
    };

    system("pause");
    return 0;
}