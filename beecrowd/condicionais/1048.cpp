#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
 
    double salario, reajuste;
    
    cin >> salario;
    reajuste = salario;

    cout << fixed << setprecision(2);
    
    if(salario <= 400)
    {
        salario += salario * 0.15;
        cout << "Novo salario: " << salario << endl;
        cout << "Reajuste ganho: " << reajuste * 0.15 << endl;
        cout << "Em percentual: 15 %" << endl;
    }
    else if(salario <= 800)
    {
        salario += salario * 0.12;
        cout << "Novo salario: " << salario << endl;
        cout << "Reajuste ganho: " << reajuste * 0.12 << endl;
        cout << "Em percentual: 12 %" << endl;
    }
    else if(salario <= 1200)
    {
        salario += salario * 0.1;
        cout << "Novo salario: " << salario << endl;
        cout << "Reajuste ganho: " << reajuste * 0.1 << endl;
        cout << "Em percentual: 10 %" << endl;
    }
    else if(salario <= 2000)
    {
        salario += salario * 0.07;
        cout << "Novo salario: " << salario << endl;
        cout << "Reajuste ganho: " << reajuste * 0.07 << endl;
        cout << "Em percentual: 7 %" << endl;
    }
    else if(salario > 2000)
    {
        salario += salario * 0.04;
        cout << "Novo salario: " << salario << endl;
        cout << "Reajuste ganho: " << reajuste * 0.04 << endl;
        cout << "Em percentual: 4 %" << endl;
    }
 
    return 0;
}