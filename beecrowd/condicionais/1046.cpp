#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
 
    int A, B, total;
    
    cin >> A;
    cin >> B;

    
    if (B > A) {
        total = B - A;
        cout << "O JOGO DUROU "<< total << " HORA(S)" << endl;
    }
    else if (A > B)
    {
        total = (24 - A) + B;
        cout << "O JOGO DUROU "<< total << " HORA(S)" << endl;
    }
    else
    {
        total = 24;
        cout << "O JOGO DUROU "<< total << " HORA(S)" << endl;
    }
    
    return 0;
}