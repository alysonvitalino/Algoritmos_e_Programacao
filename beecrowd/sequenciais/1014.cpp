#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
 
    int distancia;
    double combustivel, consumo;
    
    cin >> distancia;
    cin >> combustivel;
    
    consumo = distancia / combustivel;
    
    cout << fixed << setprecision(3);
    
    cout << consumo << " km/l" << endl;
    
    return 0;
}

/* 
500
35.0
	

14.286 km/l

2254
124.4
	

18.119 km/l

4554
464.6 
*/