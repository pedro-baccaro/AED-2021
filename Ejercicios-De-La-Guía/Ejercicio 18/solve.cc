/*
Consigna:

Dado un valor M determinar y emitir un listado con los M primeros múltiplos de
3 que no lo sean de 5, dentro del conjunto de los números naturales.


*/

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");
    
    int i=0, M, num;

    cout << "Ingrese M: ";
    cin >> M;

    do{
        num = 3*i;
        if (num % 5 != 0 && num != 0){
            cout << num << endl;
        }
        i++;
 
    } while (i<=M);
    
    system("pause");
    return 0;
};