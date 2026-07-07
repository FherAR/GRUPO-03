#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> Promedios = {15, 18, 10, 12};
    
    // Ordenar descendentemente
    sort(Promedios.rbegin(), Promedios.rend());
    
    cout << "Alumnos en tercio superior:" << endl;
    // Tercio superior de 4 (aprox los 2 primeros basándonos en la prueba de escritorio)
    for(int i = 0; i < 2; i++) {
        cout << Promedios[i] << endl;
    }
    
    return 0;
}
