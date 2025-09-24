#include <string>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
 
    string entrada1, entrada2, entrada3;
    
    cin >> entrada1;

    if(entrada1 == "vertebrado")
    {
        cin >> entrada2;
        if(entrada2 == "ave")
        {
            cin >> entrada3;
            if(entrada3 == "carnivoro")
                cout << "aguia" << endl;
            else
                cout << "pomba" << endl;
        }
        else
        {
            cin >> entrada3;
            if(entrada3 == "onivoro")
                cout << "homem" << endl;
            else
                cout << "vaca" << endl;
        }
    }
    else{
        cin >> entrada2;
        if(entrada2 == "inseto")
        {
            cin >> entrada3;
            if(entrada3 == "hematofago")
                cout << "pulga" << endl;
            else
                cout << "lagarta" << endl;
        }
        else
        {
            cin >> entrada3;
            if(entrada3 == "hematofago")
                cout << "sanguessuga" << endl;
            else
                cout << "minhoca" << endl;
        }
    }
 
    return 0;
}