/*
Consigna:

Dada una serie de M pares {color, número} que corresponden a los tiros de una ruleta. Se pide informar:
    a) cuántas veces salió el número cero y el número anterior a cada cero
    b) cuántas veces seguidas llegó a repetirse el color negro
    c) cuántas veces seguidas llegó a repetirse el mismo número y cuál fue
    d) el mayor número de veces seguidas que salieron alternados el rojo y el negro
    e) el mayor número de veces seguidas que se negó la segunda docenas

*/

#include <iostream>
#include <locale.h>
#include <vector>

using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");

    int M, numeroActual, numeroAnterior;
    char col, colorActual, colorAnterior;
    int num, cantCeros=0;
    int negroRep=0, negroRepMax=0;
    int numRep=0, numRepMax=0, queNumRep=0;
    int colorAlt=0, colorAltMax=0;
    int noDocenaRep=0, noDocenaRepMax=0;
    string anterioresACeroStr="ninguno";
    vector<char> colores;
    vector<int> numeros, anterioresACero;

    cout << "Ingrese M: " << endl;
    cin >> M;

    for (int i=1; i<=M; i++){
        cout << "\nIngrese el color ([R]ojo, [N]egro, o [C]ero) del tiro " << i << ": " << endl;
        cin >> col;
        colores.push_back(col);

        cout << "\nIngrese el numero [0-36] del tiro " << i << ": " << endl;
        cin >> num;
        numeros.push_back(num);
    }

    for (int i=0; i<M; i++){
        numeroActual = numeros[i]; 
        numeroAnterior = numeros[i-1];
        colorActual = colores[i];
        colorAnterior = colores[i-1];

        if (numeroActual==0){
            // a) cuántas veces salió el número cero 
            cantCeros++;
        }

        if (i!=0){
            if (numeroActual==0){
                // a.1) el número anterior a cada cero
                anterioresACeroStr="";
                anterioresACero.push_back(numeroAnterior);
            }

            // b) cuántas veces seguidas llegó a repetirse el color negro
            if (colorActual=='N' && colorAnterior=='N'){
                negroRep++;
            }
            else{
                negroRep=0;
            }
            if (negroRep>negroRepMax){
                negroRepMax=negroRep;
            }

            // c) cuántas veces seguidas llegó a repetirse el mismo número y cuál fue
            if (numeroAnterior == numeroActual){
                numRep++;
            }
            else{
                numRep=0;
            }
            if (numRep>numRepMax){
                numRepMax=numRep;
                queNumRep=numeroActual;
            }

            // d) el mayor número de veces seguidas que salieron alternados el rojo y el negro
            if ( (colorActual=='N' && colorAnterior=='R') || (colorActual=='R' && colorAnterior=='N') ){
                colorAlt++;
            }
            else{
                colorAlt=0;
            }
            if(colorAlt>colorAltMax){
                colorAltMax=colorAlt;
            }

            // e) el mayor número de veces seguidas que se negó la segunda docena
            if (!(numeroActual>12 && numeroActual<24) && !(numeroAnterior>12 && numeroAnterior<24)){
                noDocenaRep++;
            }
            else{
                noDocenaRep=0;
            }
            if(noDocenaRep>noDocenaRepMax){
                noDocenaRepMax=noDocenaRep;
            }
        }
    }

    for (int i=0; i<anterioresACero.size(); i++){
        if (i<anterioresACero.size()-1)
            anterioresACeroStr+=(to_string(anterioresACero[i])+", ");
        else
            anterioresACeroStr+=to_string(anterioresACero[i]);
    }
    
    cout << "\nA- El 0 salio " << cantCeros << " veces" << endl;
    cout << "   Los numeros anteriores a cada 0 son " + anterioresACeroStr << endl;
    cout << "\nB- El color negro llego a repetirse " << negroRepMax << " veces seguidas" << endl;

    if (numRepMax==0)
        cout << "\nC- Ningun numero se repitio varias veces seguidas" << endl;
    else
        cout << "\nC- El numero que mas se repitio fue el " << queNumRep << " y se repitio " << numRepMax << " veces" << endl;
    cout << "\nD- El mayor numero de veces seguidas que se alternaron el rojo y el negro fue " << colorAltMax << endl;
    cout << "\nE- El mayor numero de veces seguidas que se nego la segunda docena fue " << noDocenaRepMax << endl;

    system("pause");
    return 0;
};