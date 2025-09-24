#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){

    double preco_unit, valor_total, valor_recebido, troco, falta;
    int quantidade;
    
    cout << "Digite o valor da unidade: " << endl;
    cin >> preco_unit;

    cout << "Digite a quantidade de itens: " << endl;
    cin >> quantidade;

    cout << "Digite o dinheiro recebido: " << endl;
    cin >> valor_recebido;

    valor_total = preco_unit * quantidade;

    cout << fixed << setprecision(2);
    
    if(valor_total < valor_recebido)
    {
        troco = valor_recebido - valor_total;
        cout << "Devolva: R$ " << troco << endl;
    }
    else
    {
        troco = valor_total - valor_recebido;
        cout << "DINHEIRO INSUFICIENTE. Faltam: R$ " << troco << endl;
    }

    return 0;

}
/*

preco_unit, quantidade, valor_recebido, troco

Problema "troco_verificado"
Fazer um programa para calcular o troco no processo de pagamento de um produto de uma mercearia.
O programa deve ler o preço unitário do produto, a quantidade de unidades compradas deste produto,
e o valor em dinheiro dado pelo cliente. Seu programa deve mostrar o valor do troco a ser devolvido
ao cliente. Se o dinheiro dado pelo cliente não for suficiente, mostrar uma mensagem informando o
valor restante conforme exemplo.
Exemplo 1:
Preço unitário do produto: 8.00

Quantidade comprada: 2
Dinheiro recebido: 20.00
TROCO = 4.00
Exemplo 2:
Preço unitário do produto: 30.00
Quantidade comprada: 3
Dinheiro recebido: 70.00
DINHEIRO INSUFICIENTE. FALTAM 20.00 REAIS

*/