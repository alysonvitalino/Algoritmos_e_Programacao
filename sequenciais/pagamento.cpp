#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
using namespace std;

int main(){
    string nome;
    float valor_hora, quantidade_horas, pagamento;

    cout << "Digite o nome do funcionario(a): ";
    getline(cin, nome);

    cout << "Quanto esse funcionario recebe por hora ? ";
    cin >> valor_hora;

    cout << "Quantas horas esse funcionario trabalhou ? ";
    cin >> quantidade_horas;

    pagamento = valor_hora * quantidade_horas;

    system("clear");

    cout << "Nome: " << nome << endl;
    cout << "Valor por hora: " << valor_hora << endl;
    cout << "Horas trabalhadas: " << quantidade_horas << endl;
    cout << fixed << setprecision(2);
    cout << "O pagamento para " << nome << " deve ser R$ " << pagamento << endl;

    return 0;
}

// cout << fixed << setprecision(1);

/*

Problema "pagamento"
Fazer um programa para ler o nome de um(a) funcionário(a), o valor que ele(a) recebe por hora, e a
quantidade de horas trabalhadas por ele(a). Ao final, mostrar o valor do pagamento do funcionário com
uma mensagem explicativa, conforme exemplo.
Exemplo 1:
Nome: Joao Silva
Valor por hora: 50.00
Horas trabalhadas: 60
O pagamento para Joao Silva deve ser 3000.00
Exemplo 2:
Nome: Maria Dias
Valor por hora: 60.00
Horas trabalhadas: 100
O pagamento para Maria Dias deve ser 6000.00

*/