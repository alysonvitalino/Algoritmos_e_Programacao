#include <iostream>
#include <iomanip>

using namespace std;


int main(){
    float largura, terreno, valor, area, preco;
    cout << "Digite a largura do terreno:";
    cin >> largura;
    cout << "Digite o comprimento do terreno:";
    cin >> terreno;
    cout << "Digite o valor do metro quadrado:";
    cin >> valor;

    area = largura * terreno;
    preco = area * valor;

    cout << fixed << setprecision(2); 
    cout << "A area do terreno e de " << area << " metros quadrados." << endl;
    cout << "O preço do terreno e: R$ " << preco << endl;

    return 0;
}