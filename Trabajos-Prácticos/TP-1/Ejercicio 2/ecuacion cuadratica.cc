/*
Consigna:
Confeccionar un programa que calcule la solución 
de una ecuación cuadrática:
y = ax² +bx + c
*/

#include <iostream>
#include <cmath>

#ifdef _WIN32 //Si el sistema operativo es windows
#define CLEAR "cls"
#else //En cualquier otro sistema operativo
#define CLEAR "clear"
#endif

using namespace std;

int main()
{

    float A, B, C, X1, X2;

    cout << "Ingrese A ( [A]*x^2 + B*x + C )" << endl;
    cin >> A;
    system(CLEAR);
    cout << "Ingrese B ( A*x^2 + [B]*x + C )" <<endl;
    cin >> B;
    system(CLEAR);
    cout << "Ingrese C ( A*x^2 + B*x + [C] )" << endl;
    cin >> C;
    system(CLEAR);

    cout << "(" << A << ")*x^2 + (" << B << ")*x + (" << C << ")" << endl;

    X1 = (-B+sqrt(pow(B, 2.0)-4*A*C))/(2*A);
    X2 = (-B-sqrt(pow(B, 2.0)-4*A*C))/(2*A);

    cout << "X1 = " << X1 << endl;
    cout << "X2 = " << X2 << endl;
    
    system("pause");
    return 0;
}