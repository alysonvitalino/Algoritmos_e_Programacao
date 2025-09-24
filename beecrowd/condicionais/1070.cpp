#include <string>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int entrada;
    
    cin >> entrada;
    
    if(entrada % 2 == 0)
    {
        cout << entrada + 1 << endl;
        cout << entrada + 3 << endl;
        cout << entrada + 5 << endl;
        cout << entrada + 7 << endl;
        cout << entrada + 9 << endl;
        cout << entrada + 11 << endl;
    }
    else{
        cout << entrada << endl;
        cout << entrada + 2 << endl;
        cout << entrada + 4 << endl;
        cout << entrada + 6 << endl;
        cout << entrada + 8 << endl;
        cout << entrada + 10 << endl;
    }
    return 0;
}
