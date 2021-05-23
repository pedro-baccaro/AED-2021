/*
Consigna:

Dados 10 valores informar el mayor

*/

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");
    
    float V, max;

    for (int i=0; i < 10; i++){
        cout << "Ingrese un valor: ";
        cin >> V;

        if (i==0){
            max=V;
        }
        else if (V > max){
            max=V;
        }

    }

    cout << "El mayor valor ingresado fue: " << max << endl;
    
    system("pause");
    return 0;
};