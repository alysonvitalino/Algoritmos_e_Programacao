#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;
 
int main() {
    
    string _;
    int diaInicio, diaFim;
    int hInicio, mInicio, sInicio;
    int hFim, mFim, sFim;
 
    cin >> _ >> diaInicio;
    cin >> hInicio;
    cin.ignore(); 
    cin.ignore(); 
    cin.ignore(); 
    cin >> mInicio;
    cin.ignore(); 
    cin.ignore(); 
    cin.ignore(); 
    cin >> sInicio;
    
    cin >> _ >> diaFim;
    cin >> hFim;
    cin.ignore(); 
    cin.ignore(); 
    cin.ignore(); 
    cin >> mFim;
    cin.ignore(); 
    cin.ignore(); 
    cin.ignore(); 
    cin >> sFim;
    
    int inicioSegundos = diaInicio * 86400 + hInicio * 3600 + mInicio * 60 + sInicio;
    int fimSegundos = diaFim * 86400 + hFim * 3600 + mFim * 60 + sFim;

    int duracao = fimSegundos - inicioSegundos;
    
    int dias = duracao / 86400;
    duracao %= 86400;
    int horas = duracao / 3600;
    duracao %= 3600;
    int minutos = duracao / 60;
    int segundos = duracao % 60;
    
    cout << dias << " dia(s)" << endl;
    cout << horas << " hora(s)" << endl;
    cout << minutos << " minuto(s)" << endl;
    cout << segundos << " segundo(s)" << endl;
    
    return 0;
}