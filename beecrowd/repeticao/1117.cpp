#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;
 
int main() {
 
    double nota1 = -1, nota2 = -2;
    
    while (nota1 < 0 || nota1 > 10)
    {
        cin >> nota1;
        if(nota1 < 0 || nota1 > 10)
            cout << "nota invalida" << endl;
    }
    while (nota2 < 0 || nota2 > 10)
    {
        cin >> nota2;
        if(nota2 < 0 || nota2 > 10)
            cout << "nota invalida" << endl;
    }
    cout << fixed << setprecision(2);
    cout << "media = " << (nota1+nota2)/2 << endl;
    return 0;
}