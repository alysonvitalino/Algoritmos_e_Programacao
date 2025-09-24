#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){

    double vlr1, vlr2, vlr3, menor;
    
    cout << "Valor 1: " << endl;
    cin >> vlr1;

    cout << "Valor 2: " << endl;
    cin >> vlr2;

    cout << "Valor 3: " << endl;
    cin >> vlr3;

    if(vlr1 < vlr2 && vlr1 < vlr3)
        cout << vlr1 << " é o menor." << endl;
    else if(vlr2 < vlr1 && vlr2 < vlr3)
        cout << vlr2 << " é o menor." << endl;
    else
        cout << vlr3 << " é o menor." << endl;
    return 0;

}