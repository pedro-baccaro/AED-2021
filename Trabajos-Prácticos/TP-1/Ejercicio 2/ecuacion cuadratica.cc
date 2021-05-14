/*
Consigna:
Confeccionar un programa que calcule la solución 
de una ecuación cuadrática:
y = ax² +bx + c
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    float A, B, C, X, Y;

    cout << "Ingrese A ( [A]*x^2 + B*x + C )" << endl;
    cin >> A;
    system("CLS");
    cout << "Ingrese B ( A*x^2 + [B]*x + C )" <<endl;
    cin >> B;
    system("CLS");
    cout << "Ingrese C ( A*x^2 + B*x + [C] )" << endl;
    cin >> C;
    system("CLS");

    cout << "(" << A << ")*x^2 + (" << B << ")*x + (" << C << ")" << endl;
    cout << "En que valor de x desea evaluar esta ecuacion?" << endl;
    cin >> X;
    system("CLS");

    Y = A*pow(X, 2.0) + B*X + C;
    cout << "El resultado es igual a: " << Y << endl;

    system("pause");
    return 0;
    }