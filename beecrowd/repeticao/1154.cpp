#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
    
    double contador=0, entrada=0, idade=0;
    
    while (entrada >= 0) {
        
        cin >> entrada;
        
        if(entrada > 0)
        {
            idade = idade + entrada;
            contador = contador + 1;
        }
    }

    cout << fixed << setprecision(2);
    
    cout << idade / contador << endl;
    
    return 0;
}
