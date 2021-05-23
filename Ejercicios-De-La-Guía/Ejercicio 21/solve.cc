/*
Consigna:

Dados N valores informar el mayor, el menor y en que posición del conjunto
fueron ingresados.

*/

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");
    
    float V, max, min;
    int posMax, posMin, N;

    cout << "Ingrese N: ";
    cin >> N;

    for (int c=1; c <= N; c++){
        cout << "Ingrese un valor: ";
        cin >> V;

        if (c==1){
            max=V;
            min=V;
            posMax=c;
            posMin=c;
        }
        else if (V >= max){
            max=V;
            posMax=c;
        }
        else if (V <= min){
            min=V;
            posMin=c;
        }
    }
    

    cout << "El mayor valor ingresado fue: " << max << " en la posicion " << posMax << ".\n";
    cout << "El menor valor ingresado fue: " << min << " en la posicion " << posMin << ".\n";

    system("pause");
    return 0;
};