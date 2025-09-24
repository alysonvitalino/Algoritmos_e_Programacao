#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
 
    int peca1, npeca1, peca2, npeca2;
    double unitario1, unitario2, valor_total;
    
    cin >> peca1;
    cin >> npeca1;
    cin >> unitario1;

    cin >> peca2;
    cin >> npeca2;
    cin >> unitario2;
    
    cout << fixed << setprecision(2);
    
    valor_total = (npeca1 * unitario1) + (npeca2 * unitario2);

    cout << "VALOR A PAGAR: R$ " << valor_total << endl;
    
    return 0;
}

//  1 1 15.10
// 2 1 15.10 