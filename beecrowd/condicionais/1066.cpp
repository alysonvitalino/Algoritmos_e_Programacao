#include <string>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int contador=0, negativo=0, par=0, impar=0;
    int entrada;
    
    cin >> entrada;
    if(entrada > 0)
        contador = contador + 1;
    else if(entrada < 0)
        negativo = negativo + 1;
    if(entrada % 2 == 0)
        par = par + 1;
    else 
        impar = impar + 1;

    cin >> entrada;
    if(entrada > 0)
        contador = contador + 1;
    else if(entrada < 0)
        negativo = negativo + 1;
    if(entrada % 2 == 0)
        par = par + 1;
    else 
        impar = impar + 1;

    cin >> entrada;
    if(entrada > 0)
        contador = contador + 1;
    else if(entrada < 0)
        negativo = negativo + 1;
    if(entrada % 2 == 0)
        par = par + 1;
    else 
        impar = impar + 1;
        
    cin >> entrada;
    if(entrada > 0)
        contador = contador + 1;
    else if(entrada < 0)
        negativo = negativo + 1;
    if(entrada % 2 == 0)
        par = par + 1;
    else 
        impar = impar + 1;

    cin >> entrada;
    if(entrada > 0)
        contador = contador + 1;
    else if(entrada < 0)
        negativo = negativo + 1;
    if(entrada % 2 == 0)
        par = par + 1;
    else 
        impar = impar + 1;

    cout << par << " valor(es) par(es)" << endl;
    cout << impar << " valor(es) impar(es)" << endl;
    cout << contador << " valor(es) positivo(s)" << endl;
    cout << negativo << " valor(es) negativo(s)" << endl;

    return 0;
}
