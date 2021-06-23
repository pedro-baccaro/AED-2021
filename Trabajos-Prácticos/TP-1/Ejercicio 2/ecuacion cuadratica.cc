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

    double A, B, C, X1, X2;

    cout << "Ingrese A" << endl;
    cin >> A;
    system(CLEAR);
    cout << "Ingrese B" <<endl;
    cin >> B;
    system(CLEAR);
    cout << "Ingrese C" << endl;
    cin >> C;
    system(CLEAR);

    cout << "Ecuacion ingresada: (" << A << ")*x^2 + (" << B << ")*x + (" << C << ")." << endl;

    if (pow(B, 2.0)-4*A*C >= 0 && 2*A!=0){
        X1 = (-B+sqrt(pow(B, 2.0)-4*A*C))/(2*A);
        X2 = (-B-sqrt(pow(B, 2.0)-4*A*C))/(2*A); 

        cout << "X1 = " << X1 << endl;
        cout << "X2 = " << X2 << endl;   
    }else{
        if (pow(B,2.0)-4*A*C < 0)
            cout << "Error: Se intento calcular la raiz cuadrada de un valor negativo." << endl;
        if (2*A==0)
            cout << "Error: Se intento dividir por 0." << endl;
        
        cout << "La ecuacion no posee raices reales." << endl;
    }
    
    system("pause");
    return 0;
}