#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;
 
int main() {
 
    int segundos, minutos, horas, sobra, entrada;
    
    cin >> entrada;
    
    horas = entrada / 3600;
    sobra = entrada % 3600;
    
    minutos = sobra / 60;
    sobra = sobra % 60;
    
    segundos = sobra;
    
    cout << horas << ":" << minutos << ":" << segundos << endl;
 
    return 0;
}