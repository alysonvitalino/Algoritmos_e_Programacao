#include <string>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int contador=0;
    double entrada, media;
    
    cin >> entrada;
    if(entrada > 0)
    {
        media = media + entrada;
        contador = contador + 1;
    }
    cin >> entrada;
    if(entrada > 0)
    {
        media = media + entrada;
        contador = contador + 1;
    }
    cin >> entrada;
    if(entrada > 0)
    {
        media = media + entrada;
        contador = contador + 1;
    }
    cin >> entrada;
    if(entrada > 0)
    {
        media = media + entrada;
        contador = contador + 1;
    }
    cin >> entrada;
    if(entrada > 0)
    {
        media = media + entrada;
        contador = contador + 1;
    }
    cin >> entrada;
    if(entrada > 0)
    {
        media = media + entrada;
        contador = contador + 1;
    }
    cout << contador << " valores positivos" << endl;
    cout << media/contador << endl;

    return 0;
}
