/*
Consigna:

Se ingresa un conjunto de valores float, cada uno de los cuales representan el
sueldo de un empleado, excepto el último valor que es cero e indica el fin del conjunto. Se pide
desarrollar un programa que determine e informe:
a) Cuántos empleados ganan menos $1.520.
b) Cuántos ganan $1.520 o más pero menos de $2.780.
c) Cuántos ganan $2.780 o más pero menos de $5.999.
d) Cuántos ganan $5.999 o más.


*/

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");
    
    float sueldo;
    int c=1, A=0, B=0, C=0, D=0;

    do{
        cout << "Ingrese el sueldo del empleado " << c << " o un 0 para terminar el programa: \n";
        cin >> sueldo;

        if (sueldo < 1520 && sueldo > 0){
            A++;
            c++;
        }
        else if (sueldo >= 1520 && sueldo < 2780){
            B++;
            c++;
        }
        else if (sueldo >= 2780 && sueldo < 5999){
            C++;
            c++;
        }
        else if (sueldo >= 5999){
            D++;
            c++;
        }

    } while (sueldo != 0);

    cout << "La cantidad de empleados con sueldo menor a $1.520 es: " << A << "\n";
    cout << "La cantidad de empleados con sueldo mayor/igual a $1.520 y menor a $2.780 es: " << B << "\n";
    cout << "La cantidad de empleados con sueldo mayor/igual a $2.780 y menor a $5.999 es: " << C << "\n";
    cout << "La cantidad de empleados con sueldo mayor/igual a $5.999 es: " << D << "\n";

    system("pause");
    return 0;
};