#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
 
    double A, B, C;

    cin >> A;
    cin >> B;
    cin >> C;
    

    
    if (A > B && A > C) 
    {
        if(B > C)
        {
            cout << C << endl;
            cout << B << endl;
            cout << A << endl;
            cout << endl;
            cout << A << endl;
            cout << B << endl;
            cout << C << endl;
        }
        else
        {
            cout << B << endl;
            cout << C << endl;
            cout << A << endl;
            cout << endl;
            cout << A << endl;
            cout << B << endl;
            cout << C << endl;
        }
    }
    else if (B > A && B > C)
    {
        if (A > C)
        {
            cout << C << endl;
            cout << A << endl;
            cout << B << endl;
            cout << endl;
            cout << A << endl;
            cout << B << endl;
            cout << C << endl;
        }
        else
        {
            cout << A << endl;
            cout << C << endl;
            cout << B << endl;
            cout << endl;
            cout << A << endl;
            cout << B << endl;
            cout << C << endl;
        }
    }
    else if (C > A && C > B)
    {
        if(B > A)
        {
            cout << A << endl;
            cout << B << endl;
            cout << C << endl;
            cout << endl;
            cout << A << endl;
            cout << B << endl;
            cout << C << endl;
        }
        else
        {
            cout << B << endl;
            cout << A << endl;
            cout << C << endl;
            cout << endl;
            cout << A << endl;
            cout << B << endl;
            cout << C << endl;
        }
    }
    
    return 0;
}