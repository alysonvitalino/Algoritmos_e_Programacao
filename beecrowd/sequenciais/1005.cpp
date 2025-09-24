#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
 
    double A, B, media;
    
    cin >> A;

    A = A * 3.5;
    
    cin >> B;

    B = B * 7.5;
    
    media = (A + B) / 11;

    cout << fixed << setprecision(5);
    
    cout << "MEDIA = " << media << endl;
 
    return 0;
}