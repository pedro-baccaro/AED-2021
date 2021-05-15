/*
Consigna:

Informar los primeros 100 números naturales y su sumatoria.

*/

#include <iostream>
#include <locale.h>
#ifdef _WIN32 //Si el sistema operativo es windows
#define CLEAR "cls"
#else //En cualquier otro sistema operativo
#define CLEAR "clear"
#endif

using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");

    string E;
    E = "";

    do {
            cout << "Considera al 0 un numero natural? ([S]i o [N]o)" << endl;
            cin >> E;
            system(CLEAR);
            if (E == "s" or E == "S"){
                for (int i = 0; i<100; i++){
                    cout << i << endl;
                } 
            }
            else if (E == "n" or E == "N"){
                for (int i = 1; i<=100; i++){
                    cout << i << endl;
                }   
            }
            else{
                cout << "Valor Invalido. Su respuesta debe ser 'S' o 'N'" << endl;
            } 
        } 
    while (E != "S" and E != "s" and E != "N" and E != "n"); 

     

    system("pause");
    return 0;
}