/*
Consigna:

Dados N y M números naturales, informar su producto por sumas sucesivas.

*/

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");

    int N, M, P;
    
    do{
        cout << "Ingrese 2 Numeros Enteros Que Sean Mayores a 0" << endl;
        cin >> N;
        P = N;
        cin >> M;
    }
    while(N<=0 or M<=0);

    for (int i = 1; i < M; i++){
        P += N;    
    }
    
    cout << N << " * " << M << " = " << P << endl; 

    system("pause");
    return 0;
}