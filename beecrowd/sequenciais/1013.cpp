#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;
 
int main() {
 
    double A, B, C, maiorAB, maiorAC, maiorFinal;
    
    cin >> A;
    
    cin >> B;
    
    cin >> C;
    
    maiorAB = (A + B + abs(A - B)) / 2;
    
    maiorAC = (A + C + abs(A - C)) / 2;
    
    maiorFinal = (maiorAB + maiorAC + abs(maiorAB - maiorAC)) / 2;
    
    cout << fixed << setprecision(0);
    
    cout << maiorFinal << " eh o maior" << endl;
 
    return 0;
}