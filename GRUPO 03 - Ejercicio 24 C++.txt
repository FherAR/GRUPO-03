#include <iostream>

using namespace std;

int PuntosCalidad(int prom) {
    if(prom >= 90 && prom <= 100) return 4;
    else if(prom >= 80 && prom <= 89) return 3;
    else if(prom >= 70 && prom <= 79) return 2;
    else if(prom >= 60 && prom <= 69) return 1;
    else return 0;
}

int main() {
    cout << PuntosCalidad(85) << endl;
    return 0;
}

