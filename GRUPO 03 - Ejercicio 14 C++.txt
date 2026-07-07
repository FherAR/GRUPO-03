#include <iostream>
#include <vector>

using namespace std;

void Ordenar(vector<int>& v, int n) {
    for(int i = 0; i <= n - 2; i++) {
        for(int j = 0; j <= n - i - 2; j++) {
            if(v[j] > v[j+1]) {
                int aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
}

void Imprimir(const vector<int>& v, int n) {
    for(int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    int n = 3;
    vector<int> v = {5, 2, 8};
    
    Ordenar(v, n);
    Imprimir(v, n);
    
    return 0;
}
