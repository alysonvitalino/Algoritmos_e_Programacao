#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
 
    double a, r, n = 3.14159;
    
    cin >> r;
    
    a = n * (r*r);
    
    cout << fixed << setprecision(4);
    
    cout << "A=" << a << endl;
    
    return 0;
}