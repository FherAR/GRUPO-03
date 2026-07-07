#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Ingrese el tamaño de la matriz identidad (n): ";
    cin >> n;
    
    vector<vector<int>> matriz(n, vector<int>(n));
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j) {
                matriz[i][j] = 1;
            } else {
                matriz[i][j] = 0;
            }
        }
    }
    
    // Imprimir para verificar
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

