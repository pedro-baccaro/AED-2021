/* 
Consigna:

Dado tres valores determinar e imprimir una leyenda según sea: “Forman
triangulo” o “No forman triangulo”.

*/

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");

    float A, B, C;
    cout << "Ingrese 3 valores: " << endl;
    cin >> A;
    cin >> B;
    cin >> C;

    if (A+B>C && A+C>B && B+C>A) {
        cout << "Los 3 valores forman un triángulo" << endl;
    }
    else {
        cout << "Los 3 valores no forman un triángulo" << endl;
    };
    
    system("pause");
    return 0;
}