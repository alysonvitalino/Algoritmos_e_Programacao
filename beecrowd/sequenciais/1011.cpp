#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;
 
int main() {
 
    string nome;
    double R, pi=3.14159, volume;
    
    cin >> R;
    
    volume = pow(R, 3) * pi * (4.0/3.0);
    
    cout << fixed << setprecision(3);
    
    cout << "VOLUME = " << volume << endl;
 
    return 0;
}