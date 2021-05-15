/*
Consigna:

Se realiza una inspección en una fábrica de pinturas, y se detectaron 20
infracciones. De cada infracción se tomó nota de los siguientes datos:

- Tipo de Infracción (1, 2, 3, ó 4)
- Motivo de la infracción
- Valor de la multa
- Gravedad de la infracción (‘L’,‘M’, ‘G’)

Se pide informar al final del proceso:

- Los valores totales de la multa a pagar de acuerdo al tipo de gravedad.
- La leyenda “Clausurar fábrica” si la cantidad de infracciones 3 y 4 con gravedad “G” sean mayor a 3.

*/

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");
    int T, V, ValorL=0, ValorM=0, ValorG=0, cantG34=0;
    string M, G;

    for (int c = 1; c <= 20; c++){
        
        cout << "Ingrese el Tipo de la Infraccion " << c << ": " << endl;
        cin >> T;
        cout << "Ingrese el Motivo de la Infraccion " << c << ": " << endl;
        cin >> M;
        cout << "Ingrese el Valor de la Multa " << c << ": " << endl;
        cin >> V;
        cout << "Ingrese la Gravedad de la Infraccion " << c << ": " << endl;
        cin >> G;

        if (G == "L"){
            ValorL += V;
        } else if (G == "M"){
            ValorM += V;
        } else if (G == "G"){
            ValorG += V;
            if (T == 3 or T == 4){
                cantG34++;
            }
        }
    }

    cout << "El valor total a pagar por las infracciones de tipo L es $" << ValorL << endl;
    cout << "El valor total a pagar por las infracciones de tipo M es $" << ValorM << endl;
    cout << "El valor total a pagar por las infracciones de tipo G es $" << ValorG << endl;

    if (cantG34 > 3){
        cout << "CLAUSURAR FABRICA" << endl;
    }
        

    system("pause");
    return 0;
}