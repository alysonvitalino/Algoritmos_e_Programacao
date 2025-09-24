#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){

    int minutos;
    double custo;
    
    cout << "Digite a quantidade de minutos consumidos: " << endl;
    cin >> minutos;

    if(minutos < 100)
    {
        cout << "Foram usados: " << minutos << " minutos." << endl;
        cout << "Custo: R$ 50,00" << endl;
    }
    else 
    {
        cout << "Foram usados: " << minutos << " minutos." << endl;
        custo = 50 + ((minutos%100) * 2);
        cout << fixed << setprecision(2);
        cout << "Custo: R$ " << custo << endl;
    }
    return 0;

}

/*

Problema "operadora"
Uma operadora de telefonia cobra R$ 50.00 por um plano básico que dá direito a 100 minutos de
telefone. Cada minuto que exceder a franquia de 100 minutos custa R$ 2.00. Fazer um programa para
ler a quantidade de minutos que uma pessoa consumiu, daí mostrar o valor a ser pago.
Exemplo 1:
Digite a quantidade de minutos: 22
Valor a pagar: R$ 50.00
Exemplo 2:
Digite a quantidade de minutos: 103
Valor a pagar: R$ 56.00

*/