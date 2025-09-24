#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
 
    double A, B, C;

    cin >> A;
    cin >> B;
    cin >> C;
    
    double lados[3] = {A, B, C};
    sort(lados, lados + 3, greater<double>());
    A = lados[0];
    B = lados[1];
    C = lados[2];

    if (A >= B + C) {
        cout << "NAO FORMA TRIANGULO" << endl;
    } else {
        double A2 = A * A;
        double B2_C2 = B * B + C * C;

        if (fabs(A2 - B2_C2) < 1e-9) {
            cout << "TRIANGULO RETANGULO" << endl;
        } else if (A2 > B2_C2) {
            cout << "TRIANGULO OBTUSANGULO" << endl;
        } else {
            cout << "TRIANGULO ACUTANGULO" << endl;
        }
        if (fabs(A - B) < 1e-9 && fabs(B - C) < 1e-9) {
            cout << "TRIANGULO EQUILATERO" << endl;
        } else if (fabs(A - B) < 1e-9 || fabs(A - C) < 1e-9 || fabs(B - C) < 1e-9) {
            cout << "TRIANGULO ISOSCELES" << endl;
        }
    }
    
    return 0;
}