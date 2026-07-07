#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    double suma = 0.0, prom;
    
    cout << "Ingrese la cantidad de notas: ";
    cin >> n;
    
    vector<double> notas(n);
    cout << "Ingrese las notas:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> notas[i];
        suma += notas[i];
    }
    
    prom = suma / n;
    cout << "El promedio es: " << prom << endl;
    return 0;
}
