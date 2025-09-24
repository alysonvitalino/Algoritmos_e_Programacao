#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){

    double a, b, c, x1, x2, delta;


    cout << "Coeficiente a: " << endl;
    cin >> a;

    cout << "Coeficiente b: " << endl;
    cin >> b;

    cout << "Coeficiente c: " << endl;
    cin >> c;

    delta = pow(b, 2) - 4 * a * c;

    if(delta < 0 || a == 0)
    {
        cout << "Delta menor que zero ou A = 0" << endl;
    }
    else {

        x1 = (-b + sqrt(delta)) / 2 * a;

        x2 = (-b - sqrt(delta)) / 2 * a;

        cout << fixed << setprecision(4) << endl;

        cout << "X1 = " << x1 << endl;

        cout << "X2 = " << x2 << endl;
    }

    return 0;

}