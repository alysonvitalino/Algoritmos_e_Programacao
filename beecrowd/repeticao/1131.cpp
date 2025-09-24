#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
    int controle = 1;
    int golsinter, golsgremio, grenais = 1, vinter=0, vgremio=0, empates;

    while (controle == 1) {
        
        cin >> golsinter;
        cin >> golsgremio;
        if(golsinter>golsgremio)
            vinter = vinter + 1;
        else if(golsgremio>golsinter)
            vgremio = vgremio + 1;
        else 
            empates = empates + 1;
            
        int resposta = 0;
        do {
            cout << "Novo grenal (1-sim 2-nao)" << endl;
            cin >> resposta;
            if(resposta == 1)
                grenais = grenais + 1;
        } while (resposta != 1 && resposta != 2);

        controle = resposta;
    }
    
    cout << grenais << " grenais" << endl;
    cout << "Inter:" << vinter << endl;
    cout << "Gremio:" << vgremio << endl;
    cout << "Empates:" << empates << endl;
    if(vinter > vgremio)
        cout << "Inter venceu mais" << endl;
    else if(vgremio > vinter)
        cout << "Gremio venceu mais" << endl;
    else
        cout << "Nao houve vencedor" << endl;
    

    return 0;
}
