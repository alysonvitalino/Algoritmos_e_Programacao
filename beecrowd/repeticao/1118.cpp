#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
    int controle = 1;

    while (controle == 1) {
        double nota1 = -1, nota2 = -2;

        while (nota1 < 0 || nota1 > 10) {
            cin >> nota1;
            if (nota1 < 0 || nota1 > 10)
                cout << "nota invalida" << endl;
        }

        while (nota2 < 0 || nota2 > 10) {
            cin >> nota2;
            if (nota2 < 0 || nota2 > 10)
                cout << "nota invalida" << endl;
        }

        cout << fixed << setprecision(2);
        cout << "media = " << (nota1 + nota2) / 2 << endl;

        int resposta = 0;
        do {
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> resposta;
        } while (resposta != 1 && resposta != 2);

        controle = resposta;
    }

    return 0;
}
