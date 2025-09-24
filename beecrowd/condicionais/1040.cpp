#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
 
    double A, B, C, D, media;

    cin >> A;
    cin >> B;
    cin >> C;
    cin >> D;
    
    A = A*2;    
    B = B*3;    
    C = C*4;    
    D = D*1;
    
    media = (A+B+C+D) / 10;

    cout << fixed << setprecision(1);
    
    if(media >= 7)
    {
        cout << "Media: " << media << endl;
        cout << "Aluno aprovado." << endl;
    }
    else if (media < 7 && media >= 5)
    {
        cout << "Media: " << media << endl;
        cout << "Aluno em exame." << endl;
        cin >> A;
        cout << "Nota do exame: " << A << endl;
        media = (media+A)/2;
        if(media >= 5)
        {
            cout << "Aluno aprovado" << endl;
            cout << "Media final: " << media << endl;
        }
        else
        {
            cout << "Aluno reprovado" << endl;
            cout << "Media final: " << media << endl;
        }
    }
    else if (media < 5)
    {
        cout << "Media: " << media << endl;
        cout << "Aluno reprovado." << endl;
    }
    return 0;
}