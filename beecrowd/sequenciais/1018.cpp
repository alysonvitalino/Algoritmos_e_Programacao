#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;
 
int main() {
 
    int entrada, nota100, nota50, nota20, nota10;
    int nota5, nota2, nota1, sobra;
    
    cin >> entrada;
    
    nota100 = entrada / 100;
    sobra = entrada % 100;
    
    nota50 = sobra / 50;
    sobra = sobra % 50;
    
    nota20 = sobra / 20;
    sobra = sobra % 20;
    
    nota10 = sobra / 10;
    sobra = sobra % 10;
    
    nota5 = sobra / 5;
    sobra = sobra % 5;
    
    nota2 = sobra / 2;
    sobra = sobra % 2;
    
    nota1 = sobra / 1;
    sobra = sobra % 1;
    
    cout << entrada << endl;
    cout << nota100 << " nota(s) de R$ 100,00" << endl;
    cout << nota50 << " nota(s) de R$ 50,00" << endl;
    cout << nota20 << " nota(s) de R$ 20,00" << endl;
    cout << nota10 << " nota(s) de R$ 10,00" << endl;
    cout << nota5 << " nota(s) de R$ 5,00" << endl;
    cout << nota2 << " nota(s) de R$ 2,00" << endl;
    cout << nota1 << " nota(s) de R$ 1,00" << endl;
 
    return 0;
}