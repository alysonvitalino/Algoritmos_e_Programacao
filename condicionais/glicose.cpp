#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){

    double glicose;
    
    cout << "Digite a quantidade de glicose em mg/dl: " << endl;
    cin >> glicose;

    cout << fixed << setprecision(1);

    if(glicose < 100)
    {
        cout << "GLICOSE NORMAL" << endl;
    }
    else if (glicose >= 100 && glicose <= 140)
    {
        cout << "GLICOSE EM NIVEL ELEVADO" << endl;
    }
    else 
    {
        cout << "GLICOSE EM NIVEL DE DIABETES" << endl;
    }
    return 0;

}


/*
Problema "glicose"
Fazer um programa para ler a quantidade de glicose no
sangue de uma pessoa e depois mostrar na tela a
classificação desta glicose de acordo com a tabela de
referência ao lado.

Classificação Glicose
Normal Até 100 mg/dl
Elevado Maior que 100 até 140 mg/dl
Diabetes Maior de 140 mg/dl

Exemplo 1:
Digite a medida da glicose: 90.0
Classificacao: normal
Exemplo 2:
Digite a medida da glicose: 140.0
Classificacao: elevado
Exemplo 3:
Digite a medida da glicose: 143.2
Classificacao: diabetes
*/