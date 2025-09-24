#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
 
    string nome;
    double salario, vendas;
    
    cin >> nome;
    cin >> salario;
    cin >> vendas;
    
    vendas = vendas * 0.15;
    
    cout << fixed << setprecision(2);
    
    cout << "TOTAL = R$ " << salario + vendas << endl;
 
    return 0;
}