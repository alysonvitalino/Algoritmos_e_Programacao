#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){

    double nota1, nota2, notafinal;
    
    cout << "Digite a primeira nota: " << endl;
    cin >> nota1;

    cout << "Digite a segunda nota: " << endl;
    cin >> nota2;

    cout << fixed << setprecision(1);
    notafinal = nota1 + nota2;

    if(notafinal < 60)
    {
        cout << "REPROVADO" << endl;
    }
    else 
    {
        cout << "APROVADO" << endl;
    }
    return 0;

}


/*

Problema "notas"
Fazer um programa para ler as duas notas que um aluno obteve no primeiro e segundo semestres de
uma disciplina anual. Em seguida, mostrar a nota final que o aluno obteve (com uma casa decimal) no
ano juntamente com um texto explicativo. Caso a nota final do aluno seja inferior a 60.00, mostrar a
mensagem "REPROVADO", conforme exemplos.
Exemplo 1:
Digite a primeira nota: 45.5
Digite a segunda nota: 31.3
NOTA FINAL = 76.8
Exemplo 2:
Digite a primeira nota: 34.0
Digite a segunda nota: 23.5
NOTA FINAL = 57.5
REPROVADO

*/