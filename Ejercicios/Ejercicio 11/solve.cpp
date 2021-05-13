/* 
Consigna:

Se ingresa una edad, mostrar por pantalla alguna de las siguientes leyendas:
- ‘menor’ si la edad es menor o igual a 12
- ‘cadete’ si la edad está comprendida entre 13 y 18
- ‘juvenil’ si la edad es mayor que 18 y no supera los 26
- ‘mayor’ en el caso que no cumpla ninguna de las condiciones anteriores

*/

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");

    int edad;

    cout << "Ingrese una edad: " << endl;
    cin >> edad;

    if (edad <= 12) {
        cout << "menor" << endl;
    }
    else if (edad <= 18) {
        cout << "cadete" << endl;
    }
    else if (edad <= 26) {
        cout << "juvenil" << endl;
    }
    else {
        cout << "mayor" << endl;
    }

    system("pause");
    return 0;
}