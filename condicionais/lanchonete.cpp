#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
 
    double A, B, total;

    cin >> A;
    cin >> B;

    cout << fixed << setprecision(2);
    
    if(A==1)
    {
        total = B * 5;
        cout << "Total: R$ " << total << endl;
    }
    else if (A==2)
    {
        total = B * 3.5;
        cout << "Total: R$ " << total << endl;
    }
    else if (A==3)
    {
        total = B * 4.8;
        cout << "Total: R$ " << total << endl;
    }
    else if (A==4)
    {
        total = B * 8.9;
        cout << "Total: R$ " << total << endl;
    }
    else if (A==5)
    {
        total = B * 7.32;
        cout << "Total: R$ " << total << endl;
    }
    return 0;
}