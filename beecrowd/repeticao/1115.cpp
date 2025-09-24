#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;
 
int main() {
 
    int x=1, y=1;
    
    while (x != NULL || y != NULL)
    {
        cin >> x;
        cin >> y;
        if(x > 0 && y > 0)
            cout << "primeiro" << endl;
        else if(x < 0 && y > 0)
            cout << "segundo" << endl;
        else if(x < 0 && y < 0)
            cout << "terceiro" << endl;
        else if(x > 0 && y < 0)
            cout << "quarto" << endl;
    }
    
    return 0;
}