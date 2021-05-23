/*
Consigna:

Se dispone de un lote de valores enteros positivos que finaliza con un número negativo.
El lote está dividido en sublotes por medio de valores cero. Desarrollar un programa que determine e informe:
    a) por cada sublote el promedio de valores
    b) el total de sublotes procesados
    c) el valor máximo del conjunto, indicando en que sublote se encontró y la posición relativa del mismo dentro del sublote
    d) valor mínimo de cada sublote
Nota: el lote puede estar vacío (primer valor negativo), o puede haber uno, varios o todos los sublotes vacíos (ceros consecutivos)

*/

#include <iostream>
#include <locale.h>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");
    
    vector<vector<int>> lote{{}};
    int num, sumaNum=0, maxNum, minNum, maxNumSublote, maxNumPos;
    int sublote=0;
    bool primeraVueltaMax=true, primeraVueltaMin=true, hayValores=false;

    //Se dispone de un lote de valores enteros positivos que finaliza con un número negativo.
    //El lote está dividido en sublotes por medio de valores cero
    do{
        cout << "Ingrese un valor positivo para agregar al sublote, un 0 para finalizar el sublote, o un valor negativo para finalizar el lote: " << endl;
        cin >> num;
        if (num>0){
            lote[sublote].push_back(num);
        }
        else if (num==0){
            sublote++;
            lote.push_back({});
        }
    }while (num >= 0);

    // a) por cada sublote el promedio de valores
    cout << "Promedio de los valores de cada sublote: \n" << endl;
    for (int i=0; i<lote.size() ; i++){
        for (int c=0; c<lote[i].size(); c++){
            sumaNum+=lote[i][c];
        }
        float prom = (float)sumaNum/(float)lote[i].size();
        if (isnan(prom)){
            cout << "El sublote " << i+1 << " no tiene valores" << endl;
        }
        else{
            cout << "El promedio de los valores del sublote " << i+1 << " es igual a " << prom << endl;    
        }
        sumaNum=0;
    }

    // b) el total de sublotes procesados
    cout << "\n\nTotal de sublotes procesados: \n" << endl;
    cout << "El total de sublotes procesados es: " << lote.size() << endl;

    // c) el valor máximo del conjunto, indicando en que sublote se encontró y la posición relativa del mismo dentro del sublote
    cout << "\n\nValor maximo y su ubicacion: \n" << endl;
    for (int i=0; i<lote.size() ; i++){
        for (int c=0; c<lote[i].size(); c++){
            if (primeraVueltaMax){
                maxNum=lote[i][c];
                maxNumSublote=i;
                maxNumPos=c;

                primeraVueltaMax=false;
                hayValores=true;
            } 
            else if (lote[i][c]>maxNum){
                maxNum=lote[i][c];
                maxNumSublote=i;
                maxNumPos=c;
            }
        }
    }

    if (hayValores){
        cout << "El valor maximo del lote es " << maxNum << ". Este se encuentra en el la posicion " << maxNumPos+1 << " del sublote " << maxNumSublote+1 << endl;
    }
    else{
        cout << "No hay valor maximo, ya que el lote no posee valores" << endl;
    }
    
    // d) valor mínimo de cada sublote
    cout << "\n\nValor minimo de cada sublote: \n" << endl;
    if (hayValores){
        for (int i=0; i<lote.size() ; i++){
            for (int c=0; c<lote[i].size(); c++){
                if (primeraVueltaMin){
                    minNum=lote[i][c];

                    primeraVueltaMin=false;
                    hayValores=true;
                }
                else if (lote[i][c]<minNum){
                    minNum=lote[i][c];
                }
            }
            if (lote[i].empty()){
                cout << "El sublote " << i+1 << " no tiene un valor minimo, ya que no posee valores" << endl;
            }
            else{
                cout << "El valor minimo del sublote " << i+1 << " es " << minNum << endl;
            }
        }
    }
    else{
        cout << "Ningun sublote tiene valores minimos, ya que el lote no posee valores" << endl;
    }


    system("pause");
    return 0;
};