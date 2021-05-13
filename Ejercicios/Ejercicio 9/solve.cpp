/* 
Consigna:

Dados un mes y el año correspondiente informar cuantos días tiene el mes

*/

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");

    int month, year, dayAmount;
    
    cout << "Ingrese un año" << endl;
    cin >> year;
    cout << "Ingrese un mes" << endl;
    cin >> month;

    switch (month){
    case 1:
        dayAmount = 31;
        break;
    case 2:
        dayAmount = 28;
        break;
    case 3:
        dayAmount = 31;
        break;
    case 4:
        dayAmount = 30;
        break;
    case 5:
        dayAmount = 31;
        break;
    case 6:
        dayAmount = 30;
        break;
    case 7:
        dayAmount = 31;
        break;
    case 8:
        dayAmount = 31;
        break;
    case 9:
        dayAmount = 30;
        break;
    case 10:
        dayAmount = 31;
        break;
    case 11:
        dayAmount = 30;
        break;
    case 12:
        dayAmount = 31;
        break;
    
    default:
        cout << "Mes invalido" << endl;
        break;
    }

    if (month == 2) {
        if (year%100!=0){
            if (year%4==0){
                dayAmount++;
            };
        }
        else if (year%400==0){
            dayAmount++;
        };
    };

    cout << "El mes " << month << " del año " << year << " tiene " << dayAmount << " días." << endl;

    system("pause");
    return 0;
}