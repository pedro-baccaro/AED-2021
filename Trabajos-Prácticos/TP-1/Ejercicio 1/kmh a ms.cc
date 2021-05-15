/*
Consigna:
Realizar un programa que lea una velocidad en km/hr y la transforme a
mts/seg.. El programa debe solicitar por pantalla un valor numérico, el luego
el usuario debe ingresar un valor, finalmente el programa debe mostrar por
pantalla el resultado de la conversión.
*/

#include <iostream>
#ifdef _WIN32 //Si el sistema operativo es windows
#define CLEAR "cls"
#else //En cualquier otro sistema operativo
#define CLEAR "clear"
#endif

using namespace std;

int main()
{
    float velocidadKMHR, velocidadMS;

    cout << "Por favor, ingrese una velocidad en Km/Hr:" << endl;
    cin >> velocidadKMHR;
    system(CLEAR);

    velocidadMS = velocidadKMHR/3.6;
    cout << velocidadKMHR << "Km/Hr = " << velocidadMS << "M/S." <<endl;
    
    system("pause");
    return 0;
}