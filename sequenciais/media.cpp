#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    int idade1, idade2;
    string nome1, nome2;
    double media_idade;

    cout << "Dados da primeira pessoa: " << endl;

    cout << "Nome: ";
    getline(cin, nome1);
    cout << "Idade: ";
    cin >> idade1;
    cin.ignore();//Limpa o buffer


    cout << "Dados da segunda pessoa: " << endl;

    cout << "Nome: ";
    getline(cin, nome2);
    cout << "Idade: ";
    cin >> idade2;
    cin.ignore();//Limpa o buffer

    media_idade = (idade1 + idade2) / 2.0;

    // cout << fixed << setprecision(1);

    cout << "A idade média de " << nome1 << " e " << nome2 << " é de " << media_idade << " anos." << endl;

    return 0;
}