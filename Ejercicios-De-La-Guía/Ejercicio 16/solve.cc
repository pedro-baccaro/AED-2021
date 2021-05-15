/*
Consigna:

Ingresar e informar valores, mientras que el valor ingresado no sea negativo.
Informar la cantidad de valores ingresados. 

*/

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");
    
    int v, c=0;
    
    while (true){
        cout << "Ingrese un valor numerico: ";
        cin >> v;
        
        if (v >= 0){
            c++;
        }

        cout << "Valor ingresado: " << v << endl;
        cout << "Cantidad de valores positivos ingresados: " << c << endl;
    };

    system("pause");
    return 0;
};