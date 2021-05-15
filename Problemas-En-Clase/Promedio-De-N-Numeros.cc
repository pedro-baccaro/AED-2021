/*
Consigna:

Dados N números reales ingresados por teclado, indicar su promedio.
N se informa al comenzar el programa.

*/

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");
    
    int N;
    float num, tot, cant, prom;

    cout << "Ingrese N: ";
    cin >> N;

    for (int c = 1; c <= N; c++){
        cout << "Ingrese el valor numero " << c << ": " << endl;
        cin >> num;

        tot += num;
        cant++;
    }
    
    prom = tot/cant;
    cout << "El promedio es: " << prom << endl;

    system("pause");
    return 0;
}