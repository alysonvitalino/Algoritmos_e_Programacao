#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>

using namespace std;

int main(){

    int tempo_inicial, tempohora, tempominuto, temposegundo;

    std::cout << "Digite um valor de tempo em segundos: " << endl;

    cin >> (tempo_inicial);

    tempohora = tempo_inicial / 3600;
    
    tempominuto = (tempo_inicial%3600) / 60;

    temposegundo = (tempo_inicial%60);

    system("clear");

    cout << tempo_inicial << " segundos são equivalentes a " << tempohora << ":" << tempominuto << ":" <<
    temposegundo << "horas" << endl;
    
    return 0;
}
// cin.ignore();//Limpa o buffer
// cout << fixed << setprecision(1);
/*

Problema "duracao"
Fazer um programa para ler uma duração de tempo em segundos, daí imprimir na tela esta duração no
formato horas:minutos:segundos.
Exemplo 1:
Digite a duracao em segundos: 300
0:5:0
Exemplo 2:
Digite a duracao em segundos: 12506
3:28:26
Exemplo 3:
Digite a duracao em segundos: 140811
39:6:51

*/