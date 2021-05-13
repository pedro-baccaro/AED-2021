/* 
Consigna:

Dado un numero entero de la forma (AAAAMMDD), que representa una fecha
valida mostrar el dia, mes y año que representa. 

*/

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");

    string date, year, month, day;
    cout << "Ingrese una fecha en formato \"AAAAMMDD\": ";
    cin >> date;
    year = date.substr(0, 4);
    month = date.substr(4, 2);
    day = date.substr(6, 2);
    cout << "El año es: " << year << ", el mes es " << month <<", y el día es " << day << endl;

    system("pause");
    return 0;
}