#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
    
    int entrada=1;
    
    while (entrada != 0) {
        
        cin >> entrada;
        
        if(entrada % 2 == 0 && entrada != 0)
        {
            cout << (entrada * 5) + 20 << endl;
        }
        else if (entrada % 2 != 0 && entrada != 0)
        {
            cout << (entrada * 5) + 25 << endl;
        }
    }
    
    return 0;
}
