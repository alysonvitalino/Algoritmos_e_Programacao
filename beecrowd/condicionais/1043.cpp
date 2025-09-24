#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
 
    double A, B, C;
    
    cin >> A;
    cin >> B;
    cin >> C;

    cout << fixed << setprecision(1);
    
    if (A + B > C && A + C > B && C + B > A) {
        cout << "Perimetro = " << A + B + C << endl;
    }
    else
    {
        cout << "Area = " << (A + B) * C / 2 << endl;
    }
    
    return 0;
}