/*
Consigna:

Dado un conjunto de valores, que finaliza con un valor nulo, determinar e
imprimir (si hubo valores):
a) El valor máximo negativo
b) El valor mínimo positivo
c) El valor mínimo dentro del rango -17.3 y 26.9
d) El promedio de todos los valores.

*/

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");
    
    bool running=true, primeraVuelta=true;
    float V, maxNegativo=0, minPositivo=0, minRango=0, prom, cantV=0, sumaV=0;
    
    do{
        cout << "Ingrese un valor: " << endl;
        cin >> V;

        if (primeraVuelta){
            if (V!=0){
                if (V<0){
                    maxNegativo=V;
                }
                else{
                    minPositivo=V;
                }

                if (V>-17.3 && V<26.9){
                    minRango=V;
                }

                cantV++;
                sumaV+=V;
                primeraVuelta=false;
            }
            else{
                running=false;
            }
            
        }
        else{
            if (V!=0){
                if (V<0){
                    if (V>maxNegativo){
                        maxNegativo=V;
                    }
                    else{
                        if (V<minPositivo){
                            minPositivo=V;
                        }
                    }

                    if (V>-17.3 && V<26.9){
                        if (V<minRango){
                            minRango=V;
                        }
                    }
                }

                cantV++;
                sumaV+=V;
            }
            else{
                running=false;
            }
        }
    } while (running);
    
    if (primeraVuelta){
        cout << "No se han ingresado valores" << endl;
    }
    else{
        // a) El valor máximo negativo
        if (maxNegativo!=0){
            cout << "El valor maximo negativo fue " << maxNegativo << endl;            
        }

        // b) El valor mínimo positivo
        if (minPositivo!=0){
            cout << "El valor minimo positivo fue " << minPositivo << endl;
        }

        // c) El valor mínimo dentro del rango -17.3 y 26.9
        if (minRango!=0){
            cout << "El valor minimo dentro del rango -17.3 y 26.9 fue " << minRango << endl;
        }

        // d) El promedio de todos los valores.
        prom = sumaV/cantV;
        cout << "El promedio de todos los valores fueEl valor mínimo dentro del rango -17.3 y 26.9 " << prom << endl;
    }

    system("pause");
    return 0;
};