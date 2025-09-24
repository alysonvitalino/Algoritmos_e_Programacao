#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


int main(){
    float base, altura, area, perimetro, diagonal;
    cout << "Digite a base do retangulo:";
    cin >> base;
    cout << "Digite a altura do retangulo:";
    cin >> altura;

    area = base * altura;
    perimetro = (2 * base) + (2 * altura);
    diagonal = sqrt((base*base) + (altura*altura));


    cout << fixed << setprecision(4); 
    cout << "A area do retangulo e " << area << endl;
    cout << "O perimetro do retangulo e " << perimetro << endl;
    cout << "A diagonal do retangulo e " << diagonal << endl;

    return 0;
}