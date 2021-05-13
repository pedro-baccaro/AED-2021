/* 
Consigna:

Dada una terna de números naturales que representan al día, al mes y al año de una
determinada fecha informarla como un solo número natural de 8 dígitos con la forma
(AAAAMMDD).

*/

#include <iostream>

using namespace std;

int main()
{
    int day,month,year;
    cout << "Ingrese el día de su fecha: " << endl;
    cin >> day;
    cout << "Ingrese el mes de su fecha (en números): " << endl;
    cin >> month;
    cout << "Ingrese el año de su fecha: " << endl;
    cin >> year;
    cout << year*10000 + month*100 + day << endl;

    system("pause");
    return 0;
}