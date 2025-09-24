#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
    
    int alcool=0, gasolina=0, diesel=0;
    int entrada=0;
    
    while (entrada != 4) {
        
        cin >> entrada;
        
        if(entrada == 1)
            alcool = alcool + 1;
        else if(entrada == 2)
            gasolina = gasolina + 1;
        else if(entrada == 3)
            diesel = diesel + 1;
    }
    
    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << alcool << endl;
    cout << "Gasolina: " << gasolina << endl;
    cout << "Diesel: " << diesel << endl;
    
    return 0;
}
