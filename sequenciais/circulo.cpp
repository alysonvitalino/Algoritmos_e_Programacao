#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    float raio, area;
    const float pi = 3.14159;

    cout << "Digite o valor do raio do circulo: " << endl;
    cin >> raio;

    area = pi * pow(raio, 2);

    cout << fixed << setprecision(3);

    cout << "A area do circulo eh: " << area << endl;
    
    return 0;


    /* 
    area = pi * r
Problema "circulo"
Fazer um programa para ler o valor "r" do raio de um círculo, e depois mostrar o valor da área do
círculo com três casas decimais. A fórmula da área do círculo é a seguinte: area = π. r . Você pode
usar o valor de π fornecido pela biblioteca da sua linguagem de programação, ou então, se preferir, use
diretamente o valor 3.14159.
Exemplo 1:
Digite o valor do raio do circulo: 2.0 AREA = 12.566
Exemplo 2:
Digite o valor do raio do circulo: 13.2 AREA = 547.391*/
}