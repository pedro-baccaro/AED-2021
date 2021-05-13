/* 
Consigna:

Dados dos valores enteros y distintos, emitir una leyenda apropiada que informe cuál es el
mayor entre ellos.


*/

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");

    int A, B;
    cout << "Ingrese un valor entero: ";
    cin >> A;
    cout << "Ingrese otro valor entero (diferente al anterior): ";
    cin >> B;

    if (A > B){
        cout << "El primer valor es mayor" << endl;
    }
    else if (A < B) {
        cout << "El segundo valor es mayor" << endl;
    }
    else {
        cout << "ERROR: Los valores ingresados no son 2 enteros distintos" << endl;
    };

    system("pause");
    return 0;
}