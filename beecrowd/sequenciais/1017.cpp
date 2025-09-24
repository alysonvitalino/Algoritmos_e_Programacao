#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
 
    double tempoGasto, velocidadeMedia, distanciaPercorrida;
    double litrosNecessarios;
    
    cin >> tempoGasto;
    cin >> velocidadeMedia;
    
    distanciaPercorrida = tempoGasto * velocidadeMedia;

    litrosNecessarios = distanciaPercorrida / 12;    

    cout << fixed << setprecision(3);
    
    cout << litrosNecessarios << endl;
 
    return 0;
}