/* 
Consigna:

A partir de un valor entero ingresado por teclado, se pide informar:
a) La quinta parte de dicho valor
b) El resto de la división por 5
c) La séptima parte del resultado del punto a)

*/

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");

    int num;
    float a, b, c;
    cout << "Ingrese un valor entero" << endl;
    cin >> num;
    a = num/5;
    b = num%5;
    c = a/7;
    cout << "La quinta parte del valor es " << a << endl;
    cout << "El resto de su división por 5 es " << b << endl;
    cout << "La séptima parte de la quinta parte del valor es " << c << endl;

    system("pause");
    return 0;
}