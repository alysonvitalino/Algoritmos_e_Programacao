#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){

    double preco_unitario, troco, preco_total, dinheiro;
    int quantidade;

    cout << "Bem Vindo a Mercearia!" << endl;
    cout << "Digite o preco unitario do produto: " << endl;
    cin >> preco_unitario;

    cout << "Digite a quantidade de unidades: " << endl;
    cin >> quantidade;

    cout << "Valor em dinheiro dado pelo cliente: " << endl;
    cin >> dinheiro;

    preco_total = preco_unitario * quantidade;

    if(dinheiro < preco_total)
    {
        cout << "Saldo insuficiente" << endl;
    } else {
        troco = preco_total - dinheiro;
        
        cout << "O valor do troco eh : " << abs(troco) << " reais."<<endl;
    }

    return 0;
}