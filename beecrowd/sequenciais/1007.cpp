#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
 
    int A, B;
    double C, D;
    
    cin >> A;
    cin >> B;
    cin >> C;
    
    D = C * B;
    
    cout << "NUMBER = " << A << endl;

    cout << fixed << setprecision(2);
    
    cout << "SALARY = U$ " << D << endl;
    
    return 0;
}