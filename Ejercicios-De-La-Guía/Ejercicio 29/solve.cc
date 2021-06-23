//Dado un número entero positivo entre 1 y 3999 informar su correspondiente
//número Romano

// M = 1000
// CM = 900
// D = 500
// CD = 400
// C = 100
// XC = 90
// L = 50
// XL = 40
// X = 10
// IX = 9
// V = 5
// IV = 4
// I = 1

#include <iostream>

using namespace std;

string aRomano(int x){
    string out;

    do{
        if(x>=1000){
            x-=1000;
            out+="M";
        }else if(x>=900){
            x-=900;
            out+="CM";
        }else if(x>=500){
            x-=500;
            out+="D";
        }else if(x>=400){
            x-=400;
            out+="CD";
        }else if(x>=100){
            x-=100;
            out+="C";
        }else if(x>=90){
            x-=90;
            out+="CD";
        }else if(x>=50){
            x-=50;
            out+="L";
        }else if(x>=40){
            x-=40;
            out+="XL";
        }else if(x>=10){
            x-=10;
            out+="X";
        }else if(x>=9){
            x-=9;
            out+="IX";
        }else if(x>=5){
            x-=5;
            out+="V";
        }else if(x>=4){
            x-=4;
            out+="IV";
        }else if(x>=1){
            x-=1;
            out+="I";
        }
    } while (x!=0);

    return out;
}

int main(){
    int input;
    string output;

    cout << "Ingrese un numero entre 1 y 3999" << endl;
    cin >> input;

    cout << "Su numero es " << aRomano(input) << " en romano." << endl;

    system("pause");
    return 0;
}