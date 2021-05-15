/*
Consigna:

Dada una serie de enteros finalizada en 0, indicar el mayor de los numeros ingresados.
No considerar al 0 como valor.

*/

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");
    
    int num, mayor;

    for (int C = 1; true; C++){
        cout << "Ingrese un valor entero o un 0 para finalizar: " << endl;
        cin >> num;

        if (C == 1){
            if (num == 0){
                cout << "No se han ingresado valores." << endl;
                break;
            } 
            else{
                mayor = num;
            }

        } 
        else{
            if (num == 0) {
                cout << "El mayor de los valores ingresados es: " << mayor << endl;
                break;
            }
            else{
                if (num > mayor){
                    mayor = num;
                }
            }
        }         
    }

    system("pause");
    return 0;
}