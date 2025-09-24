#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int HI, MI, HF, MF;
    cin >> HI >> MI >> HF >> MF;

    int inicio = HI * 60 + MI;
    int fim = HF * 60 + MF;

    int duracao;
    if (fim > inicio) {
        duracao = fim - inicio;
    } else {
        duracao = (24 * 60 - inicio) + fim;
    }

    int Htotal = duracao / 60;
    int Mtotal = duracao % 60;

    cout << "O JOGO DUROU " << Htotal << " HORA(S) E " << Mtotal << " MINUTO(S)" << endl;

    return 0;
}