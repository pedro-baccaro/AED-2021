/* 
Consigna:

Dadas dos fechas informar cual es la más reciente. 
Determine cuales serían los datos de entrada y las leyendas a informar 
de acuerdo al proceso solicitado.

*/

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");

    int fecha1, fecha2;
    cout << "Por favor ingrese una fecha en formato AAAAMMDD: " << endl;
    cin >> fecha1;
    cout << "Ahora ingrese otra fecha en el mismo formato: " << endl;
    cin >> fecha2;

    if (fecha1 < fecha2) {
        cout << "La primera fecha es más reciente" << endl;
    }
    else if (fecha1 > fecha2) {
        cout << "La segunda fecha es más reciente" << endl;
    }
    else {
        cout << "Ambas fechas son iguales" << endl;
    };

    system("pause");
    return 0;
}