#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;
 
int main() {
 
    int dias, meses, anos, sobra, entrada;
    
    cin >> entrada;
    
    anos = entrada / 365;
    sobra = entrada % 365;
    
    meses = sobra / 30;
    sobra = sobra % 30;
    
    dias = sobra;
    
    cout << anos << " ano(s)" << endl;
    
    cout << meses << " mes(es)" << endl;
    
    cout << dias << " dia(s)" << endl;
    
 
    return 0;
}