/*
Consigna:

Dado un conjunto de Nombres y Fechas de nacimientos (AAAAMMDD), que
finaliza con un Nombre = ‘FIN’, informar el nombre de la persona con mayor edad y el de la
más joven

*/

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");
    
    string nombre, mayorNombre, menorNombre;
    int edad, mayorEdad, menorEdad; //Importante notar que la mayor edad es la de fecha más pequeña, ya que es más lejana. Lo mismo aplica para la menor, esta es la más cercana y por lo tanto la mayor numéricamente
    bool primerNombre=true;

    do{
        cout << "Ingrese un nombre (o la palabra \"FIN\" para finalizar): " << endl;
        getline(cin, nombre);
        cin.sync();

        if (nombre != "FIN"){
            cout << "Ingrese su fecha de nacimiento en formato AAAAMMDD: " << endl;
            cin >> edad;
            cin.sync();

            if (primerNombre){
                mayorEdad=edad;
                menorEdad=edad;
                mayorNombre=nombre;
                menorNombre=nombre;

                primerNombre=false;
            }
            else{
                if (edad>=menorEdad){
                    menorEdad=edad;
                    menorNombre=nombre;
                }
                else if (edad<=mayorEdad){
                    mayorEdad=edad;
                    mayorNombre=nombre;
                }
                
            }
        }
        

    } while (nombre!="FIN");
    
    cout << "La persona mayor de las ingresadas es " << mayorNombre << endl;
    cout << "La persona menor de las ingresadas es " << menorNombre << endl;

    system("pause");
    return 0;
};