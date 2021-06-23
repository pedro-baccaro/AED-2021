//Dada una serie de caracteres que conforman una oración, donde cada palabra está
//separada de la siguiente por un carácter blanco y la oración finaliza con un punto. 
//
// Se pide informar:
// a) cantidad de veces que apareció cada vocal
// b) cantidad de palabras que contiene la oración
// c) cantidad de letras que posee la palabra más larga

#include <iostream>
#include <vector>

using namespace std;

int main(){

    int cantA=0, cantE=0, cantI=0, cantO=0, cantU=0, cantPalabras=0, cantLetrasMasLarga=0;
    vector<string> respuestaSeparada;
    string respuesta, palabra="";
    char letra;

    cout << "Hola, por favor ingrese una oracion (separe las palabras con espacios y termine la oracion con un punto)" << endl;
    getline(cin, respuesta);

    for (int L=0; L<respuesta.length(); L++){
        letra = respuesta[L];

        //ejercicio a
        switch (letra){
        case 'a': case 'A':
            cantA++;
            break;
        case 'e': case 'E':
            cantE++;
            break;
        case 'i': case 'I':
            cantI++;
            break;
        case 'o': case 'O':
            cantO++;
            break;
        case 'u': case 'U':
            cantU++;
            break;
        }

        //ejercicios b y c
        if (!isspace(letra) && letra != '.'){
            palabra = palabra + letra;
            if (L==0){
                cantPalabras++;
            }
        }else if (isspace(letra) && palabra != ""){
            respuestaSeparada.push_back(palabra);
            cantPalabras++;
            palabra = "";
        }else if (letra == '.' && cantPalabras==1){
            cantLetrasMasLarga=palabra.length();
        }
    }

    cout << "A) Hay:" << endl;
    cout << cantA << " letra(s) A" << endl;
    cout << cantE << " letra(s) E" << endl;
    cout << cantI << " letra(s) I" << endl;
    cout << cantO << " letra(s) O" << endl;
    cout << cantU << " letra(s) U" << endl;

    cout << "B) Hay:" << endl;
    cout << cantPalabras << " palabra(s)" << endl;

    cout << "C) La palabra mas larga tiene:" << endl;
    for (int P=0; P<respuestaSeparada.size(); P++){
        palabra = respuestaSeparada[P];

        if (P==0){
            cantLetrasMasLarga = palabra.length();
        }else{
            if (palabra.length()>cantLetrasMasLarga){
                cantLetrasMasLarga = palabra.length();
            } 
        }
    }
    cout << cantLetrasMasLarga << " letra(s)" << endl;
    

    system("pause");
    return 0;
}