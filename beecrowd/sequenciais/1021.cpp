#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;
 
int main() {
 
    int nota100, nota50, nota20, nota10;
    int nota5, nota2, moeda1, moeda50, sobra;
    int moeda25, moeda10, moeda5, moeda01;
    double entradaCentavos;
    
    cin >> entradaCentavos;
    int total = round(entradaCentavos * 100);  // converter para centavos com arredondamento

    nota100 = total / 10000;
    total %= 10000;

    nota50 = total / 5000;
    total %= 5000;

    nota20 = total / 2000;
    total %= 2000;

    nota10 = total / 1000;
    total %= 1000;

    nota5 = total / 500;
    total %= 500;

    nota2 = total / 200;
    total %= 200;

    moeda1 = total / 100;
    total %= 100;

    moeda50 = total / 50;
    total %= 50;

    moeda25 = total / 25;
    total %= 25;

    moeda10 = total / 10;
    total %= 10;

    moeda5 = total / 5;
    total %= 5;

    moeda01 = total;

    cout << "NOTAS:" << endl;
    cout << nota100 << " nota(s) de R$ 100.00" << endl;
    cout << nota50 << " nota(s) de R$ 50.00" << endl;
    cout << nota20 << " nota(s) de R$ 20.00" << endl;
    cout << nota10 << " nota(s) de R$ 10.00" << endl;
    cout << nota5 << " nota(s) de R$ 5.00" << endl;
    cout << nota2 << " nota(s) de R$ 2.00" << endl;
    cout << "MOEDAS:" << endl;
    cout << moeda1 << " moeda(s) de R$ 1.00" << endl;
    cout << moeda50 << " moeda(s) de R$ 0.50" << endl;
    cout << moeda25 << " moeda(s) de R$ 0.25" << endl;
    cout << moeda10 << " moeda(s) de R$ 0.10" << endl;
    cout << moeda5 << " moeda(s) de R$ 0.05" << endl;
    cout << moeda01 << " moeda(s) de R$ 0.01" << endl;

    return 0;
}