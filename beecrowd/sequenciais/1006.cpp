#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
 
    double A, B, C, media;
    
    cin >> A;

    A = A * 2;
    
    cin >> B;

    B = B * 3;
    
    cin >> C;

    C = C * 5;
    
    media = (A + B + C) / 10;

    cout << fixed << setprecision(1);
    
    cout << "MEDIA = " << media << endl;
 
    return 0;
}