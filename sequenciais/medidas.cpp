#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
    double A, B, C;

    cout << "Digite a medida A: ";
    cin >> A;

    cout << "Digite a medida B: ";
    cin >> B;

    cout << "Digite a medida C: ";
    cin >> C;

    double areaQuadrado = A * A;
    double areaTriangulo = (A * B) / 2.0;
    double areaTrapezio = ((A + B) * C) / 2.0;

    cout << fixed << setprecision(4);
    cout << "AREA DO QUADRADO = " << areaQuadrado << endl;
    cout << "AREA DO TRIANGULO = " << areaTriangulo << endl;
    cout << "AREA DO TRAPEZIO = " << areaTrapezio << endl;

    return 0;
}
